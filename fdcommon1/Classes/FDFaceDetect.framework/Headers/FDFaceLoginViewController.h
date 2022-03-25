//
//  FDFaceLoginViewController.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/8/26.
//  Copyright © 2019 wangqiuli. All rights reserved.
//

#import "FDFaceBaseViewController.h"
NS_ASSUME_NONNULL_BEGIN

/**
 人脸识别登录类
 */
@interface FDFaceLoginViewController : FDFaceBaseViewController

@property(nonatomic,copy)NSString *userName;//用户名
@property(nonatomic,copy)NSString *userCode;//用户账号
@property(nonatomic,copy)NSString *boss_no;//从账号
@property(nonatomic,assign)NSInteger type;//类型，0登录，1刷脸
@property(nonatomic,copy)NSString *url;//登录请求的url
@property(nonatomic,copy)NSString *is4a;//是否是4A登录，默认是YES

@end

NS_ASSUME_NONNULL_END
