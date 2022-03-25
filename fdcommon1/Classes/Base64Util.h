//
//  Base64Util.h
//  FSDP
//
//  Created by wangqiuli on 2020/5/8.
//  Copyright © 2020 wangqiuli. All rights reserved.
//

#import <Foundation/Foundation.h>

/// base64码转换类
@interface Base64Util : NSObject

/// 字符串转base64码
/// @param str 加密前的字符串
/// @return 加密后的字符串
+(NSString *)encode:(NSString *)str;

/// base64码转字符串
/// @param str base64码
/// @return 解密后的字符串
+(NSString *)decode:(NSString *)str;

@end
