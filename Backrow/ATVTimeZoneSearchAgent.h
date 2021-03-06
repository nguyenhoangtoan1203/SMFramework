/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
@private
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x34c9db45
- (id)initWithController:(id)controller;	// 0x34c9db89
- (long)cacheSize;	// 0x34c9dcf9
- (void)dealloc;	// 0x34c9dbc9
- (BOOL)handlePlayForObject:(id)object;	// 0x34c9dd01
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x34c9dc05
- (BOOL)showRecentSearches;	// 0x34c9dcfd
@end

