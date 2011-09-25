/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray;

@interface BRApplianceManager : BRSingleton {
@private
	NSMutableArray *_applianceList;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x34d909b5
+ (void)showMainMenu;	// 0x34d909c1
+ (id)singleton;	// 0x34d909a9
- (id)init;	// 0x34d90a11
- (id)_applianceForInfo:(id)info;	// 0x34d9128d
- (id)_controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x34d90e59
- (BOOL)_handlePlay:(id)play userInfo:(id)info;	// 0x34d9110d
- (void)_loadApplianceAtPath:(id)path;	// 0x34d9146d
- (void)_loadAppliancesInFolder:(id)folder;	// 0x34d91319
- (void)_unloadCurrentAppliances;	// 0x34d91265
- (id)applianceForInfo:(id)info;	// 0x34d90b25
- (id)applianceInfoList;	// 0x34d90afd
- (id)controllerForApplianceInfo:(id)applianceInfo identifier:(id)identifier args:(id)args;	// 0x34d90b39
- (id)controllerForApplianceKey:(id)applianceKey identifier:(id)identifier args:(id)args;	// 0x34d90b61
- (id)controllerForContentAlias:(id)contentAlias;	// 0x34d90cd9
- (void)dealloc;	// 0x34d90a39
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x34d90d61
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x34d90ddd
- (void)loadAppliances;	// 0x34d90aa5
@end
