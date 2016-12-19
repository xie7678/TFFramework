//
//  TFBaseUtil+System.m
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil+System.h"
#import <UIKit/UIKit.h>

@implementation TFBaseUtil (System)

+ (NSInteger)iOSVersion
{
    return [[[UIDevice currentDevice] systemVersion] integerValue];
}

+ (BOOL)isiPad
{
    return [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad;
}

+ (BOOL)isiPhone
{
    return [UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPhone;
}

+ (BOOL)isRetina
{
    return [[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)]
    && ([UIScreen mainScreen].scale == 2.0 || [UIScreen mainScreen].scale == 3.0);
}

+ (BOOL)isRetinaHD
{
    return [[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)]
    && ([UIScreen mainScreen].scale == 3.0);
}

+ (BOOL)isLandscape
{
    return (UIInterfaceOrientationIsLandscape \
            ([[UIApplication sharedApplication] statusBarOrientation]));
}

@end
