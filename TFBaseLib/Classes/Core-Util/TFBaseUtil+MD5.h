//
//  TFBaseUtil+MD5.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/13.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

NSString *tf_md5(NSString *string);

@interface TFBaseUtil (MD5)

/**
 *  md5编码
 *
 */
+(NSString *)md5:(NSString *)string;

@end
