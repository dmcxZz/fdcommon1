//
//  FDFaceRecognitionViewController.h
//  FDFaceRecognition
//
//  Created by mac on 2021/7/6.
//  Copyright © 2021 wangqiuli. All rights reserved.
//

#import "FDFaceBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

/// 新版人脸识别登录、注册二合一
@interface FDFaceRecognitionViewController : FDFaceBaseViewController

@property(nonatomic,copy)NSString *userName;//用户名
@property(nonatomic,copy)NSString *userCode;//用户账号
@property(nonatomic,copy)NSString *boss_no;//从账号
@property(nonatomic,assign)NSInteger type;//类型，0登录，1注册
@property(nonatomic,copy)NSString *url;//登录请求的url
@property(nonatomic,strong)UIColor *color;//识别边框颜色

@end

NS_ASSUME_NONNULL_END
