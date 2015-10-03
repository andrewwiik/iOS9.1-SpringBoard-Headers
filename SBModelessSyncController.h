//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBModelessSyncController : NSObject
{
    _Bool _isAppSyncing;
    _Bool _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    _Bool _restoringFromICloud;
    _Bool _isAutoSyncing;
    _Bool _isWirelessSyncing;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool isWirelessSyncing; // @synthesize isWirelessSyncing=_isWirelessSyncing;
@property(readonly, nonatomic) _Bool isAutoSyncing; // @synthesize isAutoSyncing=_isAutoSyncing;
@property(readonly, nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(readonly, nonatomic) _Bool isAppSyncing; // @synthesize isAppSyncing=_isAppSyncing;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
@property(readonly, nonatomic) _Bool isRestoringFromICloud;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(_Bool)arg1;
- (void)_appSyncStateChanged;
- (void)gotLowBatteryWarning;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)dealloc;
- (id)init;

@end

