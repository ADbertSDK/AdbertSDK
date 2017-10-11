//
//  adBert_videoBoxViewController.h
//  iOSSample2.1
//
//  Created by William Kuo on 2016/11/1.
//  Copyright © 2016年 adbert. All rights reserved.
//

#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreMedia/CoreMedia.h>

@protocol adBert_videoBoxViewDelegate;

@interface adBert_videoBoxViewController : UIViewController

// !Dangerous for Swift
@property (nonatomic, strong) NSString *APPID;
@property (nonatomic, strong) NSString *APPKEY;
@property (nonatomic, strong) NSString *pageInfo;

//@property (nonatomic, assign) NSString *APPID;
//@property (nonatomic, assign) NSString *APPKEY;
//@property (nonatomic, assign) NSString *pageInfo;

@property (nonatomic, assign) int adWidth;    // for banner only
@property (nonatomic, assign) CGPoint adOrigin;    // for banner only
@property (nonatomic, assign) CGSize adSize; // for banner only

@property (nonatomic, assign) BOOL bSupport2Orientation;
@property (nonatomic, weak) UIView *parentView;
@property (nonatomic, assign) BOOL bAutoShowAdWhenReady;
@property (nonatomic, assign) BOOL isReady;
@property __weak id <adBert_videoBoxViewDelegate> delegate;

- (void)initialize;
- (void)showAD;
+ (NSString *)GetAdbertVersion;
- (void)dealloc;

@end


// Delegate
@protocol adBert_videoBoxViewDelegate <NSObject>
@optional
- (void)adBoxContentDidLoad:(adBert_videoBoxViewController *)ADBERTad;
- (void)adBoxContentView:(adBert_videoBoxViewController *)ADBERTad didLoadFailed:(NSError *)error;
@end
