var bodyParser = require('body-parser')
var express = require('express')
var app = express()
var port = process.env.PORT || 5000;
var path = require('path');
var server = require('http').createServer(app);
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));
var QRCode = require('qrcode')
var uniqid = require('uniqid');

app.use(express.static(path.join(__dirname, 'barcodeScanner')));



// var upload = multer({ dest: 'uploads/' });
var fs = require('fs');
var needle = require('needle');
// var config = require("./config.js")
const bcrypt = require('bcrypt')
const saltRounds = 10;
const session = require('express-session')
var redis = require('redis');

app.use(session({
  secret: 'keyboard cat',
  resave: false,
  saveUninitialized: true,
  cookie: { secure: false }
}))
app.post('/login', function (req, res) {
  var user = req.body.user;
  var pass = req.body.pass;
  checkCred(user, pass, function(isValid) {
    if (isValid) {
      req.session["user"] = user;
      res.send({"status":"SUCCESS"});
    } else {
      res.send({"status":"FAILURE"});
    }

  })

})

var client = redis.createClient(); //creates a new client
client.on('connect', function() {
  console.log('connected Redis');
});


//populate what I want
bcrypt.genSalt(saltRounds, function(err, salt) {
  bcrypt.hash("ddd", salt, function(err, hash) {
      // Store hash in your password DB.
      client.set('creds', JSON.stringify({"dd":hash}));
      console.log(hash)
      
  });
});

//set view perms of dd to dd2 and dd3
client.hset(["hash key", "dd2", "dd3"]);
//inventory of dd

var inventory = [
  {product_name: "red sweater",
   classification: "clothes",
    tags: ["red", "comfortable"]},
  {product_name: "blue sweater",
  classification: "clothes",
    tags: ["blue", "comfortable"]}
]
client.set("dd-inventory", JSON.stringify(inventory))




function checkCred(user, pass, callback) {
  client.get('creds', function(err, reply) {
    if (err) {
      callback(false);
      return;
    }
    console.log(reply)
    
    reply = JSON.parse(reply);
    console.log(reply)
    var t_user = reply[user];
    if (t_user == null || typeof t_user === 'undefined') {
      console.log(t_user)
      callback(false);
      return;
    }

    bcrypt.compare(pass,t_user, function(err, res) {
      console.log(t_user);
      console.log(pass);
      console.log(res);
      // res == true
      callback(res)
      return;
    });
  });
}

client.get("dd-inventory", function(err, reply) {
  if (err) {
    console.log("error here");
  }
  reply = JSON.parse(reply);
  console.log(reply);
  return;
});

app.get("/lookup", function(req, res) {
  var q = req.query;
  if (typeof q.user === 'undefined') {
    res.send({status: FAILURE});
    return;
  }
  //user is looking up himself

  console.log("---- " + q.user + " " + req.session["user"] )
  if (req.session["user"] == q.user) {
    //throw everything at him
    client.get(q.user + "-inventory", function(err, reply) {
      if (err) {
        console.log("error here");
      }
      reply = JSON.parse(reply);
      res.send({"status": "SUCCESS", "data" : reply});
      return;
    });
  } else {
    res.send({"status": "FAILURE"});
  }
});


app.get('/', function(req, res){
  
});

app.get("/share", function(req, res) {
  console.log(req)
  if (typeof req.session.user === 'undefined') {
    res.send({"status": 'FAILURE'});
    return;
  }
  var shareToken = {
    'user_to_share' : req.session.user
  };
  var id = uniqid();
  QRCode.toFile("./" + id + ".png", JSON.stringify(shareToken)  , function (err) {
    res.send({"status": 'SUCCESS', 'url': "/barcodeScanner/" + id + ".png"});

  });
});

server.listen(port, function () {
  console.log("server running on port: " + port.toString())
})
