/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableString, WDCharacterProperties, WDOfficeArt, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : XXUnknownSuperclass {
@private
	WDParagraphProperties *mParagraphProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	WDOfficeArt *mImage;	// 12 = 0xc
	int mStartNumber;	// 16 = 0x10
	int mNumberFormat;	// 20 = 0x14
	BOOL mRestartNumbering;	// 24 = 0x18
	BOOL mLegal;	// 25 = 0x19
	int mSuffix;	// 28 = 0x1c
	NSMutableString *mText;	// 32 = 0x20
	BOOL mLegacy;	// 36 = 0x24
	int mLegacySpace;	// 40 = 0x28
	int mLegacyIndent;	// 44 = 0x2c
	int mJustification;	// 48 = 0x30
}
@property(assign) long startNumber;	// G=0xa1219; S=0x13a60d; converted property
@property(assign) int numberFormat;	// G=0xa1765; S=0x13a61d; converted property
@property(retain) id image;	// G=0x28d7f5; S=0x15a44d; converted property
@property(assign) BOOL restartNumbering;	// G=0x28d805; S=0x13a62d; converted property
@property(assign) BOOL legal;	// G=0x28d819; S=0x13a63d; converted property
@property(assign) int suffix;	// G=0x28d82d; S=0x13a64d; converted property
@property(retain) id text;	// G=0xa17f1; S=0x13a65d; converted property
@property(assign) BOOL legacy;	// G=0x28d845; S=0x13a681; converted property
@property(assign) long legacySpace;	// G=0x28d855; S=0x13a691; converted property
@property(assign) long legacyIndent;	// G=0x28d865; S=0x13a6a1; converted property
@property(assign) int justification;	// G=0x28d875; S=0x13a6b1; converted property
- (id)initWithDocument:(id)document;	// 0x13a0a9
- (void)dealloc;	// 0xa28cd
// converted property getter: - (long)startNumber;	// 0xa1219
// converted property setter: - (void)setStartNumber:(long)number;	// 0x13a60d
- (BOOL)startNumberOverridden;	// 0x28d7ed
// converted property getter: - (int)numberFormat;	// 0xa1765
// converted property setter: - (void)setNumberFormat:(int)format;	// 0x13a61d
- (BOOL)numberFormatOverridden;	// 0x28d7f1
- (BOOL)imageBullet;	// 0x28d8ad
- (BOOL)imageBulletOverridden;	// 0x28d889
// converted property getter: - (id)image;	// 0x28d7f5
// converted property setter: - (void)setImage:(id)image;	// 0x15a44d
// converted property getter: - (BOOL)restartNumbering;	// 0x28d805
// converted property setter: - (void)setRestartNumbering:(BOOL)numbering;	// 0x13a62d
- (BOOL)restartNumberingOverridden;	// 0x28d815
// converted property getter: - (BOOL)legal;	// 0x28d819
// converted property setter: - (void)setLegal:(BOOL)legal;	// 0x13a63d
- (BOOL)legalOverridden;	// 0x28d829
// converted property getter: - (int)suffix;	// 0x28d82d
// converted property setter: - (void)setSuffix:(int)suffix;	// 0x13a64d
- (BOOL)suffixOverridden;	// 0x28d83d
// converted property getter: - (id)text;	// 0xa17f1
// converted property setter: - (void)setText:(id)text;	// 0x13a65d
- (BOOL)textOverridden;	// 0x28d841
// converted property getter: - (BOOL)legacy;	// 0x28d845
// converted property setter: - (void)setLegacy:(BOOL)legacy;	// 0x13a681
// converted property getter: - (long)legacySpace;	// 0x28d855
// converted property setter: - (void)setLegacySpace:(long)space;	// 0x13a691
// converted property getter: - (long)legacyIndent;	// 0x28d865
// converted property setter: - (void)setLegacyIndent:(long)indent;	// 0x13a6a1
// converted property getter: - (int)justification;	// 0x28d875
// converted property setter: - (void)setJustification:(int)justification;	// 0x13a6b1
- (BOOL)justificationOverridden;	// 0x28d885
- (id)paragraphProperties;	// 0xa12ad
- (id)characterProperties;	// 0xa1f25
@end