/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>


@interface PLPhotoStreamsHelper : XXUnknownSuperclass {
	BOOL _appHasPolledOnceThisForegroundSession;	// 4 = 0x4
}
+ (BOOL)writeBreadcrumbContent:(id)content forHashString:(id)hashString;	// 0x264b5
+ (id)publishBreadcrumbsPath;	// 0x263d9
+ (id)photoStreamAccount;	// 0x25d59
+ (BOOL)photoStreamsEnabled;	// 0x25d09
+ (id)sharedPhotoStreamsHelper;	// 0x25cbd
- (void)resume_mstreamd:(id)mstreamd;	// 0x28035
- (id)pause_mstreamd;	// 0x27f89
- (void)resetServerState;	// 0x27ea5
- (void)assetsWithNames:(id)names willBeDeletedForStreamID:(id)streamID;	// 0x27cbd
- (void)assetWithFileHash:(id)fileHash metadata:(id)metadata wasSavedToPath:(id)path;	// 0x27b31
- (id)pathToSavedMetadataForAssetHash:(id)assetHash streamID:(id)anId createIntermediateDirs:(BOOL)dirs;	// 0x27a39
- (void)resetMstreamdStateForPersonID:(id)personID;	// 0x279d1
- (id)derivedAssetForMasterAsset:(id)masterAsset;	// 0x272a5
- (CGSize)_derivedAssetSizeForMasterSizeWidth:(float)masterSizeWidth height:(float)height;	// 0x27231
- (id)temporaryPathForRecentlyUploadedAsset:(id)recentlyUploadedAsset;	// 0x271ad
- (float)derivedAssetDimensionLimit;	// 0x271a5
- (int)friendsLimit;	// 0x27101
- (int)imageLimitForFriendStream;	// 0x2705d
- (int)imageLimitForOwnStream;	// 0x26fb5
- (id)imageLimitsByAssetType;	// 0x26df1
- (int)_serverIntegerLimitForKey:(id)key debugDefaultKey:(id)key2;	// 0x26d31
- (BOOL)shouldUploadVideos;	// 0x26d2d
- (BOOL)shouldPublishScreenShots;	// 0x26c41
- (id)photoStreamAlbumTitleForPersonID:(id)personID;	// 0x26c29
- (id)_photoStreamAlbumNameWithFirstName:(id)firstName lastName:(id)name email:(id)email;	// 0x26ba5
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;	// 0x26b71
- (void)pollForNewSubscriptionContent;	// 0x26a79
- (BOOL)enqueueAssetForPSPublishing:(id)pspublishing assetHash:(id)hash fullPath:(id)path fileSize:(id)size type:(id)type reenqueueCount:(id)count;	// 0x265b5
- (BOOL)isValidUploadAsset:(id)asset type:(id)type fileSize:(id)size;	// 0x264c9
- (void)writeDidPublishBreadcrumbforHash:(id)write imagePath:(id)path;	// 0x264c5
- (void)writeDidEnqueueBreadcrumbForHash:(id)write imagePath:(id)path;	// 0x264c1
- (void)writeWillEnqueueBreadcrumbForHash:(id)write imagePath:(id)path;	// 0x264bd
- (BOOL)removeBreadcrumbsForHashString:(id)hashString;	// 0x264b9
- (id)psHashAsString:(id)string;	// 0x26321
- (id)psHashForData:(id)data;	// 0x26259
- (id)photoStreamsPublishStreamID;	// 0x261ed
- (void)_appDidEnterBackground:(id)_app;	// 0x26165
- (void)dealloc;	// 0x260fd
- (id)init;	// 0x25f2d
@end
