/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */


#import <Symbolication/Symbolication-Structs.h>

@class VMUClassInfoMap, VMUNonOverlappingRangeArray, NSMutableSet, NSHashTable;

@interface VMUObjectIdentifier : NSObject {
	unsigned _task;	// 4 = 0x4
	CSTypeRef _symbolicator;	// 8 = 0x8
	id _memoryReader;	// 16 = 0x10
	VMUClassInfoMap *_isaToClassInfo;	// 20 = 0x14
	VMUClassInfoMap *_cfTypeIDtoClassInfo;	// 24 = 0x18
	NSHashTable *_objcRuntimeMallocBlocksHash;	// 28 = 0x1c
	NSMutableSet *_objcRuntimeMallocBlocks;	// 32 = 0x20
	unsigned _cfTypeCount;	// 36 = 0x24
	unsigned _objcClassCount;	// 40 = 0x28
	unsigned _cPlusPlusClassCount;	// 44 = 0x2c
	NSHashTable *_invalidPointers;	// 48 = 0x30
	VMUNonOverlappingRangeArray *_targetProcessVMranges;	// 52 = 0x34
	int peeksAtRemoteObjectIsa;	// 56 = 0x38
}
@property(readonly, retain) NSHashTable *objcRuntimeMallocBlocksHash;	// G=0x35eac; converted property
@property(readonly, retain) NSMutableSet *objcRuntimeMallocBlocks;	// G=0x36ebc; converted property
- (id)initWithTask:(unsigned)task;	// 0x36024
- (id)initWithTask:(unsigned)task symbolicator:(id)symbolicator;	// 0x35f1c
- (void)dealloc;	// 0x36fec
- (unsigned)CFTypeCount;	// 0x35e70
- (unsigned)ObjCclassCount;	// 0x35e84
- (unsigned)CPlusPlusClassCount;	// 0x35e98
// converted property getter: - (id)objcRuntimeMallocBlocksHash;	// 0x35eac
// converted property getter: - (id)objcRuntimeMallocBlocks;	// 0x36ebc
- (BOOL)isValidRemotePointer:(unsigned long long)pointer;	// 0x36de4
- (id)classInfoForIsaPointer:(unsigned)isaPointer;	// 0x36aac
- (id)classInfoForCFType:(CFRuntimeBase *)cftype;	// 0x36a3c
- (id)classInfoForObject:(unsigned long long)object;	// 0x35f2c
- (id)_classInfoForObject:(unsigned long long)object;	// 0x368e8
- (id)nullClassInfo;	// 0x35f3c
- (id)classInfoForObjectWithRange:(VMURange)range;	// 0x35fcc
- (void)findCFTypes;	// 0x3664c
- (void)findObjCclasses;	// 0x363c0
- (VMURange)vmRegionRangeForAddress:(unsigned long long)address;	// 0x3625c
@end
