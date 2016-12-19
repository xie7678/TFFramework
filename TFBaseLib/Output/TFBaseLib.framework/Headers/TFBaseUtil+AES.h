//
//  TFBaseUtil+AES.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/13.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

NSString* tf_aes256Encrypt(NSString* string, const void *key);

NSString* tf_aes256Decrypt(NSString* base64EncodedString, const void *key);

@interface TFBaseUtil (AES)

+ (NSData *)aesKeyForPassword:(NSString *)password;

+ (NSString *)aes256Encrypt:(NSString *)message password:(NSString *)password;              /*加密方法,参数需要加密的内容*/
+ (NSString *)aes256Decrypt:(NSString *)base64EncodedString password:(NSString *)password;  /*解密方法，参数数密文*/

+ (NSString *)aes256Encrypt:(NSString *)message keyByte:(const void *)keyByte;              /*加密方法,参数需要加密的内容*/
+ (NSString *)aes256Decrypt:(NSString *)base64EncodedString keyByte:(const void *)keyByte;  /*解密方法，参数数密文*/

@end
