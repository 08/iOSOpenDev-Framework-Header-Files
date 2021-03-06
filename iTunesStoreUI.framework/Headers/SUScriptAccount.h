/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber, SSAccount;

@interface SUScriptAccount : SUScriptObject {
	SSAccount *_account;	// 36 = 0x24
}
@property(retain) id socialEnabled;	// G=0x526b5; S=0x526a1; 
@property(retain) id purchaseHistoryEnabled;	// G=0x521f9; S=0x5268d; 
@property(retain) id lockerEnabled;	// G=0x521a9; S=0x52679; 
@property(readonly, assign, getter=isPrimaryLockerAccount) id primaryLockerAccount;	// G=0x520e9; 
@property(copy) NSString *kind;	// G=0x52131; S=0x5254d; 
@property(copy) NSString *identifier;	// G=0x520c1; S=0x5247d; 
@property(retain) NSNumber *dsID;	// G=0x52099; S=0x52319; 
@property(copy) NSString *credits;	// G=0x52071; S=0x52249; 
@property(retain) SSAccount *account;	// G=0x51de5; S=0x51e45; 
+ (void)initialize;	// 0x5296d
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x528b5
+ (id)webScriptNameForKey:(const char *)key;	// 0x52811
- (id)scriptAttributeKeys;	// 0x5290d
- (id)attributeKeys;	// 0x528fd
- (void)_setServiceType:(int)type enabled:(id)enabled;	// 0x5275d
- (void)_commitChanges;	// 0x526fd
// declared property getter: - (id)socialEnabled;	// 0x526b5
// declared property setter: - (void)setSocialEnabled:(id)enabled;	// 0x526a1
// declared property setter: - (void)setPurchaseHistoryEnabled:(id)enabled;	// 0x5268d
// declared property setter: - (void)setLockerEnabled:(id)enabled;	// 0x52679
// declared property setter: - (void)setKind:(id)kind;	// 0x5254d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x5247d
// declared property setter: - (void)setDsID:(id)anId;	// 0x52319
// declared property setter: - (void)setCredits:(id)credits;	// 0x52249
// declared property getter: - (id)purchaseHistoryEnabled;	// 0x521f9
// declared property getter: - (id)lockerEnabled;	// 0x521a9
// declared property getter: - (id)kind;	// 0x52131
// declared property getter: - (id)isPrimaryLockerAccount;	// 0x520e9
// declared property getter: - (id)identifier;	// 0x520c1
// declared property getter: - (id)dsID;	// 0x52099
// declared property getter: - (id)credits;	// 0x52071
- (id)_className;	// 0x52065
- (void)setSecureToken:(id)token;	// 0x51f59
- (BOOL)isSecureTokenValid;	// 0x51f19
- (BOOL)isPrimaryAccount;	// 0x51ead
// declared property setter: - (void)setAccount:(id)account;	// 0x51e45
// declared property getter: - (id)account;	// 0x51de5
- (void)dealloc;	// 0x51d91
- (id)init;	// 0x51d2d
@end
