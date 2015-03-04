//
//  WagonLogMarcos.h
//  SandBoxLogger
//
//  Created by jingxuan.dou on 14/12/26.
//  Copyright (c) 2014年 jingxuan.dou. All rights reserved.
//


#define CRASH_REPORT_DIR_NAME  @"CrashReport"   //Crash信息所存储的目录名

#define CRASH_REPORT_FILE_EXTENSION @"wagonCrash"  //Crash文件的后缀名

#define CRASH_REPORT_UNSEND_DIRNAME @"UnSendCrash"  //未发送错误信息的目录

#define CRASH_REPORT_SENDED_DIRNAME @"SendedCrash"  //已发送错误信息的目录


#define CAN_WRITELOG_TO_FILE 1  //是否允许某些记录数据写入文件 1开启 0 关闭

#define CAN_WRITE_CRASH_TO_FILE 1  //是否允许崩溃写入文件  1开启 0 关闭

#define CAN_WRITE_CRASH_TO_DB 1  //是否允许崩溃写入数据库  1开启 0 关闭

#define CAN_LOG_PROD_QA_DEBUG 0    //打印为专用模式时  是否启用Prod QA DeBug 的通用打印 1开启 0 关闭

typedef enum {
    REALTIME = 0,       //实时发送
    BATCH = 1,          //启动发送
    SENDDAILY = 4,      //每日发送
    SENDWIFIONLY = 5,   //仅在WIFI下启动时发送
    SEND_INTERVAL = 6,   //按最小间隔发送
    SEND_ON_EXIT = 7        //退出或进入后台时发送
} ReportPolicy;