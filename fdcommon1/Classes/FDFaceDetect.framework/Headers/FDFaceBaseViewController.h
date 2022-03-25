//
//  FDBaseViewController.h
//  FDFaceRecognition
//
//  Created by wangqiuli on 2019/8/26.
//  Copyright © 2019 wangqiuli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "FDResult.h"
#import "NSString+RemoveSpace.h"

#define FDSCREEN_WIDTH   [[UIScreen mainScreen] bounds].size.width
#define FDSCREEN_HEIGHT  [[UIScreen mainScreen] bounds].size.height
#define FDSTATUE_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height
#define FDNAV_HEIGHT self.navigationController.navigationBar.frame.size.height
#define WeakSelf __weak typeof(self) weakSelf = self;

NS_ASSUME_NONNULL_BEGIN
/**
 人脸识别基础类
 */
@interface FDFaceBaseViewController : UIViewController

@property(nonatomic,copy)void(^callBack)(FDResult *result);//回调

/**
 提示弹窗
 @param message 提示信息
 */
- (void)addAlert:(NSString *)message withCallBack:(void(^)(void))sure;

/**
 POST请求
 @param url 请求的url（完整的url）
 @param param 请求的参数
 @param success 成功的回调
 @param failure 失败的回调
 */
-(void)post:(NSString *)url withParam:(id )param success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

-(void)post:(NSString *)url withParam:(id)param withFile:(NSArray *)filesArray success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

/**
 callBack
 @param dict 状态描述
 */
- (void)setCallBackWithDict:(NSDictionary *)dict;

/**
 设置导航栏颜色
 @param color 导航栏背景颜色
 @param titleColor 导航栏标题颜色
 @param tintColor 导航栏左右两侧按钮颜色
 */
- (void)setNavBackgroundColor:(UIColor *)color withTitleColor:(UIColor *)titleColor withTintColor:(UIColor *)tintColor;

/**
 data转base64
 @param imageData data
 @return base64码
 */
- (NSString*)encodeToBase64String:(NSArray*)dataSource;

/**
 弹出加载动画
 @param text 描述
 */
-(void)showLoading:(NSString*)text;

/**
 隐藏加载动画
 */
-(void)hideLoading;

/**
 提示弹窗
 @param text 描述
 */
-(void)toast:(NSString*)text;

/**
 设置扫描层
 @param rect 扫描view的frame
 @return 扫描区域
 */
-(CGRect)getScanCrop:(CGRect)rect;

- (BOOL)judgePhotoIsOpen;

/// 获取错误描述
- (NSString *)getErrorDescription:(NSError *)error;

/// 获取当前版本
- (NSString *)getCurrentVersion;

- (BOOL)isiPhoneX;

@end

NS_ASSUME_NONNULL_END
