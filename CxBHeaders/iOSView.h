//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext, NSMutableSet;
@protocol iOSDeviceRotationDelegate;

@interface iOSView : UIView
{
    struct CGRect viewRect;
    EAGLContext *context;
    struct CGPoint touchPosition;
    int tapState;
    struct CGPoint debugTouchPosition;
    int debugTapState;
    iOSRingBuffer_251dfd57 *touchEventBuffer;
    _Bool bResetRenderbufferStorage;
    unsigned long long serialTouchState;
    double serialTouchTime;
    float deviceContentScale;
    float pinchGestureScaleDiff;
    float pinchGestureScale;
    float pinchTouchDistance;
    struct iOSVirtualPad virtualPad;
    struct iOSVPadAttrib virtualPadAttr;
    unsigned long long padTouchHash;
    unsigned long long buttonATouchHash;
    unsigned long long buttonBTouchHash;
    unsigned long long buttonXTouchHash;
    unsigned long long buttonYTouchHash;
    NSMutableSet *defaultGestures;
    NSMutableSet *padModeGestures;
    NSMutableSet *userModeTouches;
    NSMutableSet *userModeGestures;
    int gestureSet;
    int mButtonType;
    char mAlertCaption[256];
    char mAlertMessage[256];
    id <iOSDeviceRotationDelegate> _deviceRotationDelegate;
}

+ (Class)layerClass;
@property(readonly, nonatomic) int gestureSet; // @synthesize gestureSet;
@property(nonatomic) float contentScale; // @synthesize contentScale=deviceContentScale;
@property(nonatomic) id <iOSDeviceRotationDelegate> deviceRotationDelegate; // @synthesize deviceRotationDelegate=_deviceRotationDelegate;
@property(readonly, nonatomic) float pinchGestureScale; // @synthesize pinchGestureScale;
@property(readonly, nonatomic) float pinchGestureScaleDiff; // @synthesize pinchGestureScaleDiff;
@property(readonly, nonatomic) iOSRingBuffer_251dfd57 *touchEventBuffer; // @synthesize touchEventBuffer;
@property(readonly, nonatomic) int debugTapState; // @synthesize debugTapState;
@property(readonly, nonatomic) struct CGPoint debugTouchPosition; // @synthesize debugTouchPosition;
@property(readonly, nonatomic) int tapState; // @synthesize tapState;
@property(readonly, nonatomic) struct CGPoint touchPosition; // @synthesize touchPosition;
@property(readonly, nonatomic) EAGLContext *context; // @synthesize context;
- (id).cxx_construct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)openAlert:(const char *)arg1 pMessage:(const char *)arg2 ButtonType:(int)arg3;
- (void)openAlertMainThread:(id)arg1;
- (void)deleteGestureRecognizer;
- (void)createGestureRecognizer;
- (void)changeSwipeGestureDirection:(int)arg1;
- (void)unregisterGesture:(id)arg1;
- (void)registerGesture:(id)arg1;
- (void)setGestureSet:(int)arg1;
- (_Bool)getSerialDisp;
- (void)initVirtualPad;
- (void)setVirtualPadAttribute:(const struct iOSVPadAttrib *)arg1;
- (const struct iOSVPadAttrib *)virtualPadAttribute;
- (struct iOSVirtualPad *)virtualPad;
- (void)handlePadTripleTapFrom:(id)arg1;
- (void)padModeTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)padModeTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)padModeTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)defaultTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)defaultTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)defaultTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)defaultTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)enableUserGesture:(_Bool)arg1;
- (void)enablePadGesture:(_Bool)arg1;
- (void)enableDefaultGesture:(_Bool)arg1;
- (struct CGPoint)convertViewPosition:(struct CGPoint)arg1;
- (void)handleTripleTapFrom:(id)arg1;
- (void)handlePinchFrom:(id)arg1;
- (void)handleLongSingleTapFrom:(id)arg1;
- (void)handleLongDoubleTapFrom:(id)arg1;
- (void)handleDoubleTapFrom:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)getViewSize;
- (void)dealloc;
- (void)cleanUp;
- (_Bool)flushBuffer;
- (id)initMainViewWithWindow:(id)arg1 contentScale:(float)arg2;
- (void)initBackbufferStorage;
- (void)setContentScaleMainThread:(id)arg1;
- (void)setGLContext;

@end
