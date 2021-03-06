// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import CoreLocation;
@import Foundation;
@import SceneKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxSceneKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UIImage;

/// <code>MapboxImageAPI</code> provides a convenience wrapper for fetching tiles through the Mapbox web APIs.
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("MapboxImageAPI")
@interface MBImageAPI : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Used to fetch a stitched together set of tiles from the tileset API. The tileset API can be used to fetch images representing data Mapbox datasets, such
/// as streets-v10, terrain-rgb, and tilesets a user has uploaded through Mapbox studio.
/// See: https://www.mapbox.com/api-documentation/#retrieve-tiles
/// Expected formats are one of <code>TileImageFormatPNG</code>, <code>TileImageFormatJPG100</code>, <code>TileImageFormatJPG90</code>, <code>TileImageFormatJPG80</code>, <code>TileImageFormatJPG70</code>.
/// Returns a UUID representing the task managing the fetching and stitching together of the tile images. Used for cancellation if needed.
/// <ul>
///   <li>
///   </li>
/// </ul>
- (NSUUID * _Nonnull)imageForTileset:(NSString * _Nonnull)tileset zoomLevel:(NSInteger)zoom minLat:(CLLocationDegrees)minLat maxLat:(CLLocationDegrees)maxLat minLon:(CLLocationDegrees)minLon maxLon:(CLLocationDegrees)maxLon format:(NSString * _Nonnull)format progress:(void (^ _Nullable)(float, NSInteger))progress completion:(void (^ _Nonnull)(UIImage * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// Used to fetch a stitched together set of tiles from the style API. The style API can be used to fetch images representing user-created styles
/// via Mapbox Studio. Styles are referenced by <code>username.id</code>.
/// See: https://www.mapbox.com/api-documentation/#static
/// Returns a UUID representing the task managing the fetching and stitching together of the tile images. Used for cancellation if needed.
/// <ul>
///   <li>
///   </li>
/// </ul>
- (NSUUID * _Nonnull)imageForStyle:(NSString * _Nonnull)style zoomLevel:(NSInteger)zoom minLat:(CLLocationDegrees)minLat maxLat:(CLLocationDegrees)maxLat minLon:(CLLocationDegrees)minLon maxLon:(CLLocationDegrees)maxLon progress:(void (^ _Nullable)(float, NSInteger))progress completion:(void (^ _Nonnull)(UIImage * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
@end



@class NSCoder;
@class CLLocation;

/// The <code>TerrainNode</code> object represents the easiest way to generate terrain in SceneKit (if you prefer a custom solution, see the methods on <code>MapboxImageAPI</code>
/// to help get you started with a custom solution using the base data.
/// <ul>
///   <li>
///   </li>
/// </ul>
SWIFT_CLASS_NAMED("TerrainNode")
@interface MBTerrainNode : SCNNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMinLat:(CLLocationDegrees)minLat maxLat:(CLLocationDegrees)maxLat minLon:(CLLocationDegrees)minLon maxLon:(CLLocationDegrees)maxLon OBJC_DESIGNATED_INITIALIZER;
/// Will return the local position relative to the terrain node for a given lat/lon/alt.
/// Note: the returned position should be converted from the terrain local space to the world space (or another node’s corrdinate space, as needed).
/// <ul>
///   <li>
///   </li>
/// </ul>
- (SCNVector3)positionForLocation:(CLLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
/// Begins the fetch of terrain-rgb data throught the mapbox API, and then updates the geometry to repersent a to-scale model of the terrain at this location.
/// <code>minWallHeight</code>: Padding amount (in meters) of the walls beyond the returned altitude minumum for the region.
/// <code>enableDynamicShadows</code>: Depending on your applied texture / style, you may want to enable dynamic shadowing based on the contour of the terrain for interaction with Scene Kit lighting.
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)fetchTerrainHeightsWithMinWallHeight:(CLLocationDistance)minWallHeight enableDynamicShadows:(BOOL)shadows progress:(void (^ _Nullable)(float, NSInteger))progress completion:(void (^ _Nonnull)(void))completion;
/// Fetches an image representing a style (either mapbox or user created) to cover this terrain node. It is up to the caller to apply it as a material component, but this gives the
/// caller the opportunity to modify the image or apply it as something other then default diffuse contents.
/// For the simplist usage, you’ll want to apply it as the diffuse contents in position 4 (the top): <code>myRerrainNode.geometry?.materials[4].diffuse.contents = image</code>.
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)fetchTerrainTexture:(NSString * _Nonnull)style zoom:(NSInteger)zoom progress:(void (^ _Nullable)(float, NSInteger))progress completion:(void (^ _Nonnull)(UIImage * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
