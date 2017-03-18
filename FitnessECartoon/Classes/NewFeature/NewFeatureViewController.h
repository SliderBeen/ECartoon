//
//  NewFeatureViewController.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NewFeatureViewController;

/**
 *  完成新特性界面展示后的block回调
 */
typedef void (^ECNewFeatureFinishBlock)();


/**
 状态栏样式
 */
typedef enum : NSUInteger {
    ECStatusBarStyleBlack,  // 黑色
    ECStatusBarStyleWhite,  // 白色
    ECStatusBarStyleNone,   // 隐藏
} ECStatusBarStyle;

@protocol ECNewFeatureVCDelegate <NSObject>

@optional

/**
 *  代理方法，回调当前页码
 *
 *  @param newFeatureVC 控制器
 *  @param page         当前页码
 */
- (void)newFeatureVC:(NewFeatureViewController *)newFeatureVC page:(NSInteger)page;

@end

@interface NewFeatureViewController : UIViewController

#pragma mark - 属性 Properties

/**
 *  当前点(分页控制器)的颜色
 */
@property (nonatomic, strong) UIColor *pointCurrentColor;

/**
 *  其他点(分页控制器)的颜色
 */
@property (nonatomic, strong) UIColor *pointOtherColor;

/**
 *  状态栏样式, 请先参考`必读`第3条设置
 */
@property (nonatomic, assign) ECStatusBarStyle statusBarStyle;

/**
 *  是否显示跳过按钮, 默认不显示
 */
@property (nonatomic, assign) BOOL showSkip;

/**
 *  点击跳过按钮的 block
 */
@property (nonatomic, copy) ECNewFeatureFinishBlock skipBlock;

/**
 *  代理
 */
@property (nonatomic, weak) id<ECNewFeatureVCDelegate> delegate;

@end
