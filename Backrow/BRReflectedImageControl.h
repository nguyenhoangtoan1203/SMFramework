/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRImageControl;

@interface BRReflectedImageControl : BRControl {
@private
	BRImageControl *_image;	// 44 = 0x2c
	BRReflectionControl *_reflection;	// 48 = 0x30
	float _offset;	// 52 = 0x34
}
@property(assign) BOOL automaticDownsample;	// G=0x34d2e975; S=0x34d2e955; converted property
@property(retain) BRImageControl *image;	// G=0x34d2e995; S=0x34d2e865; converted property
@property(assign) CGColorRef imageBorderColor;	// G=0x34d2ea7d; S=0x34d2ea49; converted property
@property(assign) float imageBorderWidth;	// G=0x34d2ea19; S=0x34d2e9e5; converted property
@property(assign) float reflectionOffset;	// G=0x34d2e9d5; S=0x34d2e9b5; converted property
- (id)init;	// 0x34d2e6f1
// converted property getter: - (BOOL)automaticDownsample;	// 0x34d2e975
- (void)dealloc;	// 0x34d2e80d
// converted property getter: - (id)image;	// 0x34d2e995
// converted property getter: - (CGColorRef)imageBorderColor;	// 0x34d2ea7d
// converted property getter: - (float)imageBorderWidth;	// 0x34d2ea19
- (void)layoutSubcontrols;	// 0x34d2eaf1
- (CGRect)reflectedImageFrameForImageFrame:(CGRect)imageFrame reflectionAmount:(float)amount;	// 0x34d2eaad
// converted property getter: - (float)reflectionOffset;	// 0x34d2e9d5
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x34d2e955
// converted property setter: - (void)setImage:(id)image;	// 0x34d2e865
- (void)setImageAsContents:(id)contents;	// 0x34d2e8dd
// converted property setter: - (void)setImageBorderColor:(CGColorRef)color;	// 0x34d2ea49
// converted property setter: - (void)setImageBorderWidth:(float)width;	// 0x34d2e9e5
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x34d2e9b5
@end

