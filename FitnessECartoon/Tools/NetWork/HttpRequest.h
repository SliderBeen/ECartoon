//
//  HttpRequest.h
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface HttpRequest : NSObject

+ (void)GET:(NSString *)URLString dict:(NSDictionary *)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;

+ (void)POST:(NSString *)URLString dict:(NSDictionary *)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;

@end
