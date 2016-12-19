//
//  TFBaseUtil+URL.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TFBaseUtil.h"

@interface TFBaseUtil (URL)

+(BOOL)canOpenURL:(NSString*)urlString;

+(void)openURL:(NSString*)urlString;

@end
