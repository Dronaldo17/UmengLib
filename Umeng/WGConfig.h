//
//  WGConfig.h
//  Wagon
//
//  Created by qitmac000238 on 14/11/27.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Wagon_WGConfig_h
#define Wagon_WGConfig_h

#ifdef Dev_Environment // 开发环境

#elif Beta_Environment // beta环境

#elif Release_Environment // 发布环境

#import "WGReleaseConfig.h"

#endif /*Environment*/

/*
 * network
 */

#define kIPAVersion  @"1.0.0"
#define kQAppVersion @"0.0.0"

/*
 Returns YES if it is at least version specified as NSString(X)
 Usage:
 if (IsAtLeastiOSVersion(@"5.1")) {
 // do something for iOS 5.1 or greater
 }
 */
#define IsAtLeastiOSVersion(X) ([[[UIDevice currentDevice] systemVersion] compare:X options:NSNumericSearch] != NSOrderedAscending)

// iOS bridge 文件名
#define kiOSBridgeFileName @"ios-bridge@e495536d85ad4dbbb71c2324cb7cfa73"

#define kServerData @"PHNlcnZlcnM+CgkJPHByZD5odHRwOi8vbW9iaWxlLmtlbWFubWFuLmNvbTwvcHJkPgoJCTxkZXYgbmFtZT0iZGV2MyI+aHR0cDovL2wtZGV2bW9iaWxlMy5rZW1hbm1hbi5jb208L2Rldj4KPC9zZXJ2ZXJzPg=="

#define kDevicePhone @"pmsphone"
#define kDevicePad @"pad"

#endif /*Wagon_WGConfig_h*/
