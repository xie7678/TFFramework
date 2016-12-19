//
//  TFBaseUtil+Float.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TFBaseUtil.h"

@interface TFBaseUtil (Float)

/**
 *  Create a random float
 */
+ (CGFloat)randomFloat;

/**
 *  Create a random float between the given range
 */
+ (CGFloat)randomFloatBetweenMin:(CGFloat)minValue andMax:(CGFloat)maxValue;

/**
 *  Create a random integer between the given range
 */
+ (NSInteger)randomIntBetweenMin:(NSInteger)minValue andMax:(NSInteger)maxValue;

@end
