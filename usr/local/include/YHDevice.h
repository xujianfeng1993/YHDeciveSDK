//
//  YHDevice.h
//  YHAuthorizeH5
//
//  Created by Wiley on 2017/12/7.
//  Copyright © 2017年 Mr.Wiley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHDevice : NSObject

- (void)getDevice:(void(^)(NSMutableDictionary*))resp;

@end
