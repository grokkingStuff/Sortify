//
//  Core.swift
//  MobileNet
//
//  Created by Vishakh Pradeep Kumar on 10/15/17.
//  Copyright © 2017 Hollance. All rights reserved.
//

import UIKit

extension UIImage {
    func imageRotatedByDegrees(deg degrees: CGFloat) -> UIImage {
        let size = self.size
        
        UIGraphicsBeginImageContext(size)
        
        let bitmap: CGContext = UIGraphicsGetCurrentContext()!
        //Move the origin to the middle of the image so we will rotate and scale around the center.
        bitmap.translateBy(x: size.width / 2, y: size.height / 2)
        //Rotate the image context
        bitmap.rotate(by: (degrees * CGFloat(Double.pi / 180)))
        //Now, draw the rotated/scaled image into the context
        bitmap.scaleBy(x: 1.0, y: -1.0)
        
        let origin = CGPoint(x: -size.width / 2, y: -size.width / 2)
        
        bitmap.draw(self.cgImage!, in: CGRect(origin: origin, size: size))
        
        let newImage: UIImage = UIGraphicsGetImageFromCurrentImageContext()!
        UIGraphicsEndImageContext()
        return newImage
    }

    func resizeImage(newWidth: CGFloat) -> UIImage {
        
        let scale = newWidth / self.size.width
        let newHeight = self.size.height * scale
        
        UIGraphicsBeginImageContext(CGSize(width: newWidth, height: newHeight))
        
        
        self.draw(in: CGRect(x: 0, y: 0,width: newWidth, height: newHeight))
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        
        return newImage!
    }
    
    
    
    
    
}
