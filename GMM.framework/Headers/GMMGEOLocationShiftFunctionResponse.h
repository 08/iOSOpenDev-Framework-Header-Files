/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/GMM-Structs.h>
#import <GMM/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface GMMGEOLocationShiftFunctionResponse : XXUnknownSuperclass {
	int _originalLatitude;	// 44 = 0x2c
	int _originalLongitude;	// 48 = 0x30
	int _modelSqHalfLength;	// 52 = 0x34
	int _cacheSqHalfLength;	// 56 = 0x38
	long long _latCoefficients[3];	// 60 = 0x3c
	long long _lngCoefficients[3];	// 84 = 0x54
}
@property(assign) XXStruct_UNJ7RC originalCoordinate;	// G=0x3ecdd; S=0x3ec65; converted property
- (BOOL)needsNewFunctionForCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3ef79
- (BOOL)wantsNewFunctionForCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3eed9
- (XXStruct_UNJ7RC)shiftedCoordinateForCoordinate:(XXStruct_UNJ7RC)coordinate accuracy:(double *)accuracy;	// 0x3ed65
// converted property getter: - (XXStruct_UNJ7RC)originalCoordinate;	// 0x3ecdd
// converted property setter: - (void)setOriginalCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3ec65
- (id)initWithGMMLocationShiftResponse:(id)gmmlocationShiftResponse;	// 0x3eab1
@end
