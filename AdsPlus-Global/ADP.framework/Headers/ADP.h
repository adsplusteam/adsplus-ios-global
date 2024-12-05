//
//  ADP.h
//  iCamSee
//
//  Created by ADP on 2020/8/14.
//  Copyright © 2020 ADP. All rights reserved.
//





#import <Foundation/Foundation.h>
#import <ADP/ADPSplash.h>
#import <ADP/ADPBannerView.h>
#import <ADP/ADPFeedAd.h>
#import <ADP/ADPFeedAdView.h>
#import <ADP/ADPInterstitialAd.h>
#import <ADP/ADPRewardedAd.h>
#import <ADP/ADPGameViewController.h>
#import <ADP/ADPConfig.h>
#import <ADP/ADPContentVideoFeed.h>
#import <ADP/ADPContentTextFeed.h>
#import <ADP/ADPContentHorizontalVideoFeed.h>
#import <ADP/ADPContentDelegate.h>
#import <ADP/ADPContentCallBackProtocol.h>


//#define INCLUDE_CONTENT_SDK YES
//#define CN_ONLY YES //单独国内版本
#define HW_ONLY YES //单独海外版本
#define NO_JAD YES //移除JAD


NS_ASSUME_NONNULL_BEGIN

//当前版本号

#define ADP_SDK_VERSION  @"4.2.7.6"


//测试应用ID
#define ADP_TEST_APPID_IOS         @"adp-app-2309893909"

//测试广告位
//开屏国内
#define ADP_TEST_UNIT_ID_SPLASH_CN         @"adp-unit-6157236733"
//开屏海外
#define ADP_TEST_UNIT_ID_SPLASH            @"adp-unit-6886825556"
//BANNER国内
#define ADP_TEST_UNIT_ID_BANNER_CN         @"adp-unit-2527671667"
//BANNER海外
#define ADP_TEST_UNIT_ID_BANNER            @"adp-unit-1211167596"
//信息流国内
#define ADP_TEST_UNIT_ID_FEED_CN           @"adp-unit-5768746799"
//信息流海外
#define ADP_TEST_UNIT_ID_FEED              @"adp-unit-1708801083"
//插页国内
#define ADP_TEST_UNIT_ID_INTERSTITIAL_CN   @"adp-unit-2050621031"
//插页国内 半屏
#define ADP_TEST_UNIT_ID_INTERSTITIAL_CN_HALF   @"adp-unit-9641699079"
//插页海外
#define ADP_TEST_UNIT_ID_INTERSTITIAL      @"adp-unit-7175749686"
//激励国内
#define ADP_TEST_UNIT_ID_REWARD_CN         @"adp-unit-8691753409"
//激励海外
#define ADP_TEST_UNIT_ID_REWARD            @"adp-unit-3775372434"





typedef NS_ENUM(NSInteger,ADPArea) {
    ADPAreaCN      = 0,//国内
    ADPAreaOther   = 1 //海外
};

@interface ADP : NSObject

//初始化
+ (void)initWithAppID:(NSString *)ID
                config:(ADPConfig *)config
              success:(void (^)(void))success
                 fail:(void(^)(NSError *))fail;

//判断SDK是否已经初始化
+ (BOOL)isSDKInited;

//设置区域
+(void)setArea:(ADPArea)area;
+(ADPArea)getArea;


//当前sdk的版本号
+(NSString *)version;

@end

NS_ASSUME_NONNULL_END
