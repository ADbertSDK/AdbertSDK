//
//  adBert_FrameViewController.h
//  adFramework
//
//  Created by Dennies Chang on 2015/01/16
//  Copyright (c) 2014年 AdBert All rights reserved.
//

#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreLocation/CoreLocation.h>
#import <SystemConfiguration/SystemConfiguration.h>

@protocol adBert_FrameViewDelegate;

@interface adBert_FrameViewController : UIViewController

// !Dangerous
@property (nonatomic, strong) NSString *APPID;
@property (nonatomic, strong) NSString *APPKEY;
@property (nonatomic, strong) NSString *pageInfo;

//@property (nonatomic, assign) NSString *APPID;
//@property (nonatomic, assign) NSString *APPKEY;
//@property (nonatomic, assign) NSString *pageInfo;

@property (nonatomic, assign) CGSize adSize; //橫幅廣告

@property (nonatomic, assign) NSInteger adMODE; // 0 for banner, 1 for Interstitial

@property (nonatomic, assign) BOOL bSupport2Orientation;
@property (nonatomic, assign) BOOL autoShowContentWhenReady;
@property (nonatomic, weak) UIView *parentView;
@property __weak id <adBert_FrameViewDelegate> delegate;

//初始化廣告
- (void)initialize;

//顯示版本資訊
+ (NSString *)GetAdbertVersion;

@end

@protocol adBert_FrameViewDelegate <NSObject>
@optional
- (void)mediationContentDidLoad:(adBert_FrameViewController *)ADBERTad;
- (void)mediationContentView:(adBert_FrameViewController *)ADBERTad didLoadFailed:(NSError *)error;
- (void)mediationContentDidClose:(adBert_FrameViewController *)ADBERTad;
@end
