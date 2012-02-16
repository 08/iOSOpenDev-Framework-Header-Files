/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLCropOverlay.h>

@class UIButton, PLCropOverlayCropView, TPCameraButton, PLToolbar, UIImageView, UIView, UIProgressHUD, PLCropOverlayBottomBar, UILabel, TPBottomDoubleButtonBar, TPButton;

@interface PLCropOverlay : XXUnknownSuperclass {
	id _delegate;	// 48 = 0x30
	PLCropOverlayCropView *_cropView;	// 52 = 0x34
	PLCropOverlayBottomBar *_bottomBar;	// 56 = 0x38
	UIImageView *_shadowView;	// 60 = 0x3c
	UIView *_overlayContainerView;	// 64 = 0x40
	CGRect _cropRect;	// 68 = 0x44
	PLToolbar *_customToolbar;	// 84 = 0x54
	UILabel *_titleLabel;	// 88 = 0x58
	UIImageView *_topShineView;	// 92 = 0x5c
	TPBottomDoubleButtonBar *_oldBottomBar;	// 96 = 0x60
	TPButton *_cancelPushButton;	// 100 = 0x64
	TPCameraButton *_okPushButton;	// 104 = 0x68
	UIProgressHUD *_hud;	// 108 = 0x6c
	float _statusBarHeight;	// 112 = 0x70
	int _mode;	// 116 = 0x74
	unsigned _previewMode : 1;	// 120 = 0x78
	unsigned _cropRectIsVisible : 1;	// 120 = 0x78
	unsigned _offsetStatusBar : 1;	// 120 = 0x78
	unsigned _tookPhoto : 1;	// 120 = 0x78
	unsigned _showsCropRegion : 1;	// 120 = 0x78
	unsigned _controlsAreVisible : 1;	// 120 = 0x78
	unsigned _isDisplayedInPopover : 1;	// 120 = 0x78
	UIImageView *_bottomShineView;	// 124 = 0x7c
	UIButton *_okButton;	// 128 = 0x80
	UIButton *_cancelButton;	// 132 = 0x84
	UIView *_wildcatPickerTopView;	// 136 = 0x88
	UIView *_wildcatPickerBottomView;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL previewMode;	// G=0x429bd; S=0x42921; 
@property(retain) id modeSwitch;	// G=0x41205; S=0x411e5; converted property
@property(retain) UIView *overlayContainerView;	// G=0x40b21; S=0x40b45; converted property
@property(assign) BOOL controlsAreVisible;	// G=0x40a65; S=0x40a79; converted property
@property(readonly, retain) PLCropOverlayBottomBar *bottomBar;	// G=0x41049; converted property
@property(readonly, assign) CGRect cropRect;	// G=0x41de9; converted property
@property(readonly, assign) int mode;	// G=0x41679; converted property
- (void)_updateTitle;	// 0x429d1
// declared property getter: - (BOOL)previewMode;	// 0x429bd
// declared property setter: - (void)setPreviewMode:(BOOL)mode;	// 0x42921
- (void)setTitleHidden:(BOOL)hidden animationDuration:(float)duration;	// 0x42851
- (void)setShowsCropRegion:(BOOL)region;	// 0x42839
- (void)setProgressDone;	// 0x42819
- (void)removeProgress;	// 0x427d9
- (void)setShowProgress:(BOOL)progress title:(id)title;	// 0x425f9
- (void)setCancelButtonHidden:(BOOL)hidden;	// 0x42585
- (void)setCancelButtonTitle:(id)title;	// 0x42501
- (void)setOKButtonShowsCamera:(BOOL)camera;	// 0x42485
- (void)setOKButtonTitle:(id)title;	// 0x42401
- (void)setOKButtonColor:(int)color;	// 0x42215
- (CGRect)titleRect;	// 0x42189
- (void)setTitle:(id)title;	// 0x42109
- (void)setTitle:(id)title okButtonTitle:(id)title2;	// 0x42039
// converted property getter: - (CGRect)cropRect;	// 0x41de9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x41d41
- (void)setEnabled:(BOOL)enabled;	// 0x41cd5
- (void)_pauseButtonPressed:(id)pressed;	// 0x41cc1
- (void)cropOverlayBottomBarPauseButtonClicked:(id)clicked;	// 0x41c79
- (void)_playButtonPressed:(id)pressed;	// 0x41c65
- (void)cropOverlayBottomBarPlayButtonClicked:(id)clicked;	// 0x41c1d
- (void)cropOverlayBottomBarDoneButtonClicked:(id)clicked;	// 0x41bc1
- (void)cropOverlayBottomBarCancelButtonClicked:(id)clicked;	// 0x41b35
- (void)okButtonClicked:(id)clicked;	// 0x41ad9
- (void)cancelButtonClicked:(id)clicked;	// 0x41a7d
- (void)_fadeOutCompleted:(id)completed;	// 0x41a4d
- (void)dismiss;	// 0x41941
- (void)setDelegate:(id)delegate;	// 0x41931
- (void)statusBarHeightDidChange:(id)statusBarHeight;	// 0x417cd
- (void)dealloc;	// 0x41689
// converted property getter: - (int)mode;	// 0x41679
- (void)didPauseVideo;	// 0x41639
- (void)didPlayVideo;	// 0x415f9
- (void)didCaptureVideo;	// 0x415a9
- (void)didCapturePhoto;	// 0x41535
- (void)_setMode:(int)mode;	// 0x41309
- (void)setCropRectVisible:(BOOL)visible duration:(float)duration;	// 0x41225
// converted property getter: - (id)modeSwitch;	// 0x41205
// converted property setter: - (void)setModeSwitch:(id)aSwitch;	// 0x411e5
- (id)telephonyUIBottomBar;	// 0x411bd
- (id)telephonyUIShutterButton;	// 0x41195
- (id)shutterButton;	// 0x41175
- (CGRect)bottomBarFrame;	// 0x410b5
// converted property getter: - (id)bottomBar;	// 0x41049
- (void)insertIrisView:(id)view;	// 0x40fe9
- (void)_createCropView;	// 0x40d05
- (id)_irisView;	// 0x40c2d
- (id)initWithFrame:(CGRect)frame;	// 0x40bf9
- (id)initWithFrame:(CGRect)frame mode:(int)mode;	// 0x40bc5
// converted property setter: - (void)setOverlayContainerView:(id)view;	// 0x40b45
// converted property getter: - (id)overlayContainerView;	// 0x40b21
// converted property setter: - (void)setControlsAreVisible:(BOOL)visible;	// 0x40a79
// converted property getter: - (BOOL)controlsAreVisible;	// 0x40a65
- (id)initWithFrame:(CGRect)frame mode:(int)mode offsettingStatusBar:(BOOL)bar isDisplayedInPopover:(BOOL)popover;	// 0x3fd99
- (id)_newOverlayViewWithFrame:(CGRect)frame lighterEdgeOnTop:(BOOL)top;	// 0x3fc59
- (void)layoutSubviews;	// 0x3f879
- (void)_updateCropRectInRect:(CGRect)rect;	// 0x3f815
- (void)_updateToolbarItems:(BOOL)items;	// 0x3f71d
@end

@interface PLCropOverlay (PhotoSaving)
- (void)_savePhotoFinished:(id)finished;	// 0xa8691
- (void)_backgroundSavePhoto:(id)photo;	// 0xa8489
- (void)beginBackgroundSaveWithTile:(id)tile progressTitle:(id)title completionCallbackTarget:(id)target options:(int)options;	// 0xa830d
@end