//
//  NSString+TFEncrypt.h
//  UIDeviceAddition
//
//  Created by xiayiyong on 15/7/1.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(TFEncrypt)

- (NSString *)md5;
- (NSString *)SHA1;
- (NSString *)SHA256;
- (NSString *)SHA512;

@end
