//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol ShadeViewDelegate;

@interface ShadeView : UIView
{
    id <ShadeViewDelegate> _delegate;
}

@property(nonatomic) id <ShadeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
