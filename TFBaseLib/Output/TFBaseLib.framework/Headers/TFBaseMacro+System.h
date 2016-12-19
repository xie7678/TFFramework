//
//  TFMacro+System.h
//  Treasure
//
//  Created by xiayiyong on 15/9/14.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#define SYSTEM_VERSION [[UIDevice currentDevice] systemVersion]
#define SYSTEM_LANGUAGE ([[NSLocale preferredLanguages] objectAtIndex:0])

#define APP_VERSION      [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define APP_KEY_WINDOW                [[UIApplication sharedApplication] keyWindow]
#define APP_DELEGATE      ((AppDelegate *)[[UIApplication sharedApplication] delegate])

#define TARGET_IOS9X [[[UIDevice currentDevice] systemVersion] floatValue] >=9.0f
#define TARGET_IOS8X [[[UIDevice currentDevice] systemVersion] floatValue] >=8.0f
#define TARGET_IOS7X [[[UIDevice currentDevice] systemVersion] floatValue] >=7.0f

#define TARGET_IPHONE      (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define TARGET_IPAD   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define TARGET_SIMULATOR   (NSNotFound != [[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location)

#define TARGET_IPHONE_4  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define TARGET_IPHONE_5  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define TARGET_IPHONE_6    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334),[[UIScreen mainScreen] currentMode].size) : NO)
#define TARGET_IPHONE_6PLUS    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208),[[UIScreen mainScreen] currentMode].size) : NO)



