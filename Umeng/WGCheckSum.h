//
//  WGCheckSum.h
//  Wagon
//
//  Created by jingxuan.dou on 15/1/6.
//  Copyright (c) 2015年 Qunar. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  checksum
 */
@interface WGCheckSum : NSObject

/**
 * Get the md5 hash of a file
 *
 * @returns		NSString
 * @since		20150105
 * @author		costmo
 * @param		path		Full path to the file
 */
+(NSString *)md5HashOfPath:(NSString *)path;

/**
 * Get the sha1 hash of a file
 *
 * @returns		NSString
 * @since		20140105
 * @author		costmo
 * @param		path		Full path to the file
 */
+(NSString *)shaHashOfPath:(NSString *)path;
/**
 *  匹配sha1sum 文件中 文件指纹
 *
 * @returns		NSString
 * @since		20140105
 * @author		doujingxuan
 * @param		path		Full path to the file
 */

+(BOOL)checksumFilesByfilePath:(NSString*)filePath;
@end
