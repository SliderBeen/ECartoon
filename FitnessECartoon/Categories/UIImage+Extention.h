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
/**
 *  初始化一张适配iPhone屏幕尺寸的图片, 类方法
 *
 *  @param imageName 图片名称
 *
 *  @param iphone5 是否有iPhone5的图片, 默认`NO`, 无图片; 有图片请参考命名: `<name>_iphone5`, 如: `Apple_iphone5h@2x.png`
 *
 *  @param iphone6 是否有iPhone6的图片, 默认`NO`, 无图片; 有图片请参考命名: `<name>_iphone6`, 如: `Apple_iphone6@2x.png`
 *
 *  @param iphone6p 是否有iPhone6P的图片, 默认`NO`, 无图片; 有图片请参考命名: `<name>_iphone6p`, 如: `Apple_iphone6p@2x.png`
 */
+ (UIImage *)imageNamedForAdaptation:(NSString *)imageName
                                iphone5:(BOOL)iphone5
                                iphone6:(BOOL)iphone6
                               iphone6p:(BOOL)iphone6p;

@end
