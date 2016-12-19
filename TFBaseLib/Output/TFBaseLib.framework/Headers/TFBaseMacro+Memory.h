//
//  TFMacro+Memory.h
//  Treasure
//
//  Created by xiayiyong on 15/9/14.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

//使用ARC和不使用ARC
#if __has_feature(objc_arc)
//compiling with ARC
#else
// compiling without ARC
#endif

#define SAFE_DELETE(P) if(P) { [P release], P = nil; }
#define SAFE_RELEASE(x) [x release];x=nil

#define WEAK_OBJECT(object) __weak typeof(object) weakObject = object;
#define STRONG_OBJECT(object) __strong typedef(object) strongObject = object;

#define WEAK_SELF __weak __typeof(&*self)weakSelf = self;
#define STRONG_SELF __strong __typeof(&*self)strongSelf = self;

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
