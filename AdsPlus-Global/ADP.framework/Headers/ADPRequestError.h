//
//  ADPRequestError.h
//  ADPSDK
//
//  Created by ADP on 2020/10/01
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN



// ADPSDK Ads error domain.
//extern NSString *const kADPErrorDomain;

// NSError codes for ADP error domain.
typedef NS_ENUM(NSInteger, ADPErrorCode) {
    kADPErrorUnknown                              = -10000,
    
    // unitID不能为空
    kADPErrorUnitIDNULL                          = -10001,
    
    // 无效的URL，不能为空
    kADPErrorURLNULL                              = -10002,
    
    // 在请求广告数据过程中请求超时
    kADPErrorTimeout                              = -10003,
    
    // 在请求广告数据过程中出现了网络错误
    kADPErrorNetworkError                         = -10004,
    
    // 广告ID出现错误
    kADPErrorIDNotFound                           = -10005,
    
    // 广告ID使用错误，类型不匹配
    kADPErrorIDUseError                           = -10006,
    
    // 广告请求成功，但没有返回广告内容
    kADPErrorNoFill                               = -10007,
    
    // 广告请求成功，加载素材失败
    kADPErrorLoadAdError                          = -10008,
    
    // 广告请求成功，获取到不支持的广告类型
    kADPErrorDoesNotSupport                       = -10009,
    
    // 广告请求成功，激励视频存在错误
    kADPErrorRewardedIsHotVideo                   = -10010,
    
    // 广告请求时长过短
    kADPErrorLittleTime                           = -10011,
    
    // 广告请求成功，但没有返回广告内容
    kADPErrorChannelNoFill                        = -10012,
    
    // 广告View未添加到页面
    kADPErrorAdNotAddView                         = -11001,
    
    // 未发现上层控制器
    kADPErrorDoesNotCurrentViewController        = -11002,
    
    // 未发现布局广告View
    kADPErrorDoesNotCurrentView                  = -11003,
    
    // 广告还未加载完毕被切换到后台
    kADPErrorEnterForeground                     = -11004,
    
    //原生广告上报时，页面没有添加到视图上
    kADPErrorDoesNotDisplayedInScreen            = -11005,
    
    // 广告被移除屏幕
    kADPErrorRemoveFromWindow                    = -11006,
    
    // 第三方渠道错误
    kThirdPartyChannelError                         = -12001,
    
    // 第三方渠道为空
    kADPErrorChannelParameterNULL                = -12002,
    
};


@interface ADPRequestError : NSObject

@property(nonatomic,assign) ADPErrorCode code;
 
+ (ADPRequestError *)errorWithCode:(ADPErrorCode)code;

@end

NS_ASSUME_NONNULL_END
