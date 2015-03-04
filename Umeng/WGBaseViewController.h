//
//  WGBaseViewController.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/19.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WGCommandDelegate.h"
#import "WGScreenOrientationDelegate.h"

#define WG_VIEWCONTROLLER_SHAKE_NOTIFICATION_KEY @"WG_VIEWCONTROLLER_SHAKE"

@class WGPlugin;
@class WGBridge;

@interface WGBaseViewController : UIViewController<UIWebViewDelegate, WGScreenOrientationDelegate>{
    id<WGCommandDelegate> _commandDelegate;
}

@property (nonatomic, strong) UIWebView *webView;
/**
 *  是否存在导航条
 */
@property (nonatomic, assign) BOOL isExistNavBar;

@property (nonatomic, readonly, strong) NSMutableDictionary* pluginObjects;
@property (nonatomic, strong) WGBridge *bridge;

- (void)loadWebView;

@end
