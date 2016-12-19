//
//  TFMacro+Path.h
//  Treasure
//
//  Created by xiayiyong on 15/9/14.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#define APP_HOME_PATH        NSHomeDirectory()
#define APP_CACHE_PATH      [NSHomeDirectory() stringByAppendingPathComponent:@"Library/Caches"]
#define APP_DOCUMENT_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define APP_DOCUMENT_PATH2 [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define APP_LIBRARY_PATH [NSHomeDirectory() stringByAppendingPathComponent:@"Library"]
#define APP_TMP_PATH    NSTemporaryDirectory()
#define APP_MAIN_BUNDLE [[NSBundle mainBundle] bundlePath]
#define APP_MAIN_BUNDLE_RESOURCE  [[NSBundle mainBundle] resourcePath]
#define APP_MAIN_BUNDLE_EXECUTABLE [[NSBundle mainBundle] executablePath]

