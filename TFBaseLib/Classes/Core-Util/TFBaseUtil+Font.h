//
//  TFBaseUtil+Font.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TFBaseUtil.h"

@interface TFBaseUtil (Font)


/**
*  获取文本的高度、宽度
*
*  @param font font
*  @param text text
*
*  @return 返回文本大小
*/
+ (CGSize)sizeWithFont:(UIFont*)font text:(NSString *)text;

/**
 *  获取文本的高度、宽度
 *
 *  @param font     font
 *  @param text     text
 *  @param maxWidth maxWidth
 *
 *  @return 返回文本大小
 */
+ (CGSize)sizeWithFont:(UIFont *)font text:(NSString *)text maxWidth:(CGFloat)maxWidth;

/**
 *  获取文本的高度、宽度
 *
 *  @param fontSize fontSize
 *  @param text     text
 *  @param maxWidth maxWidth
 *
 *  @return 返回文本大小
 */
+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth;

/**
 *  获取文本的高度、宽度
 *
 *  @param fontSize fontSize
 *  @param text     text
 *
 *  @return 返回文本大小
 */
+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text;

/**
 *  获取文本的高度、宽度
 *
 *  @param fontSize fontSize
 *  @param text     text
 *  @param maxWidth maxWidth
 *
 *  @return 返回文本大小
 */
+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth;

/**
 *  获取文本的高度、宽度
 *
 *  @param fontSize fontSize
 *  @param text     text 
 *
 *  @return 返回文本大小
 */
+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text;

@end
