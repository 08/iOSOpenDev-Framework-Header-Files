/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/XXUnknownSuperclass.h>
#import <Conference/Conference-Structs.h>

@class UILabel, UIImageView;

@interface CNFHUDButtonContentView : XXUnknownSuperclass {
	UIImageView *_imageView;	// 48 = 0x30
	UILabel *_titleLabel;	// 52 = 0x34
	int _orientation;	// 56 = 0x38
}
@property(retain, nonatomic) UIImageView *imageView;	// G=0x92ad; S=0x1e7b1; @synthesize=_imageView
@property(retain, nonatomic) UILabel *titleLabel;	// G=0x929d; S=0x1e7d9; @synthesize=_titleLabel
@property(assign, nonatomic) int orientation;	// G=0x1e7a1; S=0x9151; @synthesize=_orientation
- (id)initWithTitle:(id)title image:(id)image;	// 0x8329
- (void)dealloc;	// 0x10da5
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x9151
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1e801
- (void)layoutSubviews;	// 0x9b61
// declared property getter: - (int)orientation;	// 0x1e7a1
// declared property getter: - (id)titleLabel;	// 0x929d
// declared property setter: - (void)setTitleLabel:(id)label;	// 0x1e7d9
// declared property getter: - (id)imageView;	// 0x92ad
// declared property setter: - (void)setImageView:(id)view;	// 0x1e7b1
@end
