//
//  TFBaseUtil+Other.h
//  TFBaseLib
//
//  Created by xiayiyong on 16/2/4.
//  Copyright © 2016年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TFBaseUtil.h"

/**
 判读是否为空或输入只有空格
 */
BOOL tf_isEmpty(NSString *string);

/**
 *  禁止输入表情
 *  判断驶入的字段为表情的时候，用空字符替换。
 */
NSString *tf_disableEmoji(NSString *string);

/**
 *  判断驶入的字段为表情
 */
BOOL tf_isContainsEmoji(NSString *string);


@interface TFBaseUtil (Other)
/**
 *  判断字符串是否为空
 *
 *  @param string string
 *
 *  @return 空返回YES
 */
+(BOOL) isEmpty:(NSString *)string;

/**
 *  禁止输入表情
 *  判断驶入的字段为表情的时候，用空字符替换。
 */
+(NSString *) disableEmoji:(NSString *)string;

/**
 *  判断驶入的字段为表情
 */
+(BOOL) isContainsEmoji:(NSString *)string;

@end
