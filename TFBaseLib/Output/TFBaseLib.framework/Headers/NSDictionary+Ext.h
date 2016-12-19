//
//  NSDictionary+Ext.h
//  Treasure
//
//  Created by xiayiyong on 15/7/1.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Ext)

/*!
 * 把格式化的JSON格式的字符串转换成字典
 *
 * @param jsonString JSON格式的字符串
 * @return 返回字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/*!
 * 获取JSON字符串
 *
 * @return 把字典转换成JSON串
 */
- (NSString *)jsonString;

/*!
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil，表示不存在或者是空
 */
- (id)safeObjectForKey:(id<NSCopying>)aKey;
- (int)intValueForKey:(id)key;
- (double)doubleValueForKey:(id)key;
- (float)floatValueForKey:(id)key;
- (NSInteger)integerValueForKey:(id)key;
- (NSString *)stringValueForKey:(id)key;
- (NSDictionary *)dictionaryValueForKey:(id)key;
- (NSArray *)arrayValueForKey:(id)key;
- (NSNumber *)numberValueForKey:(id)key;

@end
