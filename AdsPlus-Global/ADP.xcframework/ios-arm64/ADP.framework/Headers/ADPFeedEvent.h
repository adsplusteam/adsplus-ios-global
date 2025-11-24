//
//  ADPFeedEvent.h
//  ADP
//
//  Created by ADP on 2022/9/3.
//  Copyright © 2022 ADP. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

typedef NSString * const ADPEventName;
/// 滑滑流请求事件名称
extern ADPEventName  ADPEventRequestPageAPI;
/*
  滑滑场景类型
 */
typedef NS_ENUM(NSInteger, ADPFeedEventScene) {
    ADPFeedEventSceneMainPage,     /// 主滑滑流
    ADPFeedEventScenePersonalPage, /// 个人作品滑滑流
    ADPFeedEventSceneOtherPage,    /// 其他类型滑滑流
};

@interface ADPFeedEvent : NSObject
/// 事件唯一标识符
@property (nonatomic, copy) NSString *eventIdentify;
/// 事件名称
@property (nonatomic, copy) ADPEventName eventName;
/// 滑滑流场景
@property (nonatomic, assign) ADPFeedEventScene eventScene;

@end

@interface ADPResponseObj : NSObject
/// 当前请求视频模型数量
@property (nonatomic, assign) NSInteger countOfVideoInRequest;

@end

NS_ASSUME_NONNULL_END

