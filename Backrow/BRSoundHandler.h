/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface BRSoundHandler : BRSingleton {
@private
	BOOL _isSoundPrefEnabled;	// 4 = 0x4
	BOOL _soundSuppressed;	// 5 = 0x5
	unsigned long _soundIDs[23];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x34dd52c5
+ (void)reloadSoundPreference;	// 0x34dd5319
+ (void)setSingleton:(id)singleton;	// 0x34dd52b9
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x34dd52f1
+ (id)singleton;	// 0x34dd52ad
- (id)init;	// 0x34dd533d
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x34dd5475
- (BOOL)_allowedToPlaySound;	// 0x34dd5501
- (void)_playSound:(int)sound;	// 0x34dd5539
- (void)_reloadSoundPreference;	// 0x34dd5575
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x34dd5529
- (void)dealloc;	// 0x34dd5391
@end
