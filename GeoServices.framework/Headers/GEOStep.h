/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOTransitStop, NSString;

@interface GEOStep : PBCodable {
	NSString *_instructions;	// 4 = 0x4
	int _pointIndex;	// 8 = 0x8
	BOOL _hasRoadClass;	// 12 = 0xc
	int _roadClass;	// 16 = 0x10
	BOOL _hasDistance;	// 20 = 0x14
	int _distance;	// 24 = 0x18
	BOOL _hasExpectedTime;	// 28 = 0x1c
	int _expectedTime;	// 32 = 0x20
	BOOL _hasType;	// 36 = 0x24
	int _type;	// 40 = 0x28
	NSString *_maneuverIconName;	// 44 = 0x2c
	NSString *_maneuverPIPIconName;	// 48 = 0x30
	GEOTransitStop *_transitStop;	// 52 = 0x34
	NSString *_notice;	// 56 = 0x38
}
@property(retain, nonatomic) NSString *notice;	// G=0x18be9; S=0x18bf9; @synthesize=_notice
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x1830d; 
@property(retain, nonatomic) GEOTransitStop *transitStop;	// G=0x18bb5; S=0x18bc5; @synthesize=_transitStop
@property(readonly, assign, nonatomic) BOOL hasTransitStop;	// G=0x182f5; 
@property(retain, nonatomic) NSString *maneuverPIPIconName;	// G=0x18b81; S=0x18b91; @synthesize=_maneuverPIPIconName
@property(readonly, assign, nonatomic) BOOL hasManeuverPIPIconName;	// G=0x182dd; 
@property(retain, nonatomic) NSString *maneuverIconName;	// G=0x18b4d; S=0x18b5d; @synthesize=_maneuverIconName
@property(readonly, assign, nonatomic) BOOL hasManeuverIconName;	// G=0x182c5; 
@property(assign, nonatomic) int type;	// G=0x18b3d; S=0x182a1; @synthesize=_type
@property(assign, nonatomic) BOOL hasType;	// G=0x18b1d; S=0x18b2d; @synthesize=_hasType
@property(assign, nonatomic) int expectedTime;	// G=0x18b0d; S=0x1827d; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x18aed; S=0x18afd; @synthesize=_hasExpectedTime
@property(assign, nonatomic) int distance;	// G=0x18add; S=0x18259; @synthesize=_distance
@property(assign, nonatomic) BOOL hasDistance;	// G=0x18abd; S=0x18acd; @synthesize=_hasDistance
@property(assign, nonatomic) int roadClass;	// G=0x18aad; S=0x18235; @synthesize=_roadClass
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x18a8d; S=0x18a9d; @synthesize=_hasRoadClass
@property(assign, nonatomic) int pointIndex;	// G=0x18a6d; S=0x18a7d; @synthesize=_pointIndex
@property(retain, nonatomic) NSString *instructions;	// G=0x18a39; S=0x18a49; @synthesize=_instructions
// declared property setter: - (void)setNotice:(id)notice;	// 0x18bf9
// declared property getter: - (id)notice;	// 0x18be9
// declared property setter: - (void)setTransitStop:(id)stop;	// 0x18bc5
// declared property getter: - (id)transitStop;	// 0x18bb5
// declared property setter: - (void)setManeuverPIPIconName:(id)name;	// 0x18b91
// declared property getter: - (id)maneuverPIPIconName;	// 0x18b81
// declared property setter: - (void)setManeuverIconName:(id)name;	// 0x18b5d
// declared property getter: - (id)maneuverIconName;	// 0x18b4d
// declared property getter: - (int)type;	// 0x18b3d
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x18b2d
// declared property getter: - (BOOL)hasType;	// 0x18b1d
// declared property getter: - (int)expectedTime;	// 0x18b0d
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x18afd
// declared property getter: - (BOOL)hasExpectedTime;	// 0x18aed
// declared property getter: - (int)distance;	// 0x18add
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x18acd
// declared property getter: - (BOOL)hasDistance;	// 0x18abd
// declared property getter: - (int)roadClass;	// 0x18aad
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x18a9d
// declared property getter: - (BOOL)hasRoadClass;	// 0x18a8d
// declared property setter: - (void)setPointIndex:(int)index;	// 0x18a7d
// declared property getter: - (int)pointIndex;	// 0x18a6d
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x18a49
// declared property getter: - (id)instructions;	// 0x18a39
- (void)writeTo:(id)to;	// 0x18859
- (BOOL)readFrom:(id)from;	// 0x185d1
- (id)dictionaryRepresentation;	// 0x18395
- (id)description;	// 0x18325
// declared property getter: - (BOOL)hasNotice;	// 0x1830d
// declared property getter: - (BOOL)hasTransitStop;	// 0x182f5
// declared property getter: - (BOOL)hasManeuverPIPIconName;	// 0x182dd
// declared property getter: - (BOOL)hasManeuverIconName;	// 0x182c5
// declared property setter: - (void)setType:(int)type;	// 0x182a1
// declared property setter: - (void)setExpectedTime:(int)time;	// 0x1827d
// declared property setter: - (void)setDistance:(int)distance;	// 0x18259
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x18235
- (void)dealloc;	// 0x181a1
@end
