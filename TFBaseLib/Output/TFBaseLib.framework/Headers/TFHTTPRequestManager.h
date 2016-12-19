//
//  TFHTTPManager.h
// Treasure
//
//  Created by xiayiyong on 15/7/1.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@interface TFHTTPRequestManager : NSObject

#define kTFHTTPManager  ([TFHTTPManager sharedManager])

typedef NS_ENUM(NSInteger, HttpRequestMethod)
{
    HttpRequestMethod_POST=0,
    HttpRequestMethod_GET,
    HttpRequestMethod_DELETE,
    HttpRequestMethod_PUT,
    HttpRequestMethod_IMAGE,
};

typedef NS_ENUM(NSInteger, RequestSerializerType)
{
    RequestSerializerTypeJSON = 0,
    RequestSerializerTypeHTTP,
};

typedef NS_ENUM(NSInteger, ResponseSerializerType)
{
    ResponseSerializerTypeJSON = 0,
    ResponseSerializerTypeHTTP,
};

+ (instancetype) sharedManager;

//自动重连次数
@property (nonatomic, assign) NSInteger reconnectNum;

//HTTP请求的方法..
@property (nonatomic, assign) HttpRequestMethod requestMethod;

//服务器地址BaseUrl
@property (nonatomic, strong) NSString *baseUrl;

/**
 *  网络请求 默认POST
 *
 *  @param url
 *  @param parameters
 *  @param successBlock
 *  @param failureBlock
 *  @param errorBlock
 *
 *  @return NSURLSessionDataTask
 */
+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                                timeOut:(int)timeOut;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                              autoRetry:(int)timesToRetry;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                                timeOut:(int)timeOut
                              autoRetry:(int)timesToRetry;

/**
 *  网络请求 默认POST
 *
 *  @param url
 *  @param parameters
 *  @param beforeBlock
 *  @param successBlock
 *  @param failureBlock
 *  @param errorBlock
 *
 *  @return
 */
+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                                 before:(void (^)(void))beforeBlock
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock;

/**
 *  封装网络请求
 *
 *  @param url
 *  @param parameters
 *  @param requestMethod
 *  @param serializerType
 *  @param beforeBlock
 *  @param successBlock
 *  @param failureBlock
 *  @param errorBlock
 *
 *  @return
 */

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                          requestMethod:(HttpRequestMethod)requestMethod
                  requestSerializerType:(RequestSerializerType)requestSerializerType
                 responseSerializerType:(ResponseSerializerType)responseSerializerType
                                 before:(void (^)(void))beforeBlock
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                          requestMethod:(HttpRequestMethod)requestMethod
                  requestSerializerType:(RequestSerializerType)requestSerializerType
                 responseSerializerType:(ResponseSerializerType)responseSerializerType
                                 before:(void (^)(void))beforeBlock
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                                timeOut:(int)timeOut;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                          requestMethod:(HttpRequestMethod)requestMethod
                  requestSerializerType:(RequestSerializerType)requestSerializerType
                 responseSerializerType:(ResponseSerializerType)responseSerializerType
                                 before:(void (^)(void))beforeBlock
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                              autoRetry:(int)timesToRetry;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString*)url
                             httpHeader:(NSDictionary *)httpHeader
                             parameters:(NSDictionary*)parameters
                          requestMethod:(HttpRequestMethod)requestMethod
                  requestSerializerType:(RequestSerializerType)requestSerializerType
                 responseSerializerType:(ResponseSerializerType)responseSerializerType
                                 before:(void (^)(void))beforeBlock
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString* errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock
                              timeOut:(int)timeOut
                              autoRetry:(int)timesToRetry;

+ (NSURLSessionDataTask *)doTaskWithURL:(NSString *)url
                             parameters:(NSDictionary *)parameters
              constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block
                                success:(void (^)(id data))successBlock
                                failure:(void (^)(int errorCode, NSString *errorMessage))failureBlock
                                  error:(void (^)(NSError *error))errorBlock;

@end
