/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABReaderState.h>

@class PBPresentationReaderState;

__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderState : OABReaderState {
@private
	PBPresentationReaderState *mPresentationState;	// 24 = 0x18
}
- (id)initWithPresentationState:(id)presentationState;	// 0xac3f1
- (id)presentationState;	// 0x7db99
@end
