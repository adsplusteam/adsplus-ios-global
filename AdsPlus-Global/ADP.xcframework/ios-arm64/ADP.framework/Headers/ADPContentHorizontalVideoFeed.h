//
//  ADPContentTextFeed.h
//  ADP
//
//  Created by ADP on 2022/8/21.
//  Copyright © 2022 ADP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ADPHorizontalFeedCallBackProtocol.h"
#import "ADPImageTextDetailDelegate.h"


NS_ASSUME_NONNULL_BEGIN



@interface ADPContentHorizontalVideoFeed : NSObject


@property (nonatomic, readonly) UIViewController *feedViewController;


- (instancetype)initWithUnitId:(NSString *)unitID;


@property (nonatomic, weak) id<ADPHorizontalFeedCallBackProtocol> videoDetailDelegate;



@end

NS_ASSUME_NONNULL_END
