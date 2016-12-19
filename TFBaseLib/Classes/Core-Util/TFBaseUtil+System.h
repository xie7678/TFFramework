//
//  TFBaseUtil+System.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (System)

/**
 *  获取系统版本号
 *
 *  @return 系统版本号
 */
+ (NSInteger)iOSVersion;

/**
 *  设备是否是iPad
 */
+ (BOOL)isiPad;

/**
 *  设备是否是ipho
 */
+ (BOOL)isiPhone;

/**
 *  设备是否是Retina
 */
+ (BOOL)isRetina;

/**
 *  设备是否是RetinaHD
 */
+ (BOOL)isRetinaHD;

/**
 *  设备是否是Landscape
 */
+ (BOOL)isLandscape;

@end
