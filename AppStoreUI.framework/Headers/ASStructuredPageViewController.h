/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>

@class SULoadingView;

@interface ASStructuredPageViewController : XXUnknownSuperclass {
	SULoadingView *_loadingView;	// 256 = 0x100
}
- (void)setLoading:(BOOL)loading;	// 0x4469
- (void)reloadForChangedRowCount:(int)changedRowCount;	// 0x4315
- (void)loadView;	// 0x428d
- (id)newTermsAndConditionsFooter;	// 0x4245
- (id)newNoItemsOverlayLabel;	// 0x4199
- (void)dealloc;	// 0x4145
- (id)init;	// 0x40e1
@end