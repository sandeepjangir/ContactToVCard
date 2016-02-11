//
//  Base64.h
//  HorseMan
//
//  Created by Sandeep Jangir on 11/2/16.
//  Copyright 2016 HorseMan. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (Base64) 

+ (NSData *)dataWithBase64EncodedString:(NSString *)string;
- (id)initWithBase64EncodedString:(NSString *)string;

- (NSString *)base64Encodeing;
- (NSString *)base64EncodeingWithLineLength:(unsigned int) lineLength;

@end