//
//  ECTools.m
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import "ECTools.h"

@implementation ECTools

+ (NSString *)resoursePath:(NSString *)resourceName {
    return [[NSBundle mainBundle] pathForResource:resourceName ofType:nil];
}

+ (UIImage *)resourseImage:(NSString *)imageName {
    return [UIImage imageWithContentsOfFile:[self resoursePath:imageName]];
}

@end
