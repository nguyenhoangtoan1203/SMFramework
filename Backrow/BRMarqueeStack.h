/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library
#import "BRMarqueeScrollingDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMarqueeStack : NSObject <BRMarqueeScrollingDelegate> {
@private
	NSMutableArray *_controlStack;	// 4 = 0x4
	unsigned _currentScrollingControlIndex;	// 8 = 0x8
	BOOL _isFirstRun;	// 12 = 0xc
	BOOL _shouldStopAllScrolling;	// 13 = 0xd
	BOOL _shouldAnimateOnce;	// 14 = 0xe
	BOOL _allowsSimultaneousScrollingControls;	// 15 = 0xf
	unsigned _maxSimultaneousScrollingControls;	// 16 = 0x10
	int _transitionDirection;	// 20 = 0x14
}
@property(assign) BOOL allowsSimultaneousScrollingControls;	// G=0x34d1e9b9; S=0x34d1e9a9; converted property
@property(assign) unsigned maxSimultaneousScrollingControls;	// G=0x34d1e9d9; S=0x34d1e9c9; converted property
@property(assign) int transitionDirection;	// G=0x34d1e979; S=0x34d1e969; converted property
- (id)init;	// 0x34d1e885
- (int)_indexOfFirstControlInNeedOfAnimation;	// 0x34d1eda1
- (int)_indexOfNextControlInNeedOfScrollingFromIndex:(unsigned)index;	// 0x34d1edb9
- (void)addControlToStack:(id)stack;	// 0x34d1e9e9
- (void)addControlToStack:(id)stack atIndex:(unsigned)index;	// 0x34d1ea01
// converted property getter: - (BOOL)allowsSimultaneousScrollingControls;	// 0x34d1e9b9
- (void)controlDidFinishingScrolling:(id)control;	// 0x34d1ec49
- (void)dealloc;	// 0x34d1e7cd
// converted property getter: - (unsigned)maxSimultaneousScrollingControls;	// 0x34d1e9d9
- (void)removeControlFromStack:(id)stack;	// 0x34d1ea7d
// converted property setter: - (void)setAllowsSimultaneousScrollingControls:(BOOL)controls;	// 0x34d1e9a9
// converted property setter: - (void)setMaxSimultaneousScrollingControls:(unsigned)controls;	// 0x34d1e9c9
- (void)setShouldAnimateOnce:(BOOL)animateOnce;	// 0x34d1e999
- (void)setShouldStopAllScrolling:(BOOL)stopAllScrolling;	// 0x34d1e989
// converted property setter: - (void)setTransitionDirection:(int)direction;	// 0x34d1e969
- (BOOL)shouldControlWaitToScroll:(id)scroll;	// 0x34d1eab5
- (id)stack;	// 0x34d1e93d
// converted property getter: - (int)transitionDirection;	// 0x34d1e979
@end

