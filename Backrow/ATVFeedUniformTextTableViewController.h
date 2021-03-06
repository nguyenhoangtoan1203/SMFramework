/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : NSObject {
@private
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x34c9edb1; S=0x34c9edc1; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x34c9ed71; S=0x34c9ed89; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x34c9edd1; S=0x34c9ede1; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x34c9e9a5; S=0x34c9e94d; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x34c9edf1; S=0x34c9ee01; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x34c9ed31; S=0x34c9ed49; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x34c9ee11; S=0x34c9ee21; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x34c9edb1
// declared property getter: - (id)cellTextAttributes;	// 0x34c9ed71
// declared property getter: - (float)cellWidth;	// 0x34c9edd1
// declared property getter: - (id)dataSet;	// 0x34c9e9a5
- (void)dealloc;	// 0x34c9e8e5
// declared property getter: - (float)headerHeight;	// 0x34c9edf1
- (float)headerHeightForTableView:(id)tableView;	// 0x34c9ed11
// declared property getter: - (id)headerTextAttributes;	// 0x34c9ed31
// declared property getter: - (float)headerWidth;	// 0x34c9ee11
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x34c9e9e5
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x34c9eab5
- (long)numberOfRowsInTableView:(id)tableView;	// 0x34c9e9b5
// declared property setter: - (void)setCellHeight:(float)height;	// 0x34c9edc1
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x34c9ed89
// declared property setter: - (void)setCellWidth:(float)width;	// 0x34c9ede1
// declared property setter: - (void)setDataSet:(id)set;	// 0x34c9e94d
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x34c9ee01
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x34c9ed49
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x34c9ee21
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x34c9ebd1
- (float)tableView:(id)view heightForRow:(long)row;	// 0x34c9ed01
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x34c9eae5
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x34c9ecf1
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x34c9ed21
@end

