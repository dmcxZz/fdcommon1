//
//  Base64Util.m
//  FSDP
//
//  Created by wangqiuli on 2020/5/8.
//  Copyright © 2020 wangqiuli. All rights reserved.
//

#import "Base64Util.h"

@implementation Base64Util

+(NSString *)encode:(NSString *)str{
    //1、先转换成二进制数据
    NSData *data =[str dataUsingEncoding:NSUTF8StringEncoding];
    //2、对二进制数据进行base64编码，完成后返回字符串
    return [data base64EncodedStringWithOptions:0];
}

+(NSString *)decode:(NSString *)str{
    //注意：该字符串是base64编码后的字符串
    //1、转换为二进制数据（完成了解码的过程）
    NSData *data=[[NSData alloc]initWithBase64EncodedString:str options:0];
    //2、把二进制数据转换成字符串
    return [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
}

@end
