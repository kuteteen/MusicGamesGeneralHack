//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLView, HoldMarkerRender, RendererConf, Sequence, UIImageView;

@interface MainGameRenderer : NSObject
{
    float shutterOpen;
    unsigned int lastCombo;
    unsigned int comboEffectFrame;
    unsigned int comboCutFrame;
    unsigned int scoreDisplay;
    unsigned int partnerScoreDisplay;
    int markerState[16];
    CDStruct_0f097b75 holdState[16];
    HoldMarkerRender *holdMarkerRender;
    unsigned int _state;
    _Bool _showCombo;
    _Bool _isNewRecord;
    _Bool _partnerFinished;
    _Bool _partnerFullcombo;
    _Bool _isSession;
    _Bool _isConnected;
    _Bool _isCustom;
    _Bool _isDownload;
    _Bool _isTextureChange;
    _Bool _hasMusic;
    unsigned int _subState;
    unsigned int _scoreRecord;
    int _btnPress;
    int _btnDown;
    unsigned int _partnerScore;
    unsigned int _partnerFinalBonus;
    float _goodJobAlphaMax;
    RendererConf *_rendererConf;
    Sequence *_sequence;
    EAGLView *_eaglView;
    UIImageView *_goodJobImage;
}

@property(nonatomic) _Bool hasMusic; // @synthesize hasMusic=_hasMusic;
@property(nonatomic) _Bool isTextureChange; // @synthesize isTextureChange=_isTextureChange;
@property(nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isSession; // @synthesize isSession=_isSession;
@property(nonatomic) float goodJobAlphaMax; // @synthesize goodJobAlphaMax=_goodJobAlphaMax;
@property(nonatomic) UIImageView *goodJobImage; // @synthesize goodJobImage=_goodJobImage;
@property(retain, nonatomic) EAGLView *eaglView; // @synthesize eaglView=_eaglView;
@property(retain, nonatomic) Sequence *sequence; // @synthesize sequence=_sequence;
@property(nonatomic) _Bool partnerFullcombo; // @synthesize partnerFullcombo=_partnerFullcombo;
@property(nonatomic) unsigned int partnerFinalBonus; // @synthesize partnerFinalBonus=_partnerFinalBonus;
@property(nonatomic) unsigned int partnerScore; // @synthesize partnerScore=_partnerScore;
@property(nonatomic) _Bool partnerFinished; // @synthesize partnerFinished=_partnerFinished;
@property(nonatomic) int btnDown; // @synthesize btnDown=_btnDown;
@property(nonatomic) int btnPress; // @synthesize btnPress=_btnPress;
@property(nonatomic) unsigned int scoreRecord; // @synthesize scoreRecord=_scoreRecord;
@property(nonatomic) _Bool isNewRecord; // @synthesize isNewRecord=_isNewRecord;
@property(nonatomic) _Bool showCombo; // @synthesize showCombo=_showCombo;
@property(nonatomic) unsigned int subState; // @synthesize subState=_subState;
@property(retain, nonatomic) RendererConf *rendererConf; // @synthesize rendererConf=_rendererConf;
- (void).cxx_destruct;
@property(readonly, nonatomic) int upperBgHeight40;
@property(readonly, nonatomic) int buttonMarginForScreen40;
- (void)drawDebugText:(const char *)arg1 pos:(struct CGPoint)arg2 alpha:(float)arg3;
- (void)draw;
- (double)gameAreaOffset;
- (double)buttonAreaOffset;
- (void)endResult;
- (void)startPlay;
- (double)durationOfReadyGo;
@property(readonly, nonatomic) struct CGPoint storeMoveBtnPosition;
@property(readonly, nonatomic) unsigned int storeMoveButtonID;
- (struct CGPoint)twitterBtnPosition;
- (unsigned int)twitterSendButtonID;
@property(readonly, nonatomic) struct CGPoint goodJobPosition;
@property(readonly, nonatomic) unsigned int goodJobButtonID;
@property(readonly, nonatomic) unsigned int evaluateButtonID;
@property(readonly, nonatomic) unsigned int endButtonID;
@property(readonly, nonatomic) _Bool isEndState;
@property(nonatomic) unsigned int state;
- (void)releaseTexture;
- (void)loadTexure:(id)arg1 artwork:(id)arg2 index:(id)arg3;
- (id)init;

@end
