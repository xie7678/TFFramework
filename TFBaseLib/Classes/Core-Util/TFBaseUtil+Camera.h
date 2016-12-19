//
//  TFBaseUtil+Camera.h
//  TFBaseLib
//
//  Created by xiayiyong on 15/10/16.
//  Copyright (c) 2015年 上海赛可电子商务有限公司. All rights reserved.
//

#import "TFBaseUtil.h"

@interface TFBaseUtil (Camera)

/** 判断当前系统是否有摄像头 */
+ (BOOL)hasCamera;

/*!
 * @brief 判断是否有后置摄像头
 * @return YES表示有后置摄像头，否则表示没有有后置摄像头
 */
+ (BOOL)isCameraAvailable;

/*!
 * @brief 判断是否有前置摄像头
 * @return YES表示有前置摄像头，否则表示没有有前置摄像头
 */
+ (BOOL)isFrontCameraAvailable;

/*!
 * @brief 判断是否支持拍照功能
 * @return YES表示支持拍照功能，否则表示不支持拍照功能
 */
+ (BOOL)canTakePhoto;

/*!
 * @brief 判断是否允许使用相册
 * @return YES表示允许使用相册，否则表示不允许使用相册
 */
+ (BOOL)isPhotoLibraryAvailable;

/*!
 * @brief 判断是否允许用户从相册中选择图片
 * @return YES表示允许用户从相册中选择图片，否则表示不允许用户从相册中选择图片
 */
+ (BOOL)canPickPhotosFromPhotoLibrary;

/*!
 * @brief 判断是否允许用户从相册中选择音频/视频
 * @return YES表示允许用户从相册中选择音频/视频，否则表示不允许用户从相册中选择音频/视频
 */
+ (BOOL)canPickVideosFromPhotoLibrary;

@end
