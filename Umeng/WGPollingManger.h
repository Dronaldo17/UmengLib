//
//  PollingManger.h
//  1229
//
//  Created by jingxuan.dou on 14/12/28.
//  Copyright (c) 2014年 jingxuan.dou. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WGLogServerModel;

@interface WGPollingManger : NSObject
{
    NSTimer * _timer;
    
    NSTimeInterval _lastTime;
    
    NSMutableArray * _uploadModels;
    
    int count;
    
    
    NSString * _networkFlag;
}
// 获得单例对象 初始化一些常用功能
+ (WGPollingManger *)sharePolling;

//为类加入统计内存警告的方法
-(void)analyticsMemoryWaring:(id)object;

//开启统计轮询
-(void)startPolling;

//停止统计轮询
-(void)stopPolling;

// 进入app 记录激活时间
-(void)analyticsActive;

// 进入app 记录存活的开始时间
-(void)recordAppLiveStartTime;

// 进入app 记录存活的结束时间
-(void)recordAppExitTime;

//记录错误日志
-(void)saveErrorLog:(NSString*)errorlog;

//文件校验
-(void)saveFakeErrorFileName:(NSString*)errorFileName rightSha1:(NSString*)rightSha1 errorSha1:(NSString*)errorSha1;
@end
