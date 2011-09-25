/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaCollection.h"
#import <Foundation/Foundation.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaCollection : NSObject <BRMediaCollection> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x34cdd669
- (id)artist;	// 0x34cdd7a5
- (id)artistForSorting;	// 0x34cdd7a9
- (id)assetEnumerator;	// 0x34cdd779
- (id)childCollections;	// 0x34cdd72d
- (id)collectionID;	// 0x34cdd755
- (id)collectionType;	// 0x34cdd735
- (int)count;	// 0x34cdd9b5
- (id)date;	// 0x34cdd97d
- (void)dealloc;	// 0x34cdd6b5
- (long)duration;	// 0x34cdd7bd
- (unsigned)hash;	// 0x34cdd6f9
- (id)imageProxy;	// 0x34cdd771
- (BOOL)isAvailable;	// 0x34cdd8cd
- (BOOL)isCompilation;	// 0x34cdd79d
- (BOOL)isHidden;	// 0x34cdd975
- (BOOL)isLocal;	// 0x34cdd8c9
- (BOOL)isSingleArtistCompilation;	// 0x34cdd7a1
- (BOOL)isValid;	// 0x34cdd759
- (id)mediaAssets;	// 0x34cdd775
- (id)mediaObjectID;	// 0x34cdd75d
- (id)mediaType;	// 0x34cdd8a9
- (id)mediaTypes;	// 0x34cdd7c1
- (id)parentCollection;	// 0x34cdd731
- (void)performSelector:(SEL)selector target:(id)target;	// 0x34cdd981
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x34cdd999
- (id)provider;	// 0x34cdd71d
- (id)title;	// 0x34cdd7ad
- (id)titleForSorting;	// 0x34cdd7b1
- (id)titleForSortingNoDefault;	// 0x34cdd7b9
- (id)titleNoDefault;	// 0x34cdd7b5
- (void)willBeDeleted;	// 0x34cdd979
@end
