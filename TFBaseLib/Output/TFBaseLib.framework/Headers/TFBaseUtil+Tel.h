//
//  TFBaseUtil+Tel.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TFBaseUtil (Tel)

+ (BOOL)canTel;

+ (void)tel:(NSString*)phoneNumber;

+ (void)telprompt:(NSString*)phoneNumber;

@end
