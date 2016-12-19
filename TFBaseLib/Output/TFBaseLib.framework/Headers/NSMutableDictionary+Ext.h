//
//  NSMutableDictionary+Ext.h
//  Treasure
//
//  Created by xiayiyong on 15/2/13.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (Ext)

- (NSMutableDictionary *)mutableDeepCopy;

/**
 * 调用此方法来防止无效值时崩溃的问题
 */
- (void)setSafeObject:(id)anObject forKey:(id<NSCopying>)aKey;
- (void)setInt:(int)intValue forKey:(id<NSCopying>)aKey;
- (void)setDouble:(double)doubleValue forKey:(id<NSCopying>)aKey;
- (void)setFloat:(float)floatValue forKey:(id<NSCopying>)aKey;

@end
