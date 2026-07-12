#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface ADPGameSDK : NSObject

- (void)initWithWebView:(WKWebView *)webView posId:(NSString *)posId;
- (void)setBannerId:(NSString *)bannerPosId;
- (void)setInterstitialId:(NSString *)interstitialPosId;
- (void)setRewardId:(NSString *)rewardPosId;
- (void)destroy;

@end
