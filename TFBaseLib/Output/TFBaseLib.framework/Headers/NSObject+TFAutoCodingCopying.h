//
//  NSObject+TFAutoCodingCopying.h
//  Treasure
//
//  Created by xiayiyong on 15/9/2.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//  参考 https://github.com/nicklockwood/AutoCoding
//

#import <UIKit/UIKit.h>

@interface NSObject (TFAutoCodingCopying)<NSCoding, NSSecureCoding, NSCopying>

+ (NSDictionary *)codableProperties;
- (NSDictionary *)codableProperties;

+ (instancetype)objectWithContentsOfFile:(NSString *)path;
- (BOOL)writeToFile:(NSString *)filePath atomically:(BOOL)useAuxiliaryFile;

@end

