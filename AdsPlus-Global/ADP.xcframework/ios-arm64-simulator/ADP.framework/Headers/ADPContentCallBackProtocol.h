
#import <Foundation/Foundation.h>
#import "ADPFeedEvent.h"
#import "ADPContentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ADPRequestCallBackProtocol,ADPUserInteractionCallBackProtocol;

@protocol ADPContentPageCallBackProtocol <ADPRequestCallBackProtocol, ADPUserInteractionCallBackProtocol>

@end

@protocol ADPFeedPageCallBackProtocol <ADPContentPageCallBackProtocol>

@end

/// feed 请求回调协议
@protocol ADPRequestCallBackProtocol <NSObject>

@optional
/// 请求开始回调
- (void)adp_ContentRequestStart:(ADPFeedEvent *)event;
/// 请求成功回调
- (void)adp_ContentRequestSuccess:(ADPFeedEvent *)event
                         callBack:(ADPResponseObj *)responseObj;
/// 请求开失败回调
- (void)adp_ContentRequestFail:(ADPFeedEvent *)event;

@end

@protocol ADPUserInteractionCallBackProtocol <NSObject>

@optional
- (void)adp_ClickContentShareWithItem:(NSString *)shareItem;

- (void)adp_AvaterDidClick:(ADPContentType)contentType;

- (void)adp_LikeDidClick:(ADPContentType)contentType isLike:(BOOL)isLike;

- (void)adp_CommentDidClick:(ADPContentType)contentType;

- (void)adp_SaleListDidClick:(NSString *)liveId;

- (void)adp_BuyButtonDidClick:(NSString *)liveId;

- (void)adp_GotoKwaiDidClick:(NSString *)liveId;

@end

NS_ASSUME_NONNULL_END

