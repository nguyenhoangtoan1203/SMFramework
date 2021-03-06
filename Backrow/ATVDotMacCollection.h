/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosCollection.h"
#import "ATVDotMacAuthentication.h"

@class NSString, ATVDotMacSecondaryAccount;

@interface ATVDotMacCollection : ATVInternetPhotosCollection <ATVDotMacAuthentication> {
@private
	/*ATVDotMacSecondaryAccount **/id _secondaryAccount;	// 64 = 0x40
	BOOL _requiresAuthentication;	// 68 = 0x44
	NSString *_keyImageDotMacIdentifier;	// 72 = 0x48
	BOOL _initialAuthCheckComplete;	// 76 = 0x4c
}
@property(assign) BOOL initialAuthCheckComplete;	// G=0x34bfbfe5; S=0x34bfbff5; converted property
@property(retain) NSString *keyImageDotMacIdentifier;	// G=0x34bfb825; S=0x34bfb8ed; converted property
@property(assign) BOOL requiresAuthentication;	// G=0x34bfbda9; S=0x34bfbdb9; converted property
@property(retain) /*ATVDotMacSecondaryAccount  **/ id secondaryAccount;	// G=0x34bfbdc9; S=0x34bfbe91; converted property
- (id)initWithCollectionInfo:(id)collectionInfo;	// 0x34bfb539
- (id)archivableCollectionInfo;	// 0x34bfbab1
- (void)dealloc;	// 0x34bfb765
- (id)imageProxy;	// 0x34bfbcf5
// converted property getter: - (BOOL)initialAuthCheckComplete;	// 0x34bfbfe5
- (BOOL)isAuthenticated;	// 0x34bfbd91
- (id)keyAsset;	// 0x34bfb9c1
// converted property getter: - (id)keyImageDotMacIdentifier;	// 0x34bfb825
- (id)mediaTypes;	// 0x34bfbc81
- (id)photoAssets;	// 0x34bfb7bd
// converted property getter: - (BOOL)requiresAuthentication;	// 0x34bfbda9
// converted property getter: - (id)secondaryAccount;	// 0x34bfbdc9
// converted property setter: - (void)setInitialAuthCheckComplete:(BOOL)complete;	// 0x34bfbff5
// converted property setter: - (void)setKeyImageDotMacIdentifier:(id)identifier;	// 0x34bfb8ed
// converted property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x34bfbdb9
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x34bfbe91
@end

