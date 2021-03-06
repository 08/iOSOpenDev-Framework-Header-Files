/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableViewController.h>
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUDownloadsChildViewController.h>

@class SUTableDataSource, NSArray;

@interface SUDownloadsTableViewController : SUTableViewController <SUDownloadsChildViewController> {
}
@property(retain, nonatomic) NSArray *scriptButtons;	// G=0xd6769; S=0xd676d; 
@property(retain, nonatomic) SUTableDataSource *dataSource;	// @dynamic
- (void)_updateFooterView;	// 0xd6945
- (void)_reloadDataAnimated:(BOOL)animated;	// 0xd6905
- (id)_downloadsViewController;	// 0xd68b1
- (void)_accountsChangedNotification:(id)notification;	// 0xd68a1
- (id)visibleDownloadCellForDownload:(id)download;	// 0xd6771
// declared property setter: - (void)setScriptButtons:(id)buttons;	// 0xd676d
// declared property getter: - (id)scriptButtons;	// 0xd6769
- (void)reloadDownloadCellForDownload:(id)download;	// 0xd66ed
- (void)startPreOrderDownloadAction:(id)action;	// 0xd65b5
- (void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;	// 0xd6581
- (void)reloadData;	// 0xd656d
- (void)loadView;	// 0xd64f5
- (BOOL)handleSelectionForIndexPath:(id)indexPath tapCount:(int)count;	// 0xd6405
- (BOOL)deleteRowAtIndexPath:(id)indexPath;	// 0xd6361
- (void)dealloc;	// 0xd62f1
- (id)init;	// 0xd625d
@end
