/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRListControl, BRTextControl, BRHeaderControl, BRListControlMonitor;

@interface BRMenuController : BRController {
@private
	BRListControl *_list;	// 60 = 0x3c
	BRHeaderControl *_header;	// 64 = 0x40
	id _selectedObject;	// 68 = 0x44
	BOOL _clearSavedSelection;	// 72 = 0x48
	BRListControlMonitor *_listControlMonitor;	// 76 = 0x4c
	float _menuWidthFactor;	// 80 = 0x50
	float _headerWidthFactor;	// 84 = 0x54
	BOOL _useCenteredLayout;	// 88 = 0x58
	BRTextControl *_primaryTextControl;	// 92 = 0x5c
	BRTextControl *_secondaryTextControl;	// 96 = 0x60
	BRTextControl *_labelControl;	// 100 = 0x64
}
@property(readonly, retain) BRHeaderControl *header;	// G=0x34cd8751; converted property
@property(assign) float headerWidthFactor;	// G=0x34cd879d; S=0x34cd8761; converted property
@property(readonly, retain) BRListControl *list;	// G=0x34cd86a1; converted property
@property(retain) id listIcon;	// G=0x34cd94e1; S=0x34cd947d; converted property
@property(assign) float listIconHorizontalOffset;	// G=0x34cd9521; S=0x34cd9501; converted property
@property(assign) float listIconKerningFactor;	// G=0x34cd9561; S=0x34cd9541; converted property
@property(retain) id listTitle;	// G=0x34cd9425; S=0x34cd93ad; converted property
@property(assign) float menuWidthFactor;	// G=0x34cd8741; S=0x34cd86b1; converted property
@property(assign) long selectedItem;	// G=0x34cd96e1; S=0x34cd96c1; converted property
@property(retain) id selectedObject;	// G=0x34cd8935; S=0x34cd88fd; converted property
- (id)init;	// 0x34cd8279
- (BOOL)_itemSelected:(id)selected;	// 0x34cd973d
- (id)accessibilityLabel;	// 0x34cd9641
- (id)accessibilitySecondaryLabel;	// 0x34cd9661
- (void)cancelCurrentListMonitorLoads;	// 0x34cd8ac5
- (void)clearSavedSelection;	// 0x34cd87b1
- (int)contextMenuDimOption;	// 0x34cd963d
- (id)controlForContextMenuPositioning;	// 0x34cd9581
- (id)controlForContextMenuStart;	// 0x34cd9595
- (id)controlToDim;	// 0x34cd95b9
- (void)controlWasActivated;	// 0x34cd87f5
- (void)dealloc;	// 0x34cd83c1
- (long)defaultIndex;	// 0x34cd9735
// converted property getter: - (id)header;	// 0x34cd8751
// converted property getter: - (float)headerWidthFactor;	// 0x34cd879d
- (BOOL)isCurrentSelectionValidForModelData:(id)modelData;	// 0x34cd8999
- (BOOL)isValidAfterDataUpdate;	// 0x34cd8a25
- (BOOL)isVolatile;	// 0x34cd97a5
- (long)itemCount;	// 0x34cd9701
- (void)itemSelected:(long)selected;	// 0x34cd9731
- (void)layoutSubcontrols;	// 0x34cd8489
- (void)layoutSubcontrolsUsingCenteredLayout;	// 0x34cd8b31
// converted property getter: - (id)list;	// 0x34cd86a1
// converted property getter: - (id)listIcon;	// 0x34cd94e1
// converted property getter: - (float)listIconHorizontalOffset;	// 0x34cd9521
// converted property getter: - (float)listIconKerningFactor;	// 0x34cd9561
// converted property getter: - (id)listTitle;	// 0x34cd9425
- (float)listVerticalOffset;	// 0x34cd87ad
- (id)loadModelData;	// 0x34cd8945
// converted property getter: - (float)menuWidthFactor;	// 0x34cd8741
- (id)primaryInfoTextControl;	// 0x34cd90c1
- (void)refreshControllerForModelUpdate;	// 0x34cd8949
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x34cd894d
- (id)secondaryInfoTextControl;	// 0x34cd91f9
// converted property getter: - (long)selectedItem;	// 0x34cd96e1
// converted property getter: - (id)selectedObject;	// 0x34cd8935
// converted property setter: - (void)setHeaderWidthFactor:(float)factor;	// 0x34cd8761
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x34cd8f49
- (void)setLabel:(id)label;	// 0x34cd9209
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x34cd9241
// converted property setter: - (void)setListIcon:(id)icon;	// 0x34cd947d
- (void)setListIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x34cd9445
// converted property setter: - (void)setListIconHorizontalOffset:(float)offset;	// 0x34cd9501
// converted property setter: - (void)setListIconKerningFactor:(float)factor;	// 0x34cd9541
// converted property setter: - (void)setListTitle:(id)title;	// 0x34cd93ad
- (void)setListTitle:(id)title withAttributes:(id)attributes;	// 0x34cd9335
// converted property setter: - (void)setMenuWidthFactor:(float)factor;	// 0x34cd86b1
- (void)setPrimaryInfoText:(id)text;	// 0x34cd8f99
- (void)setPrimaryInfoText:(id)text withAttributes:(id)attributes;	// 0x34cd8fb1
- (void)setSecondaryInfoText:(id)text;	// 0x34cd90d1
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x34cd90e9
// converted property setter: - (void)setSelectedItem:(long)item;	// 0x34cd96c1
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x34cd88fd
- (void)setTitle:(id)title;	// 0x34cd8f0d
- (void)setUseCenteredLayout:(BOOL)layout;	// 0x34cd8ae5
- (BOOL)shouldRefreshForUpdateToObject:(id)object;	// 0x34cd8a21
- (int)soundForSelectingItem:(long)selectingItem;	// 0x34cd9739
- (void)wasPushed;	// 0x34cd8855
@end
