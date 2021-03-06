/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRAccountType, NSString;

@interface BRAuthenticationErrorResolutionController : BRController {
@private
	BRAccountType *_accountType;	// 60 = 0x3c
	NSString *_title;	// 64 = 0x40
	NSString *_instructions;	// 68 = 0x44
}
+ (id)errorResolutionControllerWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x34cc67cd
- (id)initWithAccountType:(id)accountType title:(id)title instructions:(id)instructions;	// 0x34cc680d
- (void)controlWasActivated;	// 0x34cc690d
- (void)dealloc;	// 0x34cc68a5
@end

