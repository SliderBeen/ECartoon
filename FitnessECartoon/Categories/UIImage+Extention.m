//
//  UIImage+Extention.m
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import "UIImage+Extention.h"

@implementation UIImage (Extention)

/**
 * captureView:
 *
 * 获取某个视图的截图
 *
 * @Paramters:
 *          theView - 视图
 */
+ (UIImage *)captureView:(UIView *)theView
{
    CGRect rect = theView.frame;
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    [theView.layer renderInContext:context];
    UIImage *img = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return img;
}

/**
 * reSizeImagetoSize:
 *
 * 自定义image的长宽
 *
 * @Paramters:
 *          reSize - 图片大小
 */
- (UIImage *)reSizeImagetoSize:(CGSize)reSize
{
    UIGraphicsBeginImageContext(CGSizeMake(reSize.width, reSize.height));
    [self drawInRect:CGRectMake(0, 0, reSize.width, reSize.height)];
    UIImage *reSizeImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return reSizeImage;
}

/**
 * compressImage::
 *
 * 压缩image
 *
 * @Paramters:
 *          compressionQuality - 压缩质量
 */
- (UIImage *)compressImage:(CGFloat)compressionQuality
{
    if (nil == self) {
        return nil;
    }
    
    NSData *photo = UIImageJPEGRepresentation(self, compressionQuality);
    UIImage *result = [UIImage imageWithData:photo];
    
    return result;
}

/**
 * scaleImagetoScale:
 *
 * 等比例缩放image
 *
 * @Paramters:
 *          scaleSize - 缩放比例
 */
- (UIImage *)scaleImagetoScale:(float)scaleSize
{
    UIGraphicsBeginImageContext(CGSizeMake(self.size.width * scaleSize, self.size.height * scaleSize));
    [self drawInRect:CGRectMake(0.0, 0.0, self.size.width * scaleSize, self.size.height * scaleSize)];
    UIImage *scaledImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return scaledImage;
}

@end
