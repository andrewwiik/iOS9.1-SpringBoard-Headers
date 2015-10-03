//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTransaction.h"

@class FBApplicationProcess, NSArray, SBApplication;

@interface SBApplicationDisplayUpdateTransaction : FBTransaction
{
    SBApplication *_app;
    FBApplicationProcess *_process;
    unsigned long long _sceneState;
    NSArray *_displays;
}

- (id)_customizedDescriptionProperties;
- (void)_willBegin;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 process:(id)arg2 displays:(id)arg3 state:(unsigned long long)arg4;

@end

