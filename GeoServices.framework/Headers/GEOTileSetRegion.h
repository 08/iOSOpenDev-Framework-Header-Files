/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileSetRegion.h>
#import <ProtocolBuffer/PBCodable.h>


@interface GEOTileSetRegion : PBCodable {
	unsigned _minX;	// 4 = 0x4
	unsigned _minY;	// 8 = 0x8
	unsigned _maxX;	// 12 = 0xc
	unsigned _maxY;	// 16 = 0x10
	unsigned _minZ;	// 20 = 0x14
	unsigned _maxZ;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned maxZ;	// G=0x22f45; S=0x22f55; @synthesize=_maxZ
@property(assign, nonatomic) unsigned minZ;	// G=0x22f25; S=0x22f35; @synthesize=_minZ
@property(assign, nonatomic) unsigned maxY;	// G=0x22f05; S=0x22f15; @synthesize=_maxY
@property(assign, nonatomic) unsigned maxX;	// G=0x22ee5; S=0x22ef5; @synthesize=_maxX
@property(assign, nonatomic) unsigned minY;	// G=0x22ec5; S=0x22ed5; @synthesize=_minY
@property(assign, nonatomic) unsigned minX;	// G=0x22ea5; S=0x22eb5; @synthesize=_minX
// declared property setter: - (void)setMaxZ:(unsigned)z;	// 0x22f55
// declared property getter: - (unsigned)maxZ;	// 0x22f45
// declared property setter: - (void)setMinZ:(unsigned)z;	// 0x22f35
// declared property getter: - (unsigned)minZ;	// 0x22f25
// declared property setter: - (void)setMaxY:(unsigned)y;	// 0x22f15
// declared property getter: - (unsigned)maxY;	// 0x22f05
// declared property setter: - (void)setMaxX:(unsigned)x;	// 0x22ef5
// declared property getter: - (unsigned)maxX;	// 0x22ee5
// declared property setter: - (void)setMinY:(unsigned)y;	// 0x22ed5
// declared property getter: - (unsigned)minY;	// 0x22ec5
// declared property setter: - (void)setMinX:(unsigned)x;	// 0x22eb5
// declared property getter: - (unsigned)minX;	// 0x22ea5
- (void)writeTo:(id)to;	// 0x22dfd
- (BOOL)readFrom:(id)from;	// 0x22ca5
- (id)dictionaryRepresentation;	// 0x22b41
- (id)description;	// 0x22ad1
- (void)dealloc;	// 0x22aa5
@end

@interface GEOTileSetRegion (GEOVoltaireTileSetProfileExtras)
- (BOOL)containsTileKey:(const GEOTileKey *)key enforceZoomLevel:(BOOL)level;	// 0x261a5
@end