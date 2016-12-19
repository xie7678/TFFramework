//
//  LocationManager.h
//  Treasure
//
//  Created by Hu Dan 胡丹 on 15/8/27.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface LocationModel : NSObject
@property (nonatomic, strong) NSString *longitude;    //经度
@property (nonatomic, strong) NSString *latitude;     //纬度
@property (nonatomic, strong) NSString *province;     //当前省份
@property (nonatomic, strong) NSString *city;         //当前城市
@end

#define kTFLocationManager ([TFLocationManager sharedManager])

@interface TFLocationManager : NSObject

@property (nonatomic, assign) BOOL servicesEnabled;
@property (nonatomic, assign) BOOL authorizeEnabled;

@property (nonatomic, strong) NSString *longitude;    //经度
@property (nonatomic, strong) NSString *latitude;     //纬度
@property (nonatomic, strong) NSString *province;     //当前省份
@property (nonatomic, strong) NSString *city;         //当前城市

+ (instancetype)sharedManager;

+ (void)startLocation:(void (^)(LocationModel* location))successBlock
               failed:(void (^)(NSString *errorMessage))failedBlock;

@end
