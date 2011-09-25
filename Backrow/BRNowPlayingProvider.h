/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <Foundation/Foundation.h> // Unknown library

@class NSSet, NSString;
@protocol BRControlFactory;

@interface BRNowPlayingProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x34d86945
- (void)_checkPlayerState;	// 0x34d86d19
- (id)_initWithTypes:(id)types;	// 0x34d86ac9
- (void)_playerStateChanged:(id)changed;	// 0x34d86cd5
- (id)controlFactory;	// 0x34d86a19
- (id)dataAtIndex:(long)index;	// 0x34d86a81
- (long)dataCount;	// 0x34d86a69
- (void)dealloc;	// 0x34d86989
- (id)hashForDataAtIndex:(long)index;	// 0x34d86abd
@end
