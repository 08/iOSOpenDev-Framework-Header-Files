/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */




@protocol AccountNotificationProtocol <NSObject>
+ (void)noteAccountChanges:(id)changes;
@optional
+ (void)accountDidChange:(id)account forDataclass:(id)dataclass;
+ (void)accountWillChange:(id)account forDataclass:(id)dataclass;
@end

