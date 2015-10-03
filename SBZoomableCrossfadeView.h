//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BSUIAnimationFactory;

@interface SBZoomableCrossfadeView : UIView
{
    BSUIAnimationFactory *_animationFactory;
    UIView *_startView;
    UIView *_endView;
    _Bool _translucent;
    _Bool _crossfaded;
    _Bool _allowsGroupOpacityDuringCrossfade;
    _Bool _adaptsAnimationFactoryTimingFunction;
}

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;
@property(nonatomic) _Bool adaptsAnimationFactoryTimingFunction; // @synthesize adaptsAnimationFactoryTimingFunction=_adaptsAnimationFactoryTimingFunction;
@property(nonatomic) _Bool allowsGroupOpacityDuringCrossfade; // @synthesize allowsGroupOpacityDuringCrossfade=_allowsGroupOpacityDuringCrossfade;
@property(retain, nonatomic) BSUIAnimationFactory *animationFactory; // @synthesize animationFactory=_animationFactory;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)crossfadeWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;

@end

