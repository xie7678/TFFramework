//
//  UIColor+Category.h
//
//  Created by xiayy on 12-9-3.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Category)

@property (nonatomic, readonly) CGColorSpaceModel colorSpaceModel;
@property (nonatomic, readonly) BOOL canProvideRGBComponents;
@property (nonatomic, readonly) CGFloat red;
@property (nonatomic, readonly) CGFloat green;
@property (nonatomic, readonly) CGFloat blue;
@property (nonatomic, readonly) CGFloat white;
@property (nonatomic, readonly) CGFloat alpha;

+ (UIColor *)colorWithHex:(unsigned int)hex;
+ (UIColor *)colorWithHex:(unsigned int)hex alpha:(CGFloat)alpha;

+ (UIColor*)colorWithHexString:(NSString*)hex;
+ (UIColor*)colorWithHexString:(NSString*)hex alpha:(CGFloat)alpha;

+ (UIColor *)randomColor;
+ (UIColor *)colorWithColor:(UIColor *)color alpha:(float)alpha;


@end
