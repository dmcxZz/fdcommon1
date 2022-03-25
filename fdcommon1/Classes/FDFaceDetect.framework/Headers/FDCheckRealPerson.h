//
//  FDCheckEyeBlink.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/9/10.
//  Copyright © 2019 wangqiuli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 活体检测
 */
@interface FDCheckRealPerson : NSObject

@property(nonatomic,strong)NSMutableArray *yawDataSource;//存储人脸摇头信息
@property(nonatomic,assign)NSInteger index;//计算人脸眼睛平均值，前10张图
@property(nonatomic,strong)NSMutableArray *leftEyeDataSource;//左眼数据
@property(nonatomic,strong)NSMutableArray *rightEyeDataSource;//右眼数据
@property(nonatomic,strong)NSMutableArray *smileDataSource;//微笑数据
@property(nonatomic,strong)NSMutableArray *sysYawDataSource;//微笑数据
@property(nonatomic,strong)NSMutableArray *hasYawAngleDataSource;//是否左右摇头数据
@property(nonatomic,strong)NSMutableArray *hasRollAngleDataSource;//是否上下点头数据

/**
 检测摇头
 @param faceobject 脸部信息
 @return 是否摇头，YES摇头，NO未摇头
 */
- (BOOL)checkYaw:(AVMetadataFaceObject *)faceobject;

/**
 检测光线强弱
 @param sampleBuffer sampleBuffer
 @return 是否亮，YES亮，NO暗
 */
- (BOOL)checkLight:(CMSampleBufferRef)sampleBuffer;

/**
 检测眨眼(系统)
 @return 是否眨眼，YES眨眼，NO未眨眼
 */
- (BOOL)checkSystemBlink:(CIFaceFeature *)faceFeature;

/**
 检测微笑(系统)
 @return 是否微笑，YES微笑，NO未微笑
 */
- (BOOL)checkSystemSmile:(CIFaceFeature *)faceFeature;
/**
 检测摇头(系统)
 @return 是否摇头，YES摇头，NO未
 */
- (BOOL)checkSystemYaw:(CIFaceFeature *)faceFeature;


/**
 将CMSampleBufferRef转化为UIImage
 @param p CMSampleBufferRef
 @return UIImage
 */
- (UIImage *)imageFromPixelBuffer:(CMSampleBufferRef)p;

/**
 裁剪图片
 @param image 待裁剪的图片
 @param bound 裁剪的位置
 @return 裁剪后的图片
 */
- (UIImage *)cutImage:(UIImage *)image withBound:(CGRect)bound;

/**
 压缩图片
 @param image 待压缩的图片
 @param kb 压缩的大小
 @return 压缩后的图片
 */
-(NSData *)scaleImage:(UIImage *)image toKb:(NSInteger)kb;


@end

NS_ASSUME_NONNULL_END
