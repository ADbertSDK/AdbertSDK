//
//  adBert_CommonViewController.h
//  iOSSample
//
//  Created by Dennies Chang on 2015/2/4.
//  Copyright (c) 2015年 adbert. All rights reserved.
//

#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>
#import <sys/sysctl.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreMedia/CoreMedia.h>



@protocol adBert_CommonViewDelegate;

@interface adBert_CommonViewController : UIViewController

// !Dangerous for Swift
@property (nonatomic, strong) NSString *APPID;
@property (nonatomic, strong) NSString *APPKEY;
@property (nonatomic, strong) NSString *pageInfo;

//@property (nonatomic, assign) NSString *APPID;
//@property (nonatomic, assign) NSString *APPKEY;
//@property (nonatomic, assign) NSString *pageInfo;

@property (nonatomic, strong) NSString *isSwift;
@property (nonatomic, assign) const char *SWAPPID;
@property (nonatomic, assign) const char *SWAPPKEY;


@property (nonatomic, assign) CGSize adSize; // for banner only
@property (nonatomic, assign) NSInteger adMODE; // 0 for banner, 1 for Interstitial
@property (nonatomic, assign) BOOL bSupport2Orientation;
@property (nonatomic, weak)   UIView *parentView;
@property (nonatomic, assign) BOOL bAutoShowAdWhenReady;
@property (nonatomic, assign) BOOL isReady;
@property __weak id <adBert_CommonViewDelegate> delegate;

- (void)initialize;
- (void)showAD;
+ (NSString *)GetAdbertVersion;
- (void)dealloc;

@end

@protocol adBert_CommonViewDelegate <NSObject>
@optional
- (void)adContentDidLoad:(adBert_CommonViewController *)ADBERTad;
- (void)adContentView:(adBert_CommonViewController *)ADBERTad didLoadFailed:(NSError *)error;

@end
