//
//  WGUpdater.h
//  WagonLib
//
//  Created by qitmac000238 on 14/11/27.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WGRequest.h"

@class WGProduct;
@class WGManifest;
@class WGUpdateData;

@interface WGUpdater : NSObject<NSURLConnectionDelegate>

@property (nonatomic, strong) WGProduct *product;
@property (nonatomic, strong) WGUpdateData *updateData;
@property (nonatomic, strong) WGManifest *manifest;

@property (nonatomic, copy) void (^interruptedHandler)(NSArray *array);

@property (nonatomic, copy) void (^parseComplete)(NSString *path);

@property (nonatomic, assign) float progress;
@property (nonatomic, assign) BOOL isStartDownload;
@property (nonatomic, assign) BOOL isDidDownload;

@property (nonatomic, assign) BOOL isUserStartUpdate;

+ (WGUpdater *)sharedUpdater;

/**
 *  更新程序
 */
- (void)update;
/**
 *  下载zip包
 *
 *  @param url zip包url
 */
- (void)download:(NSString *)url;
- (void)checkUpdate:(NSString *)version isInterrupted:(BOOL)interrupted;
- (void)cancelUpdate;

- (void)parseDataFromCache;

- (void)checkUpdate:(NSString *)version complete:(RequestComplete)complete;

- (void)downloadSha1SumFile:(NSString*)sumUri;

/**
 *  暂停
 */
- (void)pause;
/**
 *  是否暂停
 *
 *  @return 返回下载是否暂停，TRUE： 暂停， FALSE：未暂停
 */
- (BOOL)isPause;
/**
 *  恢复下载
 */
- (void)resume;

- (void)cancel;

@end
