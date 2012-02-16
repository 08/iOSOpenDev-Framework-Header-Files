/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <AccountSettingsUI/XXUnknownSuperclass.h>

@class NSString;

@interface AccountSettingsUIAlertConfirmationOptions : XXUnknownSuperclass {
	int _selectedButtonIndex;	// 4 = 0x4
	int _keepDataButtonIndex;	// 8 = 0x8
	int _mergeDataButtonIndex;	// 12 = 0xc
	int _deleteDataButtonIndex;	// 16 = 0x10
	int _cancelButtonIndex;	// 20 = 0x14
	NSString *_dataclass;	// 24 = 0x18
	BOOL _enableAction;	// 28 = 0x1c
	NSString *_tag;	// 32 = 0x20
}
@property(retain) NSString *tag;	// G=0xe47d; S=0xe5e5; converted property
+ (BOOL)isEnableAction:(id)action;	// 0xe559
+ (BOOL)isNonDestructiveAction:(id)action;	// 0xe505
- (id)init;	// 0xe48d
- (void)dealloc;	// 0xe835
- (void)setDataclass:(id)dataclass;	// 0xe7d9
- (void)setIsEnableAction:(BOOL)action;	// 0xe345
- (BOOL)userCancelled;	// 0xe355
- (BOOL)userChoiceWillDeleteData;	// 0xe37d
- (id)userAction;	// 0xe3a5
- (void)setupButtonIndexesForActions:(id)actions;	// 0xe645
// converted property getter: - (id)tag;	// 0xe47d
// converted property setter: - (void)setTag:(id)tag;	// 0xe5e5
@end