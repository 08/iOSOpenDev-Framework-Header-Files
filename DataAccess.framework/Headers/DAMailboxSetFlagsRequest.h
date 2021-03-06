/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {
	unsigned long long _onFlags;	// 8 = 0x8
	unsigned long long _offFlags;	// 16 = 0x10
	NSString *_messageID;	// 24 = 0x18
}
@property(readonly, assign) unsigned long long onFlags;	// G=0xcff1; converted property
@property(readonly, assign) unsigned long long offFlags;	// G=0xd009; converted property
@property(readonly, retain) NSString *messageID;	// G=0xd021; converted property
// converted property getter: - (id)messageID;	// 0xd021
// converted property getter: - (unsigned long long)offFlags;	// 0xd009
// converted property getter: - (unsigned long long)onFlags;	// 0xcff1
- (void)dealloc;	// 0xcfa5
- (id)description;	// 0xcf05
- (BOOL)isEqual:(id)equal;	// 0xce31
- (unsigned)hash;	// 0xcd81
- (id)initRequestWithSetFlags:(unsigned long long)setFlags unsetFlags:(unsigned long long)flags message:(id)message;	// 0xcce9
@end
