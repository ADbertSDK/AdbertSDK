//
//  ADBERTNativeAD.h
//  iOSSample2.1
//
//  Created by macmini_201402 on 2016/4/7.
//  Copyright © 2016年 adbert. All rights reserved.
//
#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreLocation/CoreLocation.h>
#import <SystemConfiguration/SystemConfiguration.h>


@protocol ADBERTNativeDelegate;

@interface ADBERTNativeAD : UIView

@property (nonatomic, assign) NSString *APPID;
@property (nonatomic, assign) NSString *APPKEY;
@property (nonatomic, assign) NSString *pageInfo;
@property (nonatomic, assign) BOOL isReady;
@property (nonatomic, weak) UIView *parentView;
@property __weak id <ADBERTNativeDelegate> delegate;

- (void)loadAD;
- (NSDictionary *)getData;
- (id)initWithNativeSize:(CGSize)NativeSize origin:(CGPoint)origin;
- (void)showAD;

+ (NSString *)GetAdbertVersion;

- (void) nativeAdDidClicked;

@end

@protocol ADBERTNativeDelegate <NSObject>
@optional
- (void)NativeDataDidReceived:(ADBERTNativeAD *)NativeAD;
- (void)NativeData:(ADBERTNativeAD *)NativeAD DidFailReceived:(NSError *)error;

@end
