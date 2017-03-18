//
//  UIImage+Extention.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extention)

+ (UIImage *)captureView:(UIView *)theView;
- (UIImage *)reSizeImagetoSize:(CGSize)reSize;
- (UIImage *)compressImage:(CGFloat)compressionQuality;
- (UIImage *)scaleImagetoScale:(float)scaleSize;

@end
