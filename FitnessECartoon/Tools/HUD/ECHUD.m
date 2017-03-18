//
//  ECHUD.m
//  FitnessECartoon
//
//  Created by 荣刚 on 17/3/18.
//  Copyright © 2017年 荣刚. All rights reserved.
//

#import "ECHUD.h"
#import "MBProgressHUD.h"
#import "ALToastView.h"

#define MBTAG                           98999

@implementation ECHUD

+ (void)showToast:(UIView *)view withText:(NSString *)text {
    if ( text && text.length > 15 ) {
        [ALToastView toastInView:view withText:text];
    } else{
        MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
        
        hud.mode = MBProgressHUDModeText;
        hud.label.text = text;
        hud.removeFromSuperViewOnHide = YES;
        
        [hud hideAnimated:YES afterDelay:2.0f];
    }
}

+ (void)showHUD:(UIView *)view withText:(NSString *)text {
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
    hud.tag = MBTAG;
    hud.label.text = text;
}

+ (void)hideHud:(UIView *)view {
    MBProgressHUD *mb = (MBProgressHUD *)[view viewWithTag:MBTAG];
    if (nil != mb || ![mb isHidden]) {
        [mb removeFromSuperview];
    }
}

@end
