//
//  Config.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#ifdef DEBUG
#define ECLog(...) NSLog(@"%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define ECLog(...)
#endif

#define WeakObj(o) autoreleasepool{} __weak typeof(o) o##Weak = o
#define StrongObj(o) autoreleasepool{} __strong typeof(o) o = o##Weak

/******************************************************************
 屏幕的宽度与高度
 *****************************************************************/
#define kScreenWidth    [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight   [[UIScreen mainScreen] bounds].size.height

#define IPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define IPHONE6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size)) : NO)
#define IPHONE6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size)) : NO)

// -----------------------------------------------------------------
// 判断系统版本
// -----------------------------------------------------------------
#define CurrentVersion   ([[[UIDevice currentDevice] systemVersion] floatValue])

// 判断一个数组是否合法
#define IsValidateArr(arr) ((arr && [arr isKindOfClass:[NSArray class]] && arr.count > 0))
// 判断一个字典是否合法
#define IsValidateDic(dic) (nil != dic && [dic isKindOfClass:[NSDictionary class]] && dic.count > 0)

// 判断一个NSString是否合法
#define IsValidateString(str) ((nil != str) && ([str isKindOfClass:[NSString class]]) && (str.length > 0) && (![str isEqualToString:@"(null)"]) && ((NSNull *) str != [NSNull null]) && (![str isEqualToString:@"<null>"]))

/******************************************************************
 第三方平台所需的参数值
 *****************************************************************/

// -----------------------------------------------------------------
// 新浪微博授权所需的appkey、appsecret、callbackurl
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// 腾讯微博授权所需的appkey、appsecret、callbackurl
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// qq授权所需的appkey
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// 微信授权所需的id
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// UMeng所需的key
// -----------------------------------------------------------------

// -----------------------------------------------------------------
// Baidu所需的key
// -----------------------------------------------------------------

/******************************************************************
 需要用到的颜色
 *****************************************************************/
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define ECRGBColor(r, g, b) ([UIColor colorWithRed:(float)(r)/255.0 green:(float)(g)/255.0 blue:(float)(b)/255.0 alpha:1.0])
#define ECRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]
#define ECRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
// clear背景颜色
#define ECClearColor [UIColor clearColor]

//设置 view 圆角和边框
#define ECViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

//由角度转换弧度 由弧度转换角度
#define ECDegreesToRadian(x) (M_PI * (x) / 180.0)
#define ECRadianToDegrees(radian) (radian*180.0)/(M_PI)

#define ECNotificationCenter [NSNotificationCenter defaultCenter]
#define ECDefaults [NSUserDefaults standardUserDefaults]

#define kWindow [UIApplication sharedApplication].keyWindow

#define ECAppDelegate (AppDelegate *)([UIApplication sharedApplication].delegate)

//获取view的frame（不建议使用）
#define kGetViewWidth(view) view.frame.size.width
#define kGetViewHeight(view) view.frame.size.height
#define kGetViewX(view) view.frame.origin.x
#define kGetViewY(view) view.frame.origin.y
//获取图片资源
#define kGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

//GCD - 一次性执行
#define kDISPATCH_ONCE_BLOCK(onceBlock) static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);
//GCD - 在Main线程上运行
#define kDISPATCH_MAIN_THREAD(mainQueueBlock) dispatch_async(dispatch_get_main_queue(), mainQueueBlock);
//GCD - 开启异步线程
#define kDISPATCH_GLOBAL_QUEUE_DEFAULT(globalQueueBlock) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), globalQueueBlocl);
