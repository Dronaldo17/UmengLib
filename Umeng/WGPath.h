//
//  WGPath.h
//  WagonLib
//
//  Created by qitmac000238 on 14/11/27.
//  Copyright (c) 2014年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WGPath : NSObject

+(BOOL)createPathIfNeeded:(NSString *)path;

+(NSString *)docPath;
+(NSString *)libPath;
+(NSString *)cachePath;

// zip 下载路径  Library/QDownload
+(NSString *)downloadRootPath;
+(void)cleanDownload;

// zip 解压路径  Documents/QUnzip
+(NSString *)unzipRootPath;
+(void)cleanUnzip;

// image 路径    Library/Caches/QImageCache
+(NSString *)imageCacheRootPath;
// 清理所有图片
+(void)cleanImageCache;

// 用下载的文件名生成下载路径
+(NSString *)downloadPathWithName:(NSString *)name;

// 用zip文件名生成解压后的文件夹名
+(NSString *)unzipPathWithName:(NSString *)name;

// 获取解压目录
+ (NSString *)getLastUnzipPath;

// 保存解压目录
+ (void)saveLastUnzipPath:(NSString *)unzipPath;

// 遍历目录中指定类型的文件
+ (NSArray *)getFilenamelistOfType:(NSString *)type fromDirPath:(NSString *)dirPath;

// 文件是否存在
+ (BOOL)isFileExistAtPath:(NSString*)fileFullPath;

// copy指定文件到指定目录 方法1
+ (BOOL)copyMissingFile:(NSString *)sourcePath toPath:(NSString *)toPath;

// copy指定文件到指定目录 方法2
+(BOOL)copySourcePath:(NSString *)sourcePath desPath:(NSString *)desPath;

//Base64 encode过的安全区路径
+(NSString*)encodeWGDocSafeArea;

//Base64 decode过的安全区路径
+(NSString*)decodeWGDocSafeArea;

//Base64 encode过的绝对安全区路径
+(NSString*)encodeWGDocAbsSafeArea;

//Base64 decode过的绝对安全区路径
+(NSString*)decodeWGDocAbsSafeArea;

//Base64 encode过的一般存储区
+(NSString*)encodeWGDocCommonSaveArea;

//Base64 decode过的一般存储区
+(NSString*)decodeWGDocCommonSaveArea;

//Base64 encode过的文件名
+(NSString*)encodeWGFileName:(NSString*)fileName;

//Base64 decode过的文件名
+(NSString*)decodeWGFileName:(NSString*)fileName;

//压缩文件
+(BOOL)unzipSourceFile:(NSString*)sourceFile desFile:(NSString*)desFile;
@end
