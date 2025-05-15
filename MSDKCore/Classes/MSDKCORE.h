//
//  MSDKCORE.h
//  MSDKCORE
//
//  Created by lsq on 2023/1/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSDKCORE : NSObject

+ (MSDKCORE *)shareInstance;

- (void)start:(NSString *)appID appKey:(NSString *)appKey authFilePath:(NSString *)authFilePath success:(void(^)(void))succes fail:(void(^)(void))fail;

@end

NS_ASSUME_NONNULL_END
