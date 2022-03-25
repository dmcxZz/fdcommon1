//
//  AESUtil.h
//  FSDP
//
//  Created by wangqiuli on 2020/5/8.
//  Copyright © 2020 wangqiuli. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// aes加解密类
@interface AESUtil : NSObject

/// 字符串AES加密
/// @param str 加密前的字符串
/// @param key 加密密码
/// @return 加密后的字符串
+(NSString *)encrypt:(NSString *)str key:(NSString *)key;

/// 字符串AES解密
/// @param str 解密前的字符串
/// @param key 加密密码
/// @return 解密后的字符串
+(NSString *)decrypt:(NSString *)str key:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
