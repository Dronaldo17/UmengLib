//
//  WGDebug.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/15.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#ifndef Wagon_WGDebug_h
#define Wagon_WGDebug_h

#ifdef DEBUG
#define WGLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define WGLog(...)
#endif

#endif
