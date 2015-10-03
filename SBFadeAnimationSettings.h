//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class SBAnimationSettings;

@interface SBFadeAnimationSettings : _UISettings
{
    double _backlightFadeDuration;
    SBAnimationSettings *_dateInSettings;
    SBAnimationSettings *_overlayInSettings;
    SBAnimationSettings *_contentInSettings;
    SBAnimationSettings *_wallpaperInSettings;
    SBAnimationSettings *_dateOutSettings;
    SBAnimationSettings *_overlayOutSettings;
    SBAnimationSettings *_wallpaperOutSettings;
    struct CGRect _wallpaperInContentsRect;
    struct CGRect _wallpaperOutContentsRect;
}

+ (id)settingsControllerModule;
@property(nonatomic) struct CGRect wallpaperOutContentsRect; // @synthesize wallpaperOutContentsRect=_wallpaperOutContentsRect;
@property(retain, nonatomic) SBAnimationSettings *wallpaperOutSettings; // @synthesize wallpaperOutSettings=_wallpaperOutSettings;
@property(retain, nonatomic) SBAnimationSettings *overlayOutSettings; // @synthesize overlayOutSettings=_overlayOutSettings;
@property(retain, nonatomic) SBAnimationSettings *dateOutSettings; // @synthesize dateOutSettings=_dateOutSettings;
@property(nonatomic) struct CGRect wallpaperInContentsRect; // @synthesize wallpaperInContentsRect=_wallpaperInContentsRect;
@property(retain, nonatomic) SBAnimationSettings *wallpaperInSettings; // @synthesize wallpaperInSettings=_wallpaperInSettings;
@property(retain, nonatomic) SBAnimationSettings *contentInSettings; // @synthesize contentInSettings=_contentInSettings;
@property(retain, nonatomic) SBAnimationSettings *overlayInSettings; // @synthesize overlayInSettings=_overlayInSettings;
@property(retain, nonatomic) SBAnimationSettings *dateInSettings; // @synthesize dateInSettings=_dateInSettings;
@property(nonatomic) double backlightFadeDuration; // @synthesize backlightFadeDuration=_backlightFadeDuration;
- (void)setDefaultValues;

@end

