//
//  ADPHead.h
//  ADP
//
//  Created by ADP on 2020/2/23.
//  Copyright © 2021 ADP. All rights reserved.
//

#ifndef ADPHead_h
#define ADPHead_h



//#define INCLUDE_CONTENT_SDK YES
//#define CN_ONLY YES //单独国内版本
//#define HW_ONLY YES //单独海外版本
#define NO_JAD YES //移除JAD





#define kADPError                  @"ADPError"

//单元ID为空
#define kADPErrorCodeUnitIdIsNull      2001
#define kADPErrorDesUnitIdIsNull       @"No ad slot is available or the ad slot ID is incorrect"

#define kADPErrorCodeAdIsNotReady      2002
#define kADPErrorDesAdIsNotReady       @"Ad is not ready"

#define kADPErrorCodeRequestTimeOut    2003
#define kADPErrorDesRequestTimeOut     @"Request time out"

#define kADPErrorCodeAdNotFill         2004
#define kADPErrorDesAdNotFill          @"Ad not fill"

#define kADPErrorCodeAdClosed          2005
#define kADPErrorDesAdClosed           @"The ad is closed"

#define kADPErrorCodeCountryNotFill    2006
#define kADPErrorDesCountryNotFill     @"Not available in the current country"

#define kADPErrorCodeUnknownAdSource    2007
#define kADPErrorDesUnknownAdSource     @"Unknown ad source type"

#define kADPErrorCodeNoneAdSource       2008
#define kADPErrorDesNoneAdSource        @"Ad source is null"

#define kADPErrorCodeNoneAdSourceID      2009
#define kADPErrorDesNoneAdSourceID       @"Ad source id is null"

#define kADPErrorCodeSplashIsShowing      2010
#define kADPErrorDesSplashIsShowing      @"Splash is loading or showing"

#define kADPErrorCodeNetworkConnectError  2011
#define kADPErrorDesNetworkConnectError   @"Network error"

#define kADPErrorCodeAlreadyInitedError    2012
#define kADPErrorDesAlreadyInitedError     @"SDK is Already inited"


#define kADPErrorCodeCacheError    2013
#define kADPErrorDesCacheError     @"Content cache fail"

#define kADPErrorCodeShowError    2014
#define kADPErrorDesShowError     @"Ad show fail"


#define kADPErrorCodeBiddingLoss    2015
#define kADPErrorDesBiddingLoss     @"bidding loss ,price is lower"

#define kADPErrorCodeBiddingLoad    2016
#define kADPErrorDesBiddingLoad     @"bidding load"

#define kADPErrorCodeShowTimeOut    2017
#define kADPErrorDesShowTimeOut     @"Show time out"

#define kADPErrorCodeExceededShowCount    2018
#define kADPErrorDesExceededShowCount     @"Exceeded show count"



#define AD_Taku             @"taku"
#define AD_Tencent          @"tencent"
#define AD_Bytedance        @"bytedance"
#define AD_GroMore          @"gromore"
#define AD_Octopus          @"octopus"//章鱼
#define AD_Kuaishou         @"kuaishou"
#define AD_Jingdong         @"jingdong" //京东
#define AD_Klevin           @"klevin" //游可盈
#define AD_Baidu            @"baidu"
#define AD_Facebook         @"facebook"
#define AD_Google           @"google"
#define AD_Max              @"max"
#define AD_Max_is           @"max_is"
#define AD_Vungle           @"liftoff"
#define AD_Mopub            @"mopub"
#define AD_Mintegral        @"mintegral"
#define AD_Aliyun           @"aliyun"
#define AD_Bigo             @"bigo"
#define AD_Bigo_is          @"bigo_is"
#define AD_ADP_Bigo         @"adp_bigo"
#define AD_Pangle           @"pangle"
#define AD_Pangle_is        @"pangle_is"
#define AD_ADP_Pangle       @"adp_pangle"
#define AD_Amazon           @"amazon"
#define AD_AdsPlusADX       @"adsplusadx"

#define AD_ADPSDK          @"ADPSDK"


#endif /* ADPHead_h */
