//
//  TFBaseUtil+Null.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (Null)

/**
 *  移除所有值为null的key-value
 */
+ (id)removeNullFromObject:(id)object;

@end
