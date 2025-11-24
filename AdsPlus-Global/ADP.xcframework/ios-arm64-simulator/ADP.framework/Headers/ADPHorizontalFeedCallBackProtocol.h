
#import <Foundation/Foundation.h>
#import "ADPContentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ADPHorizontalFeedCallBackProtocol <ADPVideoStateDelegate, ADPContentStateDelegate>

@optional
/// 进入横版视频详情页
/// @param viewController 详情页VC
/// @param contentInfo 视频信息
- (void)adp_horizontalFeedDetailDidEnter:(UIViewController *)viewController contentInfo:(ADPContentInfo*)contentInfo;

/// 离开横版视频详情页
/// @param viewController 详情页VC
- (void)adp_horizontalFeedDetailDidLeave:(UIViewController *)viewController;

/// 视频详情页appear
/// @param viewController 详情页VC
- (void)adp_horizontalFeedDetailDidAppear:(UIViewController *)viewController;

/// 详情页disappear
/// @param viewController 详情页VC
- (void)adp_horizontalFeedDetailDidDisappear:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
