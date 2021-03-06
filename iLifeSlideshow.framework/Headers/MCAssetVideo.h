/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MCAsset.h>

@class NSMutableDictionary, NSMutableSet;

@interface MCAssetVideo : MCAsset {
	NSMutableSet *mSlides;	// 24 = 0x18
	NSMutableDictionary *mCachedWorkingPaths;	// 28 = 0x1c
}
- (id)init;	// 0x5c55
- (void)demolish;	// 0x6349
- (void)setPath:(id)path;	// 0x6269
- (id)workingPathForSize:(CGSize)size;	// 0x5fdd
- (CGImageRef)retainedCGImageForSize:(CGSize)size orientation:(char *)orientation;	// 0x5ed9
- (IOSurfaceRef)retainedIOSurfaceForSize:(CGSize)size orientation:(char *)orientation;	// 0x5e6d
- (void)setWorkingPath:(id)path;	// 0x5d71
- (BOOL)isInUse;	// 0x5d11
- (void)learnSlide:(id)slide;	// 0x5ced
- (void)forgetSlide:(id)slide;	// 0x5cc9
@end
