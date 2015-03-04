//
//  WGScreenOrientationDelegate.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/20.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WGScreenOrientationDelegate <NSObject>

- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation;
- (BOOL)shouldAutorotate;

@end
