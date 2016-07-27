//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class ApplilinkIndicator, ApplilinkParameters;
@protocol SdkViewDelegate;

@interface ApplilinkViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    id <SdkViewDelegate> _sdkDelegate;
    ApplilinkParameters *_applilinkParams;
    ApplilinkIndicator *_indicator;
}

@property(retain, nonatomic) ApplilinkIndicator *indicator; // @synthesize indicator=_indicator;
@property(copy, nonatomic) ApplilinkParameters *applilinkParams; // @synthesize applilinkParams=_applilinkParams;
@property(nonatomic) __weak id <SdkViewDelegate> sdkDelegate; // @synthesize sdkDelegate=_sdkDelegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)productViewControllerDidFinish;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)showSKStore:(id)arg1 appParam:(id)arg2 delegate:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
