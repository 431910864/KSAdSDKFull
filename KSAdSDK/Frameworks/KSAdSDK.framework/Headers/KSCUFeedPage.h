//
//  KSCUFeedPage.h
//  KSAdSDK
//
//  Created by jie cai on 2020/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KSCUFeedPage : NSObject

@property (nonatomic, readonly) UIViewController *feedViewController;

- (instancetype)initWithPosId:(NSString *)posId NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
