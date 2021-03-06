/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class UIImageView, SUTouchCaptureView;

@interface SUImageViewController : SUViewController {
	SUTouchCaptureView *_backstopView;	// 212 = 0xd4
	UIImageView *_imageView;	// 216 = 0xd8
}
- (id)_imageView;	// 0x5aca1
- (void)_backstopAction:(id)action;	// 0x5ac55
- (void)reloadWithStorePage:(id)storePage forURL:(id)url;	// 0x5ab75
- (void)loadView;	// 0x5aa7d
- (void)dealloc;	// 0x5a9e5
@end
