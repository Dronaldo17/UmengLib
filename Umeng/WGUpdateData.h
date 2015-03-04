//
//  UpdateData.h
//  qapp
//
//  Created by gtts on 14/11/13.
//  Copyright (c) 2014年 gtts. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WGUpdateData : NSObject

@property (nonatomic,copy  ) NSNumber     *upToDate;       // bool

// app 信息
@property (nonatomic, copy) NSString     *nativeVersion;  // app版本
@property (nonatomic, copy) NSString     *nativeMessage;  // 版本信息
@property (nonatomic, copy) NSString     *nativeUri;     // app url
@property (nonatomic, copy) NSString     *nativeFileMd5;  // ipa md5
@property (nonatomic, assign) BOOL       nativeForcedUpgrade; // 有且仅为true时强制升级

// zip 信息
@property (nonatomic, copy) NSString     *qAppVersion;     // zip 版本号
@property (nonatomic, copy) NSString     *qAppMessage;     // 版本信息
@property (nonatomic, copy) NSString     *qAppUri;         // zip包路径
@property (nonatomic, copy) NSString     *qAppDigest;         // zip Digest

// zip 列表
@property (nonatomic,strong) NSArray      *tails;    // zip 最多显示5个版本，时间倒序 @QUpdateData

- (id) initWithJSONDictionary:(NSDictionary *)dictionary;

@end
