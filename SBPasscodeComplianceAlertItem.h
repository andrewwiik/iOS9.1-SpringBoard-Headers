//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_message;
    NSString *_continueButtonTitle;
    NSString *_cancelButtonTitle;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldShowInLockScreen;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;

@end

