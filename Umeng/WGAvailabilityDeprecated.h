//
//  WGAvailabilityDeprecated.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/20.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifdef __clang__
#define WG_DEPRECATED(version, msg) __attribute__((deprecated("Deprecated in Wagon " #version ". " msg)))
#else
#define WG_DEPRECATED(version, msg) __attribute__((deprecated()))
#endif

static inline BOOL CDV_IsIPad(void) WG_DEPRECATED(3.7.0, "This will be removed in 4.0.0");
static inline BOOL CDV_IsIPhone5(void) WG_DEPRECATED(3.7.0, "This will be removed in 4.0.0");

static inline BOOL CDV_IsIPad(void) {
    return [[UIDevice currentDevice] respondsToSelector:@selector(userInterfaceIdiom)] && [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad;
}

static inline BOOL CDV_IsIPhone5(void) {
    return ([[UIScreen mainScreen] bounds].size.width == 568 && [[UIScreen mainScreen] bounds].size.height == 320) || ([[UIScreen mainScreen] bounds].size.height == 568 && [[UIScreen mainScreen] bounds].size.width == 320);
}
