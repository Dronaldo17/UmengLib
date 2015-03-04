//
//  WGPlugin.h
//  Wagon
//
//  Created by chao.meng on 14/11/27.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WGBridge.h"
#import "WGCommandDelegate.h"
#import "WGBaseViewController.h"

/**
 *  page did load notification string
 */
extern NSString* const WGPageDidLoadNotification;
extern NSString* const WGPluginHandleOpenURLNotification;
extern NSString* const WGPluginResetNotification;
extern NSString* const WGLocalNotification;
extern NSString* const WGRemoteNotification;
extern NSString* const WGRemoteNotificationError;

typedef void (^WGPluginSuccessBlock)(NSDictionary *successData);
typedef void (^WGPluginErrorBlock)(NSDictionary *errorData);

/**
 *  插件基类，可以继承此类扩展Wagon
 */
@interface WGPlugin : NSObject

/**
 *  webView
 */
@property (nonatomic, weak) UIWebView *webView;
/**
 *  WebView javascript bridge
 */
@property (nonatomic, strong) WGBridge *bridge;
/**
 *  UIViewController
 */
@property (nonatomic, weak)  WGBaseViewController *viewController;
@property (nonatomic, weak) id<WGCommandDelegate> commandDelegate;


/**
 *  初始化并返回一个新初始化的插件对象
 *
 *  @param theWebView webview
 *
 *  @return 新插件对象
 */
- (WGPlugin *)initWithWebView:(UIWebView *)theWebView;

/**
 *  插件初始化时调用
 */
- (void)pluginInitialize;

- (void)handleOpenURL:(NSNotification*)notification;
- (void)onAppTerminate;
- (void)onMemoryWarning;
- (void)onReset;
- (void)dispose;

- (id)appDelegate;

@end
