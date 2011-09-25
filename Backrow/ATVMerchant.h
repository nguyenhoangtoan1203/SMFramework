/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMerchant.h"
#import "ATVReadWriteFeedResource.h"

@class ATVDictionaryFeedResource, ATVPreferenceFeedResource, ATVJSContext;

@interface ATVMerchant : BRMerchant <ATVReadWriteFeedResource> {
@private
	ATVPreferenceFeedResource *_preferenceResource;	// 8 = 0x8
	ATVJSContext *_javaScriptContext;	// 12 = 0xc
	ATVDictionaryFeedResource *_sessionResource;	// 16 = 0x10
}
@property(retain) ATVJSContext *javaScriptContext;	// G=0x34c64981; S=0x34c64a49; 
@property(readonly, assign) ATVDictionaryFeedResource *sessionResource;	// G=0x34c64f05; @synthesize=_sessionResource
+ (void)registerDefaultMerchants;	// 0x34c6474d
- (id)init;	// 0x34c647d1
- (BOOL)assignToObject:(id)object;	// 0x34c64b41
- (void)clearFeedResources;	// 0x34c64ee5
- (void)dealloc;	// 0x34c64919
- (id)evaluatePlist:(id)plist;	// 0x34c64cb5
- (id)feedResourceNamed:(id)named;	// 0x34c64cd9
// declared property getter: - (id)javaScriptContext;	// 0x34c64981
- (id)localizedStringForKey:(id)key;	// 0x34c64c7d
// declared property getter: - (id)sessionResource;	// 0x34c64f05
- (void)setFeedResource:(id)resource named:(id)named;	// 0x34c64ebd
// declared property setter: - (void)setJavaScriptContext:(id)context;	// 0x34c64a49
@end
