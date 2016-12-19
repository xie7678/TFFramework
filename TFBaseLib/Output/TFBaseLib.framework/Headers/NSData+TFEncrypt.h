//
//  NSData+TFEncrypt.h
//  Treasure
//
//  Created by xiayiyong on 15/9/9.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonHMAC.h>

@interface NSData (TFEncrypt)

/**
 * MD加密算法
 */
- (NSData *)MD2;
- (NSData *)MD4;
- (NSData *)MD5;

/**
 * SHA加密算法
 */
- (NSData *)SHA1;
- (NSData *)SHA224;
- (NSData *)SHA256;
- (NSData *)SHA384;
- (NSData *)SHA512;

/**
 * AES256加密与解密
 */
- (NSData *)AES256EncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)AES256DecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * DES加密与解密
 */
- (NSData *)DESEncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)DESDecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * CAST加密与解密
 */
- (NSData *)CASTEncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)CASTDecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * 弱加密算法
 */
- (NSData *)dataEncryptedUsingAlgorithm:(CCAlgorithm)algorithm
                                    key:(id)key		// data or string
                                  error:(CCCryptorStatus *)error;
- (NSData *)dataEncryptedUsingAlgorithm:(CCAlgorithm)algorithm
                                    key:(id)key		// data or string
                                options:(CCOptions) options
                                  error:(CCCryptorStatus *) error;
- (NSData *)dataEncryptedUsingAlgorithm:(CCAlgorithm) algorithm
                                    key:(id)key		// data or string
                   initializationVector:(id)iv		// data or string
                                options:(CCOptions)options
                                  error:(CCCryptorStatus *)error;

- (NSData *)decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                    key:(id)key		// data or string
                                  error:(CCCryptorStatus *)error;
- (NSData *)decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                    key:(id)key		// data or string
                                options:(CCOptions)options
                                  error:(CCCryptorStatus *)error;
- (NSData *)decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                    key:(id)key		// data or string
                   initializationVector:(id)iv		// data or string
                                options:(CCOptions)options
                                  error:(CCCryptorStatus *)error;

@end
