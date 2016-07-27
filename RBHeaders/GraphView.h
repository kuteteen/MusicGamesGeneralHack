//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface GraphView : UIView
{
    _Bool _m_IsAnimation;
    float _dotIntervalX;
    float _maxValue;
    float _minValue;
    float _dotSize;
    float _lineSize;
    NSMutableArray *_dataArray;
    NSMutableArray *_pointArray;
    UIColor *_dotColor;
    UIColor *_lineColor;
    struct CGPoint _startPos;
}

@property(nonatomic) float lineSize; // @synthesize lineSize=_lineSize;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) float dotSize; // @synthesize dotSize=_dotSize;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
@property(nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) float dotIntervalX; // @synthesize dotIntervalX=_dotIntervalX;
@property(nonatomic) struct CGPoint startPos; // @synthesize startPos=_startPos;
@property(retain, nonatomic) NSMutableArray *pointArray; // @synthesize pointArray=_pointArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool m_IsAnimation; // @synthesize m_IsAnimation=_m_IsAnimation;
- (void).cxx_destruct;
- (void)reset;
- (void)drawRect:(struct CGRect)arg1;
- (void)setData:(id)arg1 maxValue:(float)arg2 isMovableMinLine:(_Bool)arg3;
- (void)setData:(id)arg1 maxValue:(float)arg2;
- (void)setOption:(id)arg1 dotSize:(float)arg2 lineColor:(id)arg3 lineSize:(float)arg4;
- (void)CreateView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
