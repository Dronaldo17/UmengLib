//
//  Logger.h
//  Logger
//
//  Created by jingxuan.dou on 14/12/26.
//  Copyright (c) 2014年 jingxuan.dou. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CAN_LOG_PROD_QA_DEBUG 0

@interface WGLogger : NSObject
enum LogLevel{
    LevelNone = 0,   //不打印
    LevelProd,       //QA测试过 即将上线前  可以用此级别
    LevelQA,        //QA测试中反馈的错误 修改bug一些通用打印 可用此级别
    LevelDebug,      //平时开发中 可用此级别
    LevelMengChao,   //孟超专用的打印机别  针对于孟超开发调试专用
    LevelJingXuan,   //静轩专用的打印机别  针对于静轩开发调试专用
    LevelYingDong    //英东专用的打印机别  针对于英东开发调试专用
};


/**
 * get / set the log level
 **/
extern enum LogLevel GetLogLevel();
extern void setLogLevel(enum LogLevel level);

/**
 *  log message
 **/
extern void prodLog(NSString *format,...);
extern void qaLog(NSString *format,...);
extern void debugLog(NSString *format,...);
extern void mengchaoLog(NSString *format,...);
extern void jingxuanLog(NSString *format,...);
extern void yingdongLog(NSString *format,...);
@end

