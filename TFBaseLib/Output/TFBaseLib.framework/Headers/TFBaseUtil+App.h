//
//  TFBaseUtil+App.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (App)

/*
 * 判断本机是否安装了某个应用，该应用是自己公司的产品
 */
+ (BOOL)hasLocalInstallApp:(NSString *)urlSchemes;

/*
 * 判断能否打开指定的Itunes应用的链接
 */
+ (BOOL)canOpenApp:(NSString *)itunesUrlString;

/*
 * 在本机调起指定的应用
 */
+ (void)openLocalApp:(NSString *)urlSchemes;

/*
 * 进入APP Store
 */
+ (void)openAppStore:(NSString *)itunesUrlString;

@end
