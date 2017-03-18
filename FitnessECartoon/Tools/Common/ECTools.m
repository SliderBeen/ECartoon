//
//  ECTools.m
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import "ECTools.h"

static NSString *VersionKey = @"CFBundleVersion";

@implementation ECTools

+ (NSString *)resoursePath:(NSString *)resourceName {
    return [[NSBundle mainBundle] pathForResource:resourceName ofType:nil];
}

+ (UIImage *)resourseImage:(NSString *)imageName {
    return [UIImage imageWithContentsOfFile:[self resoursePath:imageName]];
}

+ (BOOL)isNewVersion {
    // 取出沙盒中存储的上次使用软件的版本号
    NSString *lastVersion = [ECDefaults stringForKey:VersionKey];
    // 获得当前软件的版本号
    NSString *currentVersion = [NSBundle mainBundle].infoDictionary[VersionKey];
    
    return ![lastVersion isEqualToString:currentVersion];
}

+ (void)storeAppVersion {
    // 获得当前软件的版本号
    NSString *currentVersion = [NSBundle mainBundle].infoDictionary[VersionKey];
    [ECDefaults setObject:currentVersion forKey:VersionKey];
    [ECDefaults synchronize];
}

@end
