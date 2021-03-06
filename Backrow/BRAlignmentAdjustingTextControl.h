/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextControl.h"
#import "AppleTV-Structs.h"


@interface BRAlignmentAdjustingTextControl : BRTextControl {
@private
	int _singleLineAlignment;	// 48 = 0x30
	int _multiLineAlignment;	// 52 = 0x34
}
@property(assign) int multiLineAlignment;	// G=0x34d37b21; S=0x34d37b31; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x34d37b01; S=0x34d37b11; @synthesize=_singleLineAlignment
- (id)init;	// 0x34d378ad
- (void)_updateAttributes;	// 0x34d378f5
// declared property getter: - (int)multiLineAlignment;	// 0x34d37b21
- (void)setAttributedString:(id)string;	// 0x34d37ac5
- (void)setBounds:(CGRect)bounds;	// 0x34d37a7d
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x34d37b31
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x34d37b11
// declared property getter: - (int)singleLineAlignment;	// 0x34d37b01
@end

