//
//  TFBaseUtil+Font.m
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil+Font.h"

@implementation TFBaseUtil (Font)

+ (CGSize)sizeWithFont:(UIFont*)font text:(NSString *)text
{
    return [self sizeWithFont:font text:text maxWidth:CGFLOAT_MAX];
}

+ (CGSize)sizeWithFont:(UIFont *)font text:(NSString *)text maxWidth:(CGFloat)maxWidth {
    NSDictionary *attribute = @{NSFontAttributeName: font};
    CGRect rect = [text boundingRectWithSize:CGSizeMake(maxWidth, CGFLOAT_MAX)
                                     options:NSStringDrawingUsesLineFragmentOrigin
                                  attributes:attribute
                                     context:nil];
    return rect.size;
}

+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth {
    return [self sizeWithFont:[UIFont systemFontOfSize:fontSize] text:text maxWidth:maxWidth];
}

+ (CGSize)sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text {
    return [self sizeWithFont:[UIFont systemFontOfSize:fontSize] text:text maxWidth:CGFLOAT_MAX];
}

+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth {
    return [self sizeWithFont:[UIFont boldSystemFontOfSize:fontSize] text:text maxWidth:maxWidth];
}

+ (CGSize)sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text {
    return [self sizeWithFont:[UIFont boldSystemFontOfSize:fontSize] text:text maxWidth:CGFLOAT_MAX];
}

@end
