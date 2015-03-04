//
//  WGNewViewController.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/17.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WGBaseViewController.h"

@interface WGNewViewController : WGBaseViewController

@property (nonatomic, strong) NSDictionary *bridgeData;

- (id)initWithDictionary:(NSDictionary *)dictionary;

- (void)loadWebView;

@end
