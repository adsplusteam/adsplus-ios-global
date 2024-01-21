//
//  ADPContentVideoDelegate.h
//  ADP
//
//  Created by ADP on 2022/2/26.
//  Copyright © 2022 ADP. All rights reserved.
//


#ifndef ADPVideoStateDelegate_h
#define ADPVideoStateDelegate_h

typedef NS_ENUM(NSUInteger, ADPContentType) {
    ADPContentTypeUnknown,         //未知，正常不会出现
    ADPContentTypeNormal,          //普通信息流
    ADPContentTypeAd,              //广告
    ADPContentTypeLive             //直播
};


@interface ADPContentInfo :NSObject

////内容标识
//- (NSString *)publicContentId;
////内容类型
//- (ADPContentType)publicContentType;
////视频时长. 毫秒
//- (NSTimeInterval)publicVideoDuration;

@property(nonatomic, copy) NSString *publicContentId;

@property(nonatomic, assign) ADPContentType publicContentType;

@property(nonatomic, assign) NSTimeInterval publicVideoDuration;

@end

/**
 * 视频播放状态代理
 */
@protocol ADPVideoStateDelegate <NSObject>
@optional
/**
 * 视频开始播放
 * @param videoContent 内容模型
 */
- (void)adp_videoDidStartPlay:(ADPContentInfo*)videoContent;
/**
* 视频暂停播放
* @param videoContent 内容模型
*/
- (void)adp_videoDidPause:(ADPContentInfo*)videoContent;
/**
* 视频恢复播放
* @param videoContent 内容模型
*/
- (void)adp_videoDidResume:(ADPContentInfo*)videoContent;
/**
* 视频停止播放
* @param videoContent 内容模型
* @param finished     是否播放完成
*/
- (void)adp_videoDidEndPlay:(ADPContentInfo*)videoContent isFinished:(BOOL)finished;
/**
* 视频播放失败
* @param videoContent 内容模型
* @param error        失败原因
*/
- (void)adp_videoDidFailedToPlay:(ADPContentInfo*)videoContent withError:(NSError *)error;

@end


/**
* 内容展示状态代理
*/
@protocol ADPContentStateDelegate <NSObject>
@optional
/**
* 内容展示
* @param content 内容模型
*/
- (void)adp_contentDidFullDisplay:(ADPContentInfo*)content;
/**
* 内容隐藏
* @param content 内容模型
*/
- (void)adp_contentDidEndDisplay:(ADPContentInfo*)content;
/**
* 内容暂停显示，ViewController disappear或者Application resign active
* @param content 内容模型
*/
- (void)adp_contentDidPause:(ADPContentInfo*)content;
/**
* 内容恢复显示，ViewController appear或者Application become active
* @param content 内容模型
*/
- (void)adp_contentDidResume:(ADPContentInfo*)content;

@end


#endif
