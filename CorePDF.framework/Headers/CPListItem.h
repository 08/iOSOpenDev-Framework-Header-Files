/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */


#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
	CPList *list;	// 4 = 0x4
	int number;	// 8 = 0x8
	CFArrayRef paragraphs;	// 12 = 0xc
}
@property(retain, nonatomic) CPList *list;	// G=0xa20d; S=0xa275; @synthesize
@property(assign, nonatomic) int number;	// G=0xa1ed; S=0xa1fd; @synthesize
- (id)init;	// 0xa21d
- (void)dispose;	// 0xa3f9
- (void)finalize;	// 0xa3b9
- (void)dealloc;	// 0xa35d
- (unsigned)paragraphCount;	// 0xa349
- (id)paragraphAtIndex:(unsigned)index;	// 0xa335
- (void)addParagraph:(id)paragraph;	// 0xa29d
// declared property getter: - (int)number;	// 0xa1ed
// declared property setter: - (void)setNumber:(int)number;	// 0xa1fd
// declared property getter: - (id)list;	// 0xa20d
// declared property setter: - (void)setList:(id)list;	// 0xa275
@end