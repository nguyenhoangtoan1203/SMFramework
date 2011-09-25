/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTabControlDelegate.h"
#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "ATVUpdatable.h"
#import "ATVGenericCollectionController.h"

@class ATVTumblerWithListCountHeaderControl, ATVURLDocument, ATVPeriodicItemUpdateTask, ATVTabWithTitleListHeaderControl, NSURL;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVGenericCollectionController <BRTumblerDelegate, BRTumblerDataSource, ATVUpdatable, BRTabControlDelegate> {
@private
	ATVTumblerWithListCountHeaderControl *_tumblerListHeader;	// 88 = 0x58
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 92 = 0x5c
	ATVURLDocument *_documentForTumblerChange;	// 96 = 0x60
	ATVPeriodicItemUpdateTask *_updateTask;	// 100 = 0x64
	NSURL *_currentURL;	// 104 = 0x68
}
@property(retain) NSURL *currentURL;	// G=0x34c7f43d; S=0x34c7f455; @synthesize=_currentURL
- (id)initWithDictionary:(id)dictionary;	// 0x34c7ec9d
- (void)_cancelAllDocumentRequests;	// 0x34c7fe31
- (void)_cancelUpdateTask;	// 0x34c7fddd
- (void)_didNavigateToIndex:(unsigned)index;	// 0x34c7feb1
- (void)_documentReadyNotification:(id)notification;	// 0x34c7f5e1
- (void)_loadListForURL:(id)url;	// 0x34c7f4a1
- (id)_tumblerTextAttributes;	// 0x34c7f47d
- (void)_updateListHeader;	// 0x34c7f959
- (void)_willNavigate;	// 0x34c7fe79
- (id)accessibilityLabel;	// 0x34c7ff51
// declared property getter: - (id)currentURL;	// 0x34c7f43d
- (void)dealloc;	// 0x34c7ef11
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x34c7efc1
// declared property setter: - (void)setCurrentURL:(id)url;	// 0x34c7f455
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x34c7f3f9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x34c7f425
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x34c7f439
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x34c7f0d1
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x34c7f011
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x34c7f0bd
- (void)updateWithPropertyList:(id)propertyList;	// 0x34c7f0fd
@end
