//
//  WGSemver.h
//  semver
//
//  Created by Andrew Sliwinski on 7/4/13.
//  Copyright (c) 2013 Andrew Sliwinski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WGSemver : NSObject

@property (readonly) NSInteger major;
@property (readonly) NSInteger minor;
@property (readonly) NSInteger patch;
@property (readonly) NSString *prerelease;
@property (readonly) NSString *build;

+ (NSString *)spec;
+ (instancetype)semverWithString:(NSString *)aString;

- (instancetype)initWithString:(NSString *)aString;
- (NSComparisonResult)compare:(WGSemver *)aVersion;
- (BOOL)isEqualTo:(WGSemver *)aVersion;
- (BOOL)isLessThan:(WGSemver *)aVersion;
- (BOOL)isGreaterThan:(WGSemver *)aVersion;
- (BOOL)isValid;

@end