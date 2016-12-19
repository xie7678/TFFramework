//
//  TFBaseUtil+Degrees.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (Degrees)

/*!
 * 把角度转弧度
 */
+(CGFloat)degreesToRadian:(CGFloat)degree;

/*!
 * 把弧度转角度
 */
+(CGFloat)randianToDegrees:(CGFloat)radian;


@end
