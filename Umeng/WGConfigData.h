//
//  WGConfigData.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/19.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WGConfigData : NSObject

@property (nonatomic, readonly, strong) NSDictionary* pluginsMap;
@property (nonatomic, readonly, strong) NSMutableDictionary *settings;

@end
