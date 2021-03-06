/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject {
}
@property(assign) BOOL shouldShowInOverlay;	// G=0x564d1; S=0x56479; 
@property(readonly, assign) NSString *protocolVersion;	// G=0x56075; 
@property(retain) SUScriptURLRequest *overlayBackgroundURLRequest;	// G=0x55ff5; S=0x56335; 
@property(assign) BOOL excludeFromNavigationHistory;	// G=0x55fc5; S=0x562dd; 
@property(retain) NSString *copyright;	// G=0x55fa9; S=0x56219; 
@property(readonly, assign) NSString *clientIdentifier;	// G=0x55f75; 
@property(retain) NSArray *allowedOrientations;	// G=0x55f4d; S=0x56085; 
+ (void)initialize;	// 0x567a1
+ (id)webScriptNameForKey:(const char *)key;	// 0x5668d
- (id)scriptAttributeKeys;	// 0x56741
- (id)attributeKeys;	// 0x56731
- (id)_webThreadValueForProtocolKey:(id)protocolKey;	// 0x565fd
- (void)_setValue:(id)value forProtocolKey:(id)protocolKey;	// 0x56595
- (void)_setProtocol:(id)protocol;	// 0x56569
- (id)_copyProtocol;	// 0x56501
// declared property getter: - (BOOL)shouldShowInOverlay;	// 0x564d1
// declared property setter: - (void)setShouldShowInOverlay:(BOOL)showInOverlay;	// 0x56479
- (void)setProtocolVersion:(id)version;	// 0x56421
// declared property setter: - (void)setOverlayBackgroundURLRequest:(id)request;	// 0x56335
// declared property setter: - (void)setExcludeFromNavigationHistory:(BOOL)navigationHistory;	// 0x562dd
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x56219
- (void)setClientIdentifier:(id)identifier;	// 0x561c1
// declared property setter: - (void)setAllowedOrientations:(id)orientations;	// 0x56085
// declared property getter: - (id)protocolVersion;	// 0x56075
// declared property getter: - (id)overlayBackgroundURLRequest;	// 0x55ff5
// declared property getter: - (BOOL)excludeFromNavigationHistory;	// 0x55fc5
// declared property getter: - (id)copyright;	// 0x55fa9
// declared property getter: - (id)clientIdentifier;	// 0x55f75
- (id)_className;	// 0x55f69
// declared property getter: - (id)allowedOrientations;	// 0x55f4d
- (void)setValuesFromDictionary:(id)dictionary;	// 0x55ee1
@end
