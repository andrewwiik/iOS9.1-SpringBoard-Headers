//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate.h"

@class NSString, SBLockScreenInfoOverlayView;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockScreenInfoOverlayView *_overlayView;
    NSString *_title;
}

- (void)handleTapGestureFromView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SBLockScreenInfoOverlayDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

