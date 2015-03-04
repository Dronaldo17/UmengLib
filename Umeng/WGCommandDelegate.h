//
//  WGCommandDelegate.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/9.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WGPlugin;

@protocol WGCommandDelegate <NSObject>

@property (nonatomic, readonly) NSDictionary* settings;


@end
