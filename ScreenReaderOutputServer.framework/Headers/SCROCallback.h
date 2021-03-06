/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <ScreenReaderOutputServer/NSCoding.h>
#import <ScreenReaderOutputServer/XXUnknownSuperclass.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __SCROCallback__
#define __SCROCallback__ 1
@interface SCROCallback : XXUnknownSuperclass <NSCoding> {
	int _key;	// 4 = 0x4
	id _object;	// 8 = 0x8
	BOOL _isAtomic;	// 12 = 0xc
}
@property(assign) BOOL isAtomic;	// G=0x14be5; S=0x14bd5; converted property
@property(readonly, assign) int key;	// G=0xe85; converted property
@property(readonly, retain) id object;	// G=0xe95; converted property
- (id)initWithKey:(int)key object:(id)object;	// 0xe01
- (id)initWithCoder:(id)coder;	// 0x2e31
- (void)encodeWithCoder:(id)coder;	// 0x14bf5
- (void)dealloc;	// 0xf59
// converted property getter: - (int)key;	// 0xe85
// converted property getter: - (id)object;	// 0xe95
// converted property setter: - (void)setIsAtomic:(BOOL)atomic;	// 0x14bd5
// converted property getter: - (BOOL)isAtomic;	// 0x14be5
- (void)postToHandler:(id)handler;	// 0xe69
@end
#endif
