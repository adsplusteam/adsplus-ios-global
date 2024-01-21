//
//  ADPInterstitialAd.h
//  ADP
//
//  Created by ADP on 2020/2/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@protocol ADPInterstitialAdDelegate;

@interface ADPInterstitialAd : NSObject


@property(nonatomic, weak, nullable) id<ADPInterstitialAdDelegate> delegate;

/** 播放视频开启声音，插屏默认开启 */
@property (nonatomic, assign) BOOL enableAudio;
/**点击详情页播放视频开启声音，插屏默认开启 */
@property (nonatomic, assign) BOOL enableDetailPageAudio;

- (instancetype)initWithUnitID:(NSString *)unitID;

/**
 加载广告
 */
- (void)loadAd;

/**
 显示广告
 */
- (void)showAdFromRootViewController:(nonnull UIViewController *)rootViewController;


@end



/**
 代理方法
 */
@protocol ADPInterstitialAdDelegate <NSObject>
@optional

/**
 广告已经加载
 */
- (void)interstitialAdLoaded:(ADPInterstitialAd *)interstitial;
/**
 广告加载失败
 */
- (void)interstitialAd:(ADPInterstitialAd *)interstitial didFailWithError:(NSError *)error;
/**
 广告显示
 */
- (void)interstitialAdShown:(ADPInterstitialAd *)interstitial;
/**
 广告点击
 */
- (void)interstitialAdClicked:(ADPInterstitialAd *)interstitial;
/**
 广告关闭
 */
- (void)interstitialAdDismissed:(ADPInterstitialAd *)interstitial;

@end





NS_ASSUME_NONNULL_END
