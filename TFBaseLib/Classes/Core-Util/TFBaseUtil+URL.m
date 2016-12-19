//
//  TFBaseUtil+URL.m
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil+URL.h"

@implementation TFBaseUtil (URL)

//打开URL
+(BOOL)canOpenURL:(NSString*)urlString
{
    return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:urlString]];
}

+(void)openURL:(NSString*)urlString
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlString]];
}


@end
