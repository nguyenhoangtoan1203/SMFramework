/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, NSString, ATVGameMenuItemContents;
@protocol BRImageProxy;

@interface ATVGameMenuItem : BRControl {
@private
	ATVGameMenuItemContents *_contents;	// 44 = 0x2c
}
@property(copy) NSString *detailedText;	// G=0x34c7eabd; S=0x34c7eadd; 
@property(assign) BOOL dimmed;	// G=0x34c7eb3d; S=0x34c7eb5d; 
@property(copy) NSString *imageSeparatorText;	// G=0x34c7ea3d; S=0x34c7ea5d; 
@property(retain) BRImage *leftImage;	// G=0x34c7e97d; S=0x34c7e99d; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x34c7e93d; S=0x34c7e95d; 
@property(retain) BRImage *rightImage;	// G=0x34c7e9bd; S=0x34c7e9dd; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x34c7e9fd; S=0x34c7ea1d; 
@property(copy) NSString *rightJustifiedText;	// G=0x34c7eafd; S=0x34c7eb1d; 
@property(copy) NSString *text;	// G=0x34c7ea7d; S=0x34c7ea9d; 
+ (CGRect)contentFrameForControl:(id)control;	// 0x34c7ec21
- (id)init;	// 0x34c7e679
- (float)accessibilityDelayForScreenContent;	// 0x34c7ec19
- (id)accessibilityLabel;	// 0x34c7eb81
- (id)accessibilityTraits;	// 0x34c7ebed
- (void)controlWasFocused;	// 0x34c7e7bd
- (void)controlWasUnfocused;	// 0x34c7e805
- (void)dealloc;	// 0x34c7e779
// declared property getter: - (id)detailedText;	// 0x34c7eabd
// declared property getter: - (BOOL)dimmed;	// 0x34c7eb3d
- (void)drawInContext:(CGContextRef)context;	// 0x34c7e8e5
- (CGRect)focusCursorFrame;	// 0x34c7e871
// declared property getter: - (id)imageSeparatorText;	// 0x34c7ea3d
- (BOOL)isAccessibilityElement;	// 0x34c7eb7d
// declared property getter: - (id)leftImage;	// 0x34c7e97d
// declared property getter: - (id)leftImageProxy;	// 0x34c7e93d
// declared property getter: - (id)rightImage;	// 0x34c7e9bd
// declared property getter: - (id)rightImageProxy;	// 0x34c7e9fd
// declared property getter: - (id)rightJustifiedText;	// 0x34c7eafd
// declared property setter: - (void)setDetailedText:(id)text;	// 0x34c7eadd
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x34c7eb5d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x34c7ea5d
// declared property setter: - (void)setLeftImage:(id)image;	// 0x34c7e99d
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x34c7e95d
// declared property setter: - (void)setRightImage:(id)image;	// 0x34c7e9dd
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x34c7ea1d
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x34c7eb1d
// declared property setter: - (void)setText:(id)text;	// 0x34c7ea9d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34c7e84d
// declared property getter: - (id)text;	// 0x34c7ea7d
@end
