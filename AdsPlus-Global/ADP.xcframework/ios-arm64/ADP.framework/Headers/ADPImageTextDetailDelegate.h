//
//  ADPImageTextDetailDelegate.h
//  ADP
//
//  Created by ADP on 2022/9/4.
//  Copyright © 2022 ADP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADPContentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

//图文详情的回调
@protocol ADPImageTextDetailDelegate <NSObject>
@optional
/// 进入图文详情页
/// @param detailViewController 图文详情页VC
/// @param feedId feedId
- (void)adp_imageTextDetailDidEnter:(UIViewController *)detailViewController feedId:(NSString *)feedId;

/// 离开图文详情页
/// @param detailViewController 图文详情页VC
- (void)adp_imageTextDetailDidLeave:(UIViewController *)detailViewController;

/// 图文详情页appear
/// @param detailViewController 图文详情页VC
- (void)adp_imageTextDetailDidAppear:(UIViewController *)detailViewController;

/// 图文详情页disappear
/// @param detailViewController 图文详情页VC
- (void)adp_imageTextDetailDidDisappear:(UIViewController *)detailViewController;

/// 图文详情加载结果
/// @param detailViewController 图文详情页VC
/// @param success 是否成功
/// @param error error
- (void)adp_imageTextDetailDidLoadFinish:(UIViewController *)detailViewController success:(BOOL)success error:(NSError *)error;

/// 图文详情阅读进度
/// @param detailViewController 图文详情页VC
/// @param isFold 是否折叠
/// @param totalHeight 详情总高度
/// @param seenHeight 已经看过的高度
- (void)adp_imageTextDetailDidScroll:(UIViewController *)detailViewController isFold:(BOOL)isFold totalHeight:(CGFloat)totalHeight seenHeight:(CGFloat)seenHeight;

@end

NS_ASSUME_NONNULL_END
