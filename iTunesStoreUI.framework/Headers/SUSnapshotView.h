/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIView;

@interface SUSnapshotView : XXUnknownSuperclass {
	UIView *_imageView;	// 48 = 0x30
}
- (void)_takeIOSurfaceSnapshotOfView:(id)view;	// 0x948f9
- (void)_takeCGSnapshotOfView:(id)view;	// 0x9486d
- (void)layoutSubviews;	// 0x94811
- (void)snapshotView:(id)view usingIOSurface:(BOOL)surface;	// 0x94751
- (void)dealloc;	// 0x94705
@end