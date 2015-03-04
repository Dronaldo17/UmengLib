//
//  WGCommandDelegateImple.h
//  Wagon
//
//  Created by qitmac000238 on 14/12/9.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WGCommandDelegate.h"

@class WGBaseViewController;

@interface WGCommandDelegateImpl : NSObject<WGCommandDelegate>{
@private
    __weak WGBaseViewController* _viewController;
}

- (id)initWithViewController:(WGBaseViewController *)viewController;

@end
