//
//  ECHUD.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ECHUD : NSObject


/**
 显示提示文字，然后自动消失

 @param view 添加到的视图
 @param text 文字
 */
+ (void)showToast:(UIView *)view withText:(NSString *)text;


/**
 显示提示文字，不消失

 @param view 添加到的视图
 @param text 文字
 */
+ (void)showHUD:(UIView *)view withText:(NSString *)text;


/**
 隐藏HUD

 @param view 添加到的视图
 */
+ (void)hideHud:(UIView *)view;

@end
