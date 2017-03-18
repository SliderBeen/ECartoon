//
//  Config.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#ifdef DEBUG
#define ECLog(...) NSLog(__VA_ARGS__)
#else
#define ECLog(...)
#endif

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

#define UIColorFromRGBWithDecimal(r, g, b) ([UIColor colorWithRed:(float)(r)/255.0 green:(float)(g)/255.0 blue:(float)(b)/255.0 alpha:1.0])

#define ECDefaults [NSUserDefaults standardUserDefaults]
