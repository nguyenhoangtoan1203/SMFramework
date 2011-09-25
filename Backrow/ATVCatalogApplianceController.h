/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRController.h"

@class BRControl, BRPanelControl, BRMerchant, NSTimer;

@interface ATVCatalogApplianceController : BRController <BRSecureResource> {
@private
	BRPanelControl *_contentContainer;	// 60 = 0x3c
	id _storeObject;	// 64 = 0x40
	BRControl *_catalogControl;	// 68 = 0x44
	BOOL _controllerToSwapOnActivate;	// 72 = 0x48
	long _state;	// 76 = 0x4c
	NSTimer *_timer;	// 80 = 0x50
	BOOL _isDirty;	// 84 = 0x54
	BOOL _isVolatile;	// 85 = 0x55
	BOOL _autoPlay;	// 86 = 0x56
	BRMerchant *_merchant;	// 88 = 0x58
	Class _catalogAgent;	// 92 = 0x5c
	BOOL requiresAuthentication;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL autoPlay;	// G=0x34bec335; S=0x34bec345; @synthesize=_autoPlay
@property(readonly, retain) BRControl *catalogControl;	// G=0x34bec385; converted property
@property(readonly, retain) BRPanelControl *contentContainer;	// G=0x34bec375; converted property
@property(assign, nonatomic) BOOL requiresAuthentication;	// G=0x34bec355; S=0x34bec365; @synthesize
@property(retain) id storeObject;	// G=0x34bec0fd; S=0x34bec0c5; converted property
+ (id)control;	// 0x34bebd11
+ (id)controlWithMerchantLikeControl:(id)merchantLikeControl;	// 0x34bebcc5
+ (void)initialize;	// 0x34bebc29
- (id)init;	// 0x34bebd41
- (void)_controlCreated:(id)created;	// 0x34becff1
- (void)_controlNeedsAuth:(id)auth;	// 0x34bed5cd
- (void)_enterCompleteState;	// 0x34becaf5
- (void)_enterErrorState;	// 0x34bec99d
- (void)_enterWaitingForAuthState;	// 0x34beca09
- (void)_enterWaitingForControlState;	// 0x34beca19
- (void)_enterWaitingForInitialState;	// 0x34bec929
- (void)_handleWaitingForControlAction:(int)controlAction;	// 0x34becd31
- (BOOL)_isAppEntryController;	// 0x34bed711
- (void)_showWaitTimer:(id)timer;	// 0x34becce9
- (void)_swapInNewController:(id)newController;	// 0x34becdc9
- (void)_updateStateForAction:(int)action;	// 0x34becd6d
- (id)accessibilityLabel;	// 0x34bec1f9
- (void)addControls;	// 0x34bec6b9
// declared property getter: - (BOOL)autoPlay;	// 0x34bec335
// converted property getter: - (id)catalogControl;	// 0x34bec385
// converted property getter: - (id)contentContainer;	// 0x34bec375
- (void)controlWasActivated;	// 0x34bebed1
- (void)controlWasDeactivated;	// 0x34bebfad
- (void)dealloc;	// 0x34bebe41
- (void)didEnterErrorState;	// 0x34bec91d
- (id)errorContent;	// 0x34bec595
- (BOOL)isNetworkDependent;	// 0x34bebff9
- (void)layoutSubcontrols;	// 0x34bec155
- (void)markAsDirty;	// 0x34bec135
- (BOOL)recreateOnReselect;	// 0x34bec11d
- (void)refreshDirtyPage;	// 0x34bec86d
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x34bec2e5
// declared property getter: - (BOOL)requiresAuthentication;	// 0x34bec355
// declared property setter: - (void)setAutoPlay:(BOOL)play;	// 0x34bec345
- (void)setCatalogAgent:(Class)agent;	// 0x34bec145
- (void)setMerchant:(id)merchant;	// 0x34bebffd
// declared property setter: - (void)setRequiresAuthentication:(BOOL)authentication;	// 0x34bec365
// converted property setter: - (void)setStoreObject:(id)object;	// 0x34bec0c5
- (void)setStoreObject:(id)object changeState:(BOOL)state;	// 0x34bec395
- (void)setStoreObject:(id)object fromMerchant:(id)merchant;	// 0x34bec08d
- (BOOL)shouldAllowControllerContent;	// 0x34bec925
- (BOOL)shouldAllowTransitionOnSwap;	// 0x34bec921
- (BOOL)shouldShowWaitContent;	// 0x34bec591
- (id)storeMerchant;	// 0x34bec10d
// converted property getter: - (id)storeObject;	// 0x34bec0fd
- (void)updateContent:(id)content;	// 0x34bec6bd
- (id)waitContent;	// 0x34bec4a5
- (float)waitContentDelay;	// 0x34bec589
- (void)willEnterCompleteState;	// 0x34bec919
@end
