//
//  WGRequest.h
//  network
//
//  Created by chao.meng on 15/1/16.
//  Copyright (c) 2015年 qunar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

/**
 *  请求完成的Block
 *
 *  @param successed    请求是否成功，true：成功， false： 失败
 *  @param responseData successed == true时返回请求数据，successed == false 时返回nil
 *  @param error        网络请求失败。successed == true时值为nil，successed == false 时值为NSError
 */
typedef void (^RequestComplete)(BOOL successed, id responseData, NSError *error);

@interface NSString (WGRequest)

- (NSString *)md5;
- (NSString *)encode;
- (NSString *)decode;
- (id)object;

@end

@interface NSObject (WGRequest)
- (NSString *)json;
@end

@interface WGRequest : NSObject

/**
 *  单例方法
 *
 *  @return 返回WGRequest实例
 */
+ (WGRequest *)shareRequest;

/**
 *  GET请求
 *
 *  @param url      请求的URL
 *  @param params   请求参数
 *  @param complete 完成的回调
 */
- (void)getRequestWithUrl:(NSString *)url params:(NSDictionary *)params complete:(RequestComplete)complete;

@end
