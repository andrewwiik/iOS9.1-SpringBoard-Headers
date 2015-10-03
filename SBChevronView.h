//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBFVibrantView.h"

@class NSString, UIColor, _SBFVibrantSettings;

@interface SBChevronView : UIView <_SBFVibrantView>
{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    _SBFVibrantSettings *_vibrantSettings;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)setBackgroundView:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_setUnified:(_Bool)arg1;
- (_Bool)_setState:(long long)arg1;
- (void)layoutSubviews;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(_Bool)arg3;
- (struct CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) double animationDuration;
- (void)dealloc;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

