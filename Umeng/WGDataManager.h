//
//  WGDataManager.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/17.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WGConfigData;
@class WGBridge;

@interface WGDataManager : NSObject

@property (nonatomic, strong) NSMutableDictionary* registeredControllers;

@property (nonatomic, strong) NSMutableDictionary *sharedData;
@property (nonatomic, strong) WGConfigData *configData;
/**
 *  host列表
 */
@property (nonatomic, strong) NSDictionary *hostDic;
/**
 *  当前host的键值
 */
@property (nonatomic, strong) NSString *currentHostKey;

/**
 *  当前zip包的版本
 */
@property (nonatomic, strong) NSString *currentZipVersion;
/**
 *  当前bridge
 */
@property (nonatomic, strong) WGBridge *currentBridge;
+ (WGDataManager *)sharedDataManager;
- (void)saveHost:(NSString *)host;

/**
 *  web启动入口
 *
 *  @return web启动入口路径
 */
- (NSString *)main;

/**
 *  baseURL
 *
 *  @return baseurl
 */
- (NSString *)baseURL;

@end
