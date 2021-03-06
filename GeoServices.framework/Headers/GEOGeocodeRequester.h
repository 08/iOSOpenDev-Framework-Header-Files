/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : XXUnknownSuperclass {
	NSMapTable *_pendingGeocodes;	// 4 = 0x4
	NSLock *_pendingGeocodesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x2a5a5
+ (id)sharedGeocodeRequester;	// 0x2979d
- (void)registerProvider:(Class)provider;	// 0x2a565
- (void)cancelGeocode:(id)geocode;	// 0x2a4a9
- (void)reverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x29e71
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x29a59
- (void)dealloc;	// 0x299e5
- (id)init;	// 0x2990d
@end
