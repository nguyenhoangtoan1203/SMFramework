/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlMediator.h"

@class BRProviderGroup;

@interface BRThresholdControlMediator : BRControlMediator {
@private
	BRProviderGroup *_dataProviderGroup;	// 20 = 0x14
	int _activeThreshold;	// 24 = 0x18
}
- (void)_refreshActiveState;	// 0x34d84e25
- (void)dealloc;	// 0x34d84ba9
- (void)setActiveThreshold:(int)threshold;	// 0x34d84e05
- (void)setDataProvider:(id)provider;	// 0x34d84dd1
- (void)setDataProviders:(id)providers;	// 0x34d84c15
@end
