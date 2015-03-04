//
//  WGAppInfo.h
//  Wagon
//
//  Created by jingxuan.dou on 15/1/4.
//  Copyright (c) 2015年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  App的信息
 */
@interface WGAppInfo : NSObject

/**
 *  获取qnpp version
 *
 *  @return qnpp version
 */
+(NSString*)qnppVersion;

/**
 *  获取qapp version
 *
 *  @return qapp version
 */
+(NSString*)qappVersion;


/**
 *  获取bundle Version
 *
 *  @return bundle Version
 */
+(NSString*)bundleVersion;

/**
 *  获取 bundle Identifier
 *
 *  @return bundle Identifier
 */
+(NSString*)bundleIdentifier;

/**
 *  获取bundle Name
 *
 *  @return bundle Name
 */
+(NSString*)bundleName;


@end
