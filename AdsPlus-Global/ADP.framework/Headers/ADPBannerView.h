//
//  ADPBannerView.h
//  GDTMobSample
//
//  Created by ADP on 2020/4/3.
//  Copyright © 2020 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN




@protocol ADPBannerViewDelegate;
@class AdGrowRequestError;

@interface ADPBannerView : UIView

@property (nonatomic, copy, readonly) NSString *unitID;
@property (nonatomic, assign) BOOL isAnimationOn;
@property (nonatomic, assign) int showSeconds;


/**
 用来接收 Banner 广告读取和展示状态变化通知的 delegate
 */
@property (nonatomic, weak) id<ADPBannerViewDelegate> delegate;


/**
 初始化方法
 @param unitID 广告位 ID
 @param rootViewController 广告点击后弹出全屏的广告需要指定ViewController
 @return Banner 广告对象
 */
- (instancetype)initWithUnitID:(NSString *)unitID
            rootViewController:(UIViewController *)rootViewController;

/**
 Banner 加载
 */
- (void)loadAd;
/**
 Banner 广告移除 开发者自行调用
 */
- (void)closeAd;

@end

/**
 代理方法
 */
@protocol ADPBannerViewDelegate <NSObject>

@optional

/**
 Banner加载成功
 */
- (void)bannerDidReceiveAd:(ADPBannerView *)bannerView;

/**
 Banner点击
 */
- (void)bannerDidClick:(ADPBannerView *)bannerView;

/**
 * 信息流广告展示
 */
- (void)bannerDidShow:(ADPBannerView *)feedAdView;

/**
 广告显示完被关闭
 */
- (void)adDidClose:(ADPBannerView *)bannerView;

/**
 广告弹出全屏
 */
- (void)adWillPresentFullScreen:(ADPBannerView *)bannerView;

/**
 广告从全屏关闭
 */
- (void)adWillDismissFullScreen:(ADPBannerView *)bannerView;


/**
 Banner请求失败
 */
- (void)banner:(ADPBannerView *)bannerView didFailWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
