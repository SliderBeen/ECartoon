//
//  ECTabBarViewController.m
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import "ECTabBarController.h"
#import "ECNavigationController.h"
#import "HomePageViewController.h"
#import "ChallengeViewController.h"
#import "PrivateCustomViewController.h"
#import "MessageViewController.h"
#import "MeViewController.h"

@interface ECTabBarController ()

@end

@implementation ECTabBarController

#pragma mark - initialize
+ (void)initialize {
    
}

#pragma mark - lifeCircle
- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupChildViewControllers];
}

- (void)setupChildViewControllers {
    NSArray *sbNames = @[@"HomePage", @"Challenge", @"PrivateCustom", @"Message", @"Me"];
    NSArray *vcNames = @[@"首页", @"健身挑战", @"私人定制", @"聊吧", @"我"];
    NSArray *navTitles = @[@"健身E卡通", @"健身挑战", @"私人定制", @"聊吧", @"我"];
    for (NSInteger i = 0; i < sbNames.count; i++) {
        UIStoryboard *sb = [UIStoryboard storyboardWithName:sbNames[i] bundle:nil];
        
        UIViewController *vc = sb.instantiateInitialViewController;
        vc.navigationItem.title = navTitles[i];
        
        ECNavigationController *nav = [[ECNavigationController alloc] initWithRootViewController:vc];
        nav.tabBarItem.title = vcNames[i];
        
        [self addChildViewController:nav];
    }
}

@end
