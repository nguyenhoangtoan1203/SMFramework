/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRTrackInfoLayer, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 44 = 0x2c
	BRMediaPlayer *_player;	// 48 = 0x30
	NSString *_lastAssetID;	// 52 = 0x34
}
@property(retain) BRMediaPlayer *player;	// G=0x34d4e80d; S=0x34d4e719; converted property
- (id)init;	// 0x34d4e4b5
- (id)_fetchCoverArt;	// 0x34d4e9e9
- (void)_playbackAssetChanged:(id)changed;	// 0x34d4eac5
- (void)_playerStateChanged:(id)changed;	// 0x34d4ea89
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x34d4eb8d
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x34d4ec1d
- (void)_updateCoverArt:(id)art;	// 0x34d4ead9
- (void)_updateTrackInfo;	// 0x34d4e83d
- (id)accessibilityLabel;	// 0x34d4e81d
- (void)controlWasActivated;	// 0x34d4e5d1
- (void)controlWasDeactivated;	// 0x34d4e68d
- (void)dealloc;	// 0x34d4e541
// converted property getter: - (id)player;	// 0x34d4e80d
// converted property setter: - (void)setPlayer:(id)player;	// 0x34d4e719
@end

