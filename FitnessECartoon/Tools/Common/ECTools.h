//
//  ECTools.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ECTools : NSObject

+ (NSString *)resoursePath:(NSString *)resourceName;

+ (UIImage *)resourseImage:(NSString *)imageName;

/**
 判断是否新版本
 */
+ (BOOL)isNewVersion;

/**
 存储App版本号
 */
+ (void)storeAppVersion;

@end
