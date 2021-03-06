/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/UIMovieScrubberDelegate.h>
#import <PhotoLibrary/UIMovieScrubberDataSource.h>
#import <PhotoLibrary/PLMoviePlayerControllerDelegate.h>

@class PLAirTunesService, PLVideoOutBackgroundView, PLAirPlayBackgroundView, NSTimer, UIImageView, PLPhotoTileViewController, NSArray, PLMoviePlayerController, PLPhotoBakedThumbnails, AVRemaker, PLVideoPosterFrameView, NSString, PLVideoEditingOverlayView, UIButton, NSLock, PLManagedAsset, UIMovieScrubber, UIImage, NSDictionary, NSURL, NSMutableDictionary, UIView;
@protocol PLVideoViewDelegate;

@interface PLVideoView : XXUnknownSuperclass <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate> {
	PLManagedAsset *_videoCameraImage;	// 48 = 0x30
	NSURL *_videoURL;	// 52 = 0x34
	PLPhotoTileViewController *_imageTile;	// 56 = 0x38
	PLVideoPosterFrameView *_posterFrameView;	// 60 = 0x3c
	UIButton *_videoOverlayPlayButton;	// 64 = 0x40
	UIView *_videoOverlayBackgroundView;	// 68 = 0x44
	PLVideoEditingOverlayView *_trimMessageView;	// 72 = 0x48
	UIImage *_posterFrameImage;	// 76 = 0x4c
	float _scrubberWidth;	// 80 = 0x50
	unsigned _scaleMode;	// 84 = 0x54
	UIImageView *_scrubberBackgroundView;	// 88 = 0x58
	UIView *_scrubberTitleView;	// 92 = 0x5c
	NSTimer *_scrubberUpdateTimer;	// 96 = 0x60
	NSDictionary *_thumbnailOptionsDict;	// 100 = 0x64
	CGSize _thumbnailSize;	// 104 = 0x68
	PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;	// 112 = 0x70
	PLPhotoBakedThumbnails *_bakedPortraitThumbnails;	// 116 = 0x74
	AVRemaker *_remaker;	// 120 = 0x78
	NSString *_trimmedPath;	// 124 = 0x7c
	NSString *_videoPathAfterTrim;	// 128 = 0x80
	NSTimer *_trimProgressTimer;	// 132 = 0x84
	PLManagedAsset *_trimmedVideoClip;	// 136 = 0x88
	XXStruct_pqCwAA *_trimProgressStack;	// 140 = 0x8c
	float _progress;	// 144 = 0x90
	int _interfaceOrientation;	// 148 = 0x94
	PLMoviePlayerController *_moviePlayer;	// 152 = 0x98
	int _orientationWhenLastDisplayed;	// 156 = 0x9c
	id<PLVideoViewDelegate> _delegate;	// 160 = 0xa0
	double _maximumTrimLength;	// 164 = 0xa4
	double _lastScrubbedValue;	// 172 = 0xac
	double _lastActualValue;	// 180 = 0xb4
	double _duration;	// 188 = 0xbc
	double _cachedCurrentPlaybackTime;	// 196 = 0xc4
	unsigned _currentThumbnailRequestID;	// 204 = 0xcc
	PLAirTunesService *_selectedAirTunesService;	// 208 = 0xd0
	PLAirPlayBackgroundView *_airPlayBackgroundView;	// 212 = 0xd4
	PLVideoOutBackgroundView *_videoOutBackgroundView;	// 216 = 0xd8
	NSArray *_imageGenerators;	// 220 = 0xdc
	NSLock *_thumbnailReqlock;	// 224 = 0xe0
	unsigned _showsPosterFrame : 1;	// 228 = 0xe4
	unsigned _showsPlayButton : 1;	// 228 = 0xe4
	unsigned _showsScrubber : 1;	// 228 = 0xe4
	unsigned _canEdit : 1;	// 228 = 0xe4
	unsigned _loadMediaImmediately : 1;	// 228 = 0xe4
	unsigned _scrubberIsSubview : 1;	// 228 = 0xe4
	unsigned _viewWillAppear : 1;	// 228 = 0xe4
	unsigned _didLayout : 1;	// 228 = 0xe4
	unsigned _wasPlayingBeforeScrub : 1;	// 229 = 0xe5
	unsigned _playFromBeginning : 1;	// 229 = 0xe5
	unsigned _needsReloadScrubberThumbnails : 1;	// 229 = 0xe5
	unsigned _playing : 1;	// 229 = 0xe5
	unsigned _playingToAirTunes : 1;	// 229 = 0xe5
	unsigned _editing : 1;	// 229 = 0xe5
	unsigned _disableEditAfterTrim : 1;	// 229 = 0xe5
	unsigned _scrubbing : 1;	// 229 = 0xe5
	unsigned _scrubbingToRight : 1;	// 230 = 0xe6
	unsigned _deleteOriginalFile : 1;	// 230 = 0xe6
	unsigned _passthroughTrimming : 1;	// 230 = 0xe6
	unsigned _preparingMoviePlayer : 1;	// 230 = 0xe6
	unsigned _preparedMoviePlayer : 1;	// 230 = 0xe6
	unsigned _isMoviePlayerDelegate : 1;	// 230 = 0xe6
	unsigned _moviePlayerIsReady : 1;	// 230 = 0xe6
	unsigned _moviePlayerDidBuffer : 1;	// 230 = 0xe6
	unsigned _hidePosterImage : 1;	// 231 = 0xe7
	unsigned _showingOverlay : 1;	// 231 = 0xe7
	unsigned _showingScrubber : 1;	// 231 = 0xe7
	unsigned _showScrubberWhenMovieIsReady : 1;	// 231 = 0xe7
	unsigned _playbackDidBegin : 1;	// 231 = 0xe7
	unsigned _playbackWillBegin : 1;	// 231 = 0xe7
	unsigned _loadScrubberThumbnails : 1;	// 231 = 0xe7
	unsigned _videoIsLandscape : 1;	// 231 = 0xe7
	unsigned _canCreateMetadata : 1;	// 232 = 0xe8
	unsigned _createPreviewPosterFrame : 1;	// 232 = 0xe8
	unsigned _startedDeliveringNotificationsToMainThread : 1;	// 232 = 0xe8
	unsigned _isTrimming : 1;	// 232 = 0xe8
	unsigned _wasTrimmedInPlace : 1;	// 232 = 0xe8
	unsigned _remakingFailed : 1;	// 232 = 0xe8
	unsigned _previewFrameRequestID;	// 236 = 0xec
	NSMutableDictionary *_thumbnailRequests;	// 240 = 0xf0
	NSMutableDictionary *_requestsBeingProcessed;	// 244 = 0xf4
	UIMovieScrubber *_scrubber;	// 248 = 0xf8
	NSMutableDictionary *_cachedThumbnails;	// 252 = 0xfc
	NSArray *_landscapeSummaryThumbnailTimestamps;	// 256 = 0x100
	NSArray *_portraitSummaryThumbnailTimestamps;	// 260 = 0x104
}
@property(readonly, assign, nonatomic) BOOL _didSetPhotoData;	// G=0x5acb5; 
@property(readonly, assign, nonatomic) BOOL _mediaIsPlayable;	// G=0x5ac2d; 
@property(readonly, assign, nonatomic) NSString *_mediaTitle;	// G=0x5abd5; 
@property(readonly, assign, nonatomic) NSString *_pathForPrebakedPortraitScrubberThumbnails;	// G=0x5aba9; 
@property(readonly, assign, nonatomic) NSString *_pathForPrebakedLandscapeScrubberThumbnails;	// G=0x5ab7d; 
@property(readonly, assign, nonatomic) NSString *_pathForVideoPreviewFile;	// G=0x5ab51; 
@property(readonly, assign, nonatomic) NSString *_pathForOriginalFile;	// G=0x5ab09; 
@property(assign, nonatomic) double currentTime;	// G=0x60509; S=0x60465; 
@property(assign, nonatomic) float scrubberWidth;	// G=0x58631; S=0x615ed; @synthesize=_scrubberWidth
@property(assign, nonatomic) BOOL scrubberIsSubview;	// G=0x60415; S=0x603ed; 
@property(assign, nonatomic) BOOL canEdit;	// G=0x6037d; S=0x60331; 
@property(assign, nonatomic) BOOL loadMediaImmediately;	// G=0x60451; S=0x60429; 
@property(assign, nonatomic) BOOL showsScrubber;	// G=0x6031d; S=0x60211; 
@property(assign, nonatomic) BOOL showsPlayOverlay;	// G=0x601fd; S=0x60191; 
@property(assign, nonatomic) BOOL showsPosterFrame;	// G=0x5fe95; S=0x5fe6d; 
@property(readonly, assign, nonatomic) UIImage *currentFrameImage;	// G=0x5e6e9; 
@property(readonly, assign, nonatomic) UIImageView *previewImageView;	// G=0x5e915; 
@property(readonly, assign, nonatomic) NSString *videoPathAfterTrim;	// G=0x5e3b5; 
@property(readonly, assign, nonatomic) double endTime;	// G=0x5e369; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x5e349; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x5c439; S=0x5c425; 
@property(readonly, assign, nonatomic) double duration;	// G=0x6138d; 
@property(readonly, assign, nonatomic) UIView *posterFrameView;	// G=0x615fd; @synthesize=_posterFrameView
@property(readonly, assign, nonatomic) UIImage *posterFrameImage;	// G=0x5ff01; 
@property(retain, nonatomic) PLManagedAsset *trimmedVideoClip;	// G=0x5e3c5; S=0x5e3d5; 
@property(readonly, assign, nonatomic) int interfaceOrientation;	// G=0x615dd; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic) PLManagedAsset *videoCameraImage;	// G=0x5e935; 
@property(assign, nonatomic) PLPhotoTileViewController *imageTile;	// G=0x5e945; S=0x5e955; 
@property(assign, nonatomic) id<PLVideoViewDelegate> delegate;	// G=0x58201; S=0x58211; 
@property(readonly, assign, nonatomic) NSString *pathForVideoFile;	// G=0x5aac1; 
@property(retain) UIView *videoOverlayBackgroundView;	// G=0x58b11; S=0x58b21; converted property
@property(readonly, retain) UIButton *videoOverlayPlayButton;	// G=0x58b65; converted property
+ (id)videoViewForVideoFileAtURL:(id)url;	// 0x57a49
// declared property getter: - (id)posterFrameView;	// 0x615fd
// declared property setter: - (void)setScrubberWidth:(float)width;	// 0x615ed
// declared property getter: - (int)interfaceOrientation;	// 0x615dd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x61515
- (void)_updateScrubberValue;	// 0x613a5
// declared property getter: - (double)duration;	// 0x6138d
- (void)_playbackFinished;	// 0x6118d
- (id)_moviePlayer;	// 0x6117d
- (void)adjustUIForVideoOut:(BOOL)videoOut;	// 0x60ce1
- (void)_airTunesServiceChanged;	// 0x60be1
- (void)_removeAirPlayBackgroundView;	// 0x60ac1
- (void)_addAirPlayBackgroundView;	// 0x607f1
- (id)_parentViewForExternalOutputBackground;	// 0x607ad
- (void)_handleScreenConnectionChange:(BOOL)change;	// 0x60735
- (void)_screenDidDisconnect:(id)_screen;	// 0x60721
- (void)_screenDidConnect:(id)_screen;	// 0x6070d
- (BOOL)shouldShowCopyCalloutAtPoint:(CGPoint)point;	// 0x606c1
- (void)_scrubToTime:(double)time;	// 0x60669
// declared property getter: - (double)currentTime;	// 0x60509
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x60465
// declared property getter: - (BOOL)loadMediaImmediately;	// 0x60451
// declared property setter: - (void)setLoadMediaImmediately:(BOOL)immediately;	// 0x60429
// declared property getter: - (BOOL)scrubberIsSubview;	// 0x60415
// declared property setter: - (void)setScrubberIsSubview:(BOOL)subview;	// 0x603ed
- (BOOL)_canEditDuration:(double)duration;	// 0x603c9
// declared property getter: - (BOOL)canEdit;	// 0x6037d
// declared property setter: - (void)setCanEdit:(BOOL)edit;	// 0x60331
// declared property getter: - (BOOL)showsScrubber;	// 0x6031d
- (void)setShowsScrubber:(BOOL)scrubber duration:(double)duration;	// 0x60241
// declared property setter: - (void)setShowsScrubber:(BOOL)scrubber;	// 0x60211
// declared property getter: - (BOOL)showsPlayOverlay;	// 0x601fd
// declared property setter: - (void)setShowsPlayOverlay:(BOOL)overlay;	// 0x60191
- (void)_updatePosterFrameVisibility;	// 0x600f5
- (void)_updatePosterImageView;	// 0x5ff11
// declared property getter: - (id)posterFrameImage;	// 0x5ff01
- (void)setPosterFrameImage:(id)image;	// 0x5fea9
// declared property getter: - (BOOL)showsPosterFrame;	// 0x5fe95
// declared property setter: - (void)setShowsPosterFrame:(BOOL)frame;	// 0x5fe6d
- (void)didMoveToSuperview;	// 0x5fd41
- (void)willMoveToSuperview:(id)superview;	// 0x5fd05
- (void)setFrame:(CGRect)frame;	// 0x5fc01
- (void)viewDidDisappear;	// 0x5fa51
- (void)viewDidAppear;	// 0x5f9c1
- (void)viewWillAppear:(BOOL)view;	// 0x5f8a9
- (void)_updateScrubberVisibilityWithDuration:(double)duration;	// 0x5f6a5
- (void)stop;	// 0x5f419
- (void)pause;	// 0x5f2b9
- (void)play;	// 0x5ef65
- (BOOL)playingToVideoOut;	// 0x5ef41
- (BOOL)playingToAirTunes;	// 0x5ef2d
- (void)playToAirTunes;	// 0x5ed01
- (void)playButtonClicked:(id)clicked;	// 0x5eca1
- (void)_verifyPlaybackHasBegun;	// 0x5ec1d
- (void)_didBeginPlayback;	// 0x5eaf1
- (void)_delayedHidePosterFrame;	// 0x5eab1
- (BOOL)isPlaying;	// 0x5ea9d
- (void)handleDoubleTap;	// 0x5ea85
- (void)toggleScaleMode:(float)mode;	// 0x5e965
// declared property setter: - (void)setImageTile:(id)tile;	// 0x5e955
// declared property getter: - (id)imageTile;	// 0x5e945
// declared property getter: - (id)videoCameraImage;	// 0x5e935
// declared property getter: - (id)previewImageView;	// 0x5e915
// declared property getter: - (id)currentFrameImage;	// 0x5e6e9
- (id)newPreviewImageData:(id *)data fullScreenImage:(id *)image;	// 0x5e419
// declared property setter: - (void)setTrimmedVideoClip:(id)clip;	// 0x5e3d5
// declared property getter: - (id)trimmedVideoClip;	// 0x5e3c5
// declared property getter: - (id)videoPathAfterTrim;	// 0x5e3b5
// declared property getter: - (double)endTime;	// 0x5e369
// declared property getter: - (double)startTime;	// 0x5e349
- (void)cancelTrim;	// 0x5e181
- (void)trimUsingMode:(int)mode saveACopy:(BOOL)copy;	// 0x5dd49
- (BOOL)wasTrimmedInPlace;	// 0x5dd35
- (BOOL)isTrimming;	// 0x5dd21
- (BOOL)deleteOriginalFileAfterTrim;	// 0x5dd0d
- (void)_remakerDidFinish:(id)_remaker;	// 0x5d039
- (void)_cancelRemaking:(id)remaking;	// 0x5d029
- (void)_stopDeliveringNotifications;	// 0x5cf85
- (void)_startDeliveringNotificationsToMainThread;	// 0x5ced1
- (void)_trimProgressChanged:(id)changed;	// 0x5cdcd
- (void)setProgress:(id)progress;	// 0x5cd8d
- (void)_updateTrimProgress;	// 0x5cd21
- (void)_informDelegateAboutProgressChange:(float)change;	// 0x5cca9
- (void)_resetTrimProgressTimer;	// 0x5cbed
- (void)_removeTrimProgressTimer;	// 0x5cbad
- (void)importerFinishedProcessingTrimmedVideo:(id)video;	// 0x5c981
- (void)_thumbnailsWereRegenerated:(id)regenerated error:(id)error contextInfo:(void *)info;	// 0x5c8fd
- (void)_scrubberAnimationFinished;	// 0x5c811
- (void)movieScrubberEditingAnimationFinished:(id)finished;	// 0x5c7d9
- (void)_reset;	// 0x5c475
- (void)_setPlaying:(BOOL)playing;	// 0x5c44d
// declared property getter: - (BOOL)isEditing;	// 0x5c439
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x5c425
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x5c355
- (void)hideTrimMessage;	// 0x5c341
- (void)showTrimMessage:(id)message withBottomY:(float)bottomY;	// 0x5c1dd
- (void)setMaximumTrimLength:(double)length;	// 0x5c1a9
- (void)_clearImageGenerators;	// 0x5c169
- (void)_destroyGenerators;	// 0x5c0c9
- (void)_serviceImageGenerationRequest;	// 0x5bc09
- (void)_removeThumbnailRequestForRequestID:(id)requestID;	// 0x5bba9
- (void)_addThumbnailRequestForTimestamp:(id)timestamp isPreviewThumbnail:(BOOL)thumbnail;	// 0x5baf5
- (void)movieScrubber:(id)scrubber widthDelta:(float)delta originXDelta:(float)delta3;	// 0x5b911
- (void)movieScrubberDidCancelEditing:(id)movieScrubber;	// 0x5b8c9
- (void)movieScrubberDidBeginEditing:(id)movieScrubber;	// 0x5b86d
- (void)movieScrubberWillBeginEditing:(id)movieScrubber;	// 0x5b825
- (void)movieScrubberDidFinishRequestingThumbnails:(id)movieScrubber;	// 0x5b7f9
- (void)movieScrubberWillBeginRequestingThumbnails:(id)movieScrubber;	// 0x5b7f5
- (void)movieScrubber:(id)scrubber editingEndValueDidChange:(double)editingEndValue;	// 0x5b7cd
- (void)movieScrubber:(id)scrubber editingStartValueDidChange:(double)editingStartValue;	// 0x5b7a5
- (void)movieScrubber:(id)scrubber valueDidChange:(double)value;	// 0x5b77d
- (void)_didScrubToValue:(double)value withHandle:(int)handle;	// 0x5b67d
- (void)movieScrubberDidEndScrubbing:(id)movieScrubber withHandle:(int)handle;	// 0x5b405
- (void)movieScrubberDidBeginScrubbing:(id)movieScrubber withHandle:(int)handle;	// 0x5b1d1
- (void)_resetScrubberUpdateTimer;	// 0x5b155
- (void)_removeScrubberUpdateTimer;	// 0x5b115
- (float)movieScrubberThumbnailAspectRatio:(id)ratio;	// 0x5aea1
- (id)_loadThumbnailsIntoDictionary:(id)dictionary isLandscape:(BOOL)landscape aspectRatio:(float)ratio;	// 0x5ad69
- (void)movieScrubber:(id)scrubber requestThumbnailImageForTimestamp:(id)timestamp;	// 0x5acf1
// declared property getter: - (BOOL)_didSetPhotoData;	// 0x5acb5
- (BOOL)_mediaIsVideo;	// 0x5ac89
// declared property getter: - (BOOL)_mediaIsPlayable;	// 0x5ac2d
// declared property getter: - (id)_mediaTitle;	// 0x5abd5
// declared property getter: - (id)_pathForPrebakedPortraitScrubberThumbnails;	// 0x5aba9
// declared property getter: - (id)_pathForPrebakedLandscapeScrubberThumbnails;	// 0x5ab7d
// declared property getter: - (id)_pathForVideoPreviewFile;	// 0x5ab51
// declared property getter: - (id)_pathForOriginalFile;	// 0x5ab09
// declared property getter: - (id)pathForVideoFile;	// 0x5aac1
- (void)_saveCachedThumbnailsIfNecessary;	// 0x5a7d5
- (id)movieScrubber:(id)scrubber timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;	// 0x5a7d1
- (id)movieScrubber:(id)scrubber evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;	// 0x5a581
- (double)movieScrubberDuration:(id)duration;	// 0x5a569
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)pressed;	// 0x5a519
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)pressed;	// 0x5a4c1
- (BOOL)moviePlayerHeadsetPlayPausePressed:(id)pressed;	// 0x5a3dd
- (void)willResignMoviePlayerDelegate:(id)delegate;	// 0x5a2f1
- (void)didBecomeMoviePlayerDelegate:(id)delegate;	// 0x5a0d1
- (void)_prepareMoviePlayerIfNeeded;	// 0x59d89
- (void)moviePlayerDurationAvailable:(id)available;	// 0x59d19
- (void)moviePlayerReadyToPlay:(id)play;	// 0x59af9
- (void)_savePreviewPosterFrameImage:(CGImageRef)image;	// 0x59945
- (void)_requestPreviewPosterFrameForVideoSize:(CGSize)videoSize;	// 0x598e5
- (void)moviePlayerPlaybackDidEnd:(id)moviePlayerPlayback;	// 0x59585
- (void)moviePlayerPlaybackStateDidChange:(id)moviePlayerPlaybackState;	// 0x5944d
- (void)moviePlayerPlaybackRateDidChange:(id)moviePlayerPlaybackRate;	// 0x593d9
- (void)moviePlayerBufferingStateDidChange:(id)moviePlayerBufferingState;	// 0x59379
- (BOOL)moviePlayerExitRequest:(id)request exitReason:(int)reason;	// 0x59361
- (void)_reloadScrubberThumbnailsIfNeeded;	// 0x592d9
- (void)_setNeedsReloadScrubberThumbnails:(BOOL)thumbnails;	// 0x592b1
- (void)layoutSubviews;	// 0x59285
- (BOOL)_canCreateMetadata;	// 0x59271
- (void)_setScaleModeForSize:(CGSize)size;	// 0x5916d
- (void)_hideTrimMessageView:(BOOL)view;	// 0x59069
- (void)removeVideoOverlay;	// 0x59015
- (void)_hideVideoOverlay:(BOOL)overlay;	// 0x58f15
- (void)_videoOverlayFadeOutDidFinish;	// 0x58ec1
- (void)_showVideoOverlay;	// 0x58b75
// converted property getter: - (id)videoOverlayPlayButton;	// 0x58b65
// converted property setter: - (void)setVideoOverlayBackgroundView:(id)view;	// 0x58b21
// converted property getter: - (id)videoOverlayBackgroundView;	// 0x58b11
- (id)videoScrubber;	// 0x58b01
- (void)_createScrubberIfNeeded;	// 0x58685
// declared property getter: - (float)scrubberWidth;	// 0x58631
- (void)_updateScrubberFrame;	// 0x584bd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x58381
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x5833d
- (id)description;	// 0x582cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x58211
// declared property getter: - (id)delegate;	// 0x58201
- (void)dealloc;	// 0x57f19
- (void)_resetMoviePlayer;	// 0x57e61
- (id)_initWithFrame:(CGRect)frame videoCameraImage:(id)image orientation:(int)orientation;	// 0x57b69
- (id)initWithFrame:(CGRect)frame videoCameraImage:(id)image orientation:(int)orientation;	// 0x57ac1
@end
