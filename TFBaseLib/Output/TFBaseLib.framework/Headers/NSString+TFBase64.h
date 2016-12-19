//
//  NSString+TFBase64.h
//  Treasure
//
//  Created by xiayiyong on 15/9/9.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (TFBase64)

- (NSString *)base64Encoding;
+ (NSString *)base64Encoding:(NSString *)text;

@end
