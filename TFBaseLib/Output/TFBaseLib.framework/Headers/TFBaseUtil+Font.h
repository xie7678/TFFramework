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

/*!
 * 获取文本的高度、宽度
 *
 * @return 适应的宽高
 */
+ (CGSize)sizeWithFont:(UIFont*)font text:(NSString *)text;
+ (CGSize)sizeWithFont:(UIFont *)font text:(NSString *)text maxWidth:(CGFloat)maxWidth;

+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth;
+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text;

+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth;
+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text;

@end
