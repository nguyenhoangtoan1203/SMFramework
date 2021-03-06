/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <Foundation/Foundation.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : NSObject {
@private
	NSString *_storeOfferType;	// 4 = 0x4
	NSDictionary *_storeOfferInfo;	// 8 = 0x8
}
@property(readonly, retain) NSString *storeOfferType;	// G=0x34c2f83d; converted property
+ (id)_filterStoreOfferList:(id)list;	// 0x34c2f335
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x34c2f6d1
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x34c2f23d
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x34c2f559
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x34c2f44d
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x34c2f515
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x34c2f729
- (id)actionDisplayName;	// 0x34c2fde1
- (id)dateAvailable;	// 0x34c2fb45
- (void)dealloc;	// 0x34c2f7e5
- (id)downloadURL;	// 0x34c2fbb5
- (long)duration;	// 0x34c2f84d
- (id)fileSize;	// 0x34c2f971
- (BOOL)hasDateAvailable;	// 0x34c2fb01
- (BOOL)hasDigitalExtras;	// 0x34c2fd99
- (BOOL)hasDownload;	// 0x34c2fb71
- (BOOL)hasPreview;	// 0x34c2fbe1
- (BOOL)hasPurchase;	// 0x34c2f9c9
- (BOOL)hasRental;	// 0x34c2fa65
- (BOOL)isClosedCaptioned;	// 0x34c2fc51
- (BOOL)isDolbyDigital;	// 0x34c2fd51
- (BOOL)isHD;	// 0x34c2fce5
- (BOOL)isWideScreen;	// 0x34c2fc9d
- (id)preActionWarning;	// 0x34c2fe0d
- (long)previewDuration;	// 0x34c2f92d
- (id)previewURL;	// 0x34c2fc25
- (id)price;	// 0x34c2f99d
- (id)purchaseParams;	// 0x34c2fa0d
- (id)purchasePrice;	// 0x34c2fa39
- (id)rentalParams;	// 0x34c2faa9
- (id)rentalPrice;	// 0x34c2fad5
// converted property getter: - (id)storeOfferType;	// 0x34c2f83d
- (BOOL)usesStoreDrivenFlow;	// 0x34c2fe39
@end

