/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTrafficTile.h>
#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable {
	NSData *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x27d81; S=0x27d91; @synthesize=_trafficSegments
@property(retain, nonatomic) NSData *vertices;	// G=0x27d4d; S=0x27d5d; @synthesize=_vertices
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x27849; 
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x27d91
// declared property getter: - (id)trafficSegments;	// 0x27d81
// declared property setter: - (void)setVertices:(id)vertices;	// 0x27d5d
// declared property getter: - (id)vertices;	// 0x27d4d
- (void)writeTo:(id)to;	// 0x27c55
- (BOOL)readFrom:(id)from;	// 0x27b0d
- (id)dictionaryRepresentation;	// 0x27975
- (id)description;	// 0x27905
- (id)trafficSegmentAtIndex:(unsigned)index;	// 0x278e5
- (unsigned)trafficSegmentsCount;	// 0x278c5
- (void)addTrafficSegment:(id)segment;	// 0x27861
// declared property getter: - (BOOL)hasVertices;	// 0x27849
- (void)dealloc;	// 0x277f1
@end

@interface GEOTrafficTile (GEOVoltaireRasterTileTrafficData)
- (XXStruct_K5nmsA *)createUnpackedVerticesWithGutterSize:(int)gutterSize;	// 0x27f89
@end
