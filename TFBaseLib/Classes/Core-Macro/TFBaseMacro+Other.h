//
//  TFMacro+Color.h
//  Treasure
//
//  Created by xiayiyong on 15/9/14.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

/**
 *  创建数组
 */
#define ARR(...) [NSArray arrayWithObjects:__VA_ARGS__, nil]

/**
 *  创建动态数组
 */
#define MARR(...) [NSMutableArray arrayWithObjects:__VA_ARGS__, nil]

/**
 *  创建字符串
 */
#define STR(string, args...)    [NSString stringWithFormat:string, args]

/**
 *  读取本地图片
 */
#define LOADIMAGE(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]

/**
 *  定义UIImage对象
 */
#define IMAGE(name) [UIImage imageNamed:name]

/**
 *  Alert
 */
#define ALERT(title, msg) \
UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil \
cancelButtonTitle:@"确定" \
otherButtonTitles:nil]; \
[alert show];
/**
 *  创建通知
 */
#define POST_NOTIFICATION(name) [[NSNotificationCenter defaultCenter] postNotificationName:name object:self];

//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

#define RESIZABLE_IMAGE(name,top,left,bottom,right) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right)]
#define RESIZABLE_IMAGE_MODEL(name,top,left,bottom,right,mode) [[UIImage imageNamed:name] resizableImageWithCapInsets:UIEdgeInsetsMake(top,left,bottom,right) resizingMode:mode]
