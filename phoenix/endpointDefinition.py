import http.client

conn = http.client.HTTPSConnection("hackgt-api.ncrcloud.com")

headers = {
'accept': "application/json",
'content-type': "application/json",
'nep-correlation-id': "SOME_STRING_VALUE",
'nep-organization': "SOME_STRING_VALUE",
'nep-application-key': "19c7b50447ef0a4e0147ef8067900000",
'nep-service-version': "3.0.0-GA:1.0",
'nep-enterprise-unit': "102c19bde15c4533a67f9191f0135197"
}

conn.request("GET", "/catalog/category-nodes?pageNumber=0&pageSize=200&parentId=SOME_STRING_VALUE", headers=headers)

res = conn.getresponse()
data = res.read()

print(data.decode("utf-8"))
