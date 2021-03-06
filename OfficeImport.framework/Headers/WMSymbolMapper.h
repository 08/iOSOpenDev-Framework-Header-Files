/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WMSymbolMapper : CMMapper {
@private
	unsigned short mCharacter;	// 8 = 0x8
	NSString *mFontName;	// 12 = 0xc
}
+ (unsigned short)mapWindingsCharacter:(unsigned short)character;	// 0x1bf331
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)character;	// 0x2f0ddd
- (id)initWithWDSymbol:(id)wdsymbol parent:(id)parent;	// 0x1b8b49
- (void)mapAt:(id)at withState:(id)state;	// 0x1b8bf1
@end
