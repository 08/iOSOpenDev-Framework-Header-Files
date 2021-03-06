/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/UIAlertViewDelegate.h>
#import <PhotoLibrary/UITextFieldDelegate.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>


@interface PLCreateAlbumAlertView : XXUnknownSuperclass <UITextFieldDelegate, UIAlertViewDelegate> {
@private
	id completion;	// 156 = 0x9c
}
@property(copy, nonatomic) id completion;	// G=0xd6411; S=0xd6421; @synthesize
+ (id)albumCreationAlertView;	// 0xd611d
// declared property setter: - (void)setCompletion:(id)completion;	// 0xd6421
// declared property getter: - (id)completion;	// 0xd6411
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;	// 0xd639d
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0xd6331
- (BOOL)textFieldShouldReturn:(id)textField;	// 0xd62f9
- (void)showWithCompletionHandler:(id)completionHandler;	// 0xd62b9
- (void)dealloc;	// 0xd6275
@end
