/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/XXUnknownSuperclass.h>
#import <AssistantServices/AFSyncChangeInfo.h>

@class NSString, SADomainObject;

__attribute__((visibility("hidden")))
@interface ASSyncChangeInfo : XXUnknownSuperclass <AFSyncChangeInfo> {
	SADomainObject *object;	// 4 = 0x4
	NSString *postAnchor;	// 8 = 0x8
	BOOL isDelete;	// 12 = 0xc
}
@property(assign) BOOL isDelete;	// G=0x4445; S=0x4455; @synthesize
@property(copy, nonatomic) NSString *postAnchor;	// G=0x4411; S=0x4421; @synthesize
@property(retain, nonatomic) SADomainObject *object;	// G=0x43dd; S=0x43ed; @synthesize
// declared property setter: - (void)setIsDelete:(BOOL)aDelete;	// 0x4455
// declared property getter: - (BOOL)isDelete;	// 0x4445
// declared property setter: - (void)setPostAnchor:(id)anchor;	// 0x4421
// declared property getter: - (id)postAnchor;	// 0x4411
// declared property setter: - (void)setObject:(id)object;	// 0x43ed
// declared property getter: - (id)object;	// 0x43dd
- (id)description;	// 0x431d
- (void)dealloc;	// 0x42c5
@end
