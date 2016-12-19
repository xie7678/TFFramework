//
//  TFBaseUtil+System.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (System)

+ (NSInteger)iOSVersion;

+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (BOOL)isRetina;
+ (BOOL)isRetinaHD;

+ (BOOL)isLandscape;

@end
