/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
#import "NTMapPos.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTProjection.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTRouteMatchingPoint.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTRouteMatchingEdge.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTMapPosVector;

/**
 * A class that defines list of matching points from road network.
 */
__attribute__ ((visibility("default"))) @interface NTRouteMatchingResult : NSObject
{
  /** @internal:nodoc: */
  void *swigCPtr;
  /** @internal:nodoc: */
  BOOL swigCMemOwn;
}
/** @internal:nodoc: */
-(void*)getCptr;
/** @internal:nodoc: */
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**  
 * Checks if this object is equal to the specified object.
 * @param object The reference object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;

/**
 * Constructs a new RouteMatchingResult instance from projection and matched points.
 * @param projection The projection of the routing result (same as the request).
 * @param matchingPoints The matched points corresponding to the requested points snapped to road network.
 * @param matchingEdges The matched edges that are referenced through matching points.
 */
-(id)initWithProjection: (NTProjection*)projection matchingPoints: (NTRouteMatchingPointVector*)matchingPoints matchingEdges: (NTRouteMatchingEdgeVector*)matchingEdges;
/**
 * Returns the projection of the points in the result.
 * @return The projection of the result.
 */
-(NTProjection*)getProjection;
/**
 * Returns the point list of the result. The list contains all the points from the request snapped to the road network.
 * @return The point list of the result.
 */
-(NTMapPosVector*)getPoints;
/**
 * Returns the list with details of the matched edges.
 * @return The list with details of the matched edges.
 */
-(NTRouteMatchingEdgeVector*)getMatchingEdges;
/**
 * Returns the list with details of the matched points.
 * @return The list with details of the matched points.
 */
-(NTRouteMatchingPointVector*)getMatchingPoints;
/**
 * Creates a string representation of this result object, useful for logging.
 * @return The string representation of this result object.
 */
-(NSString*)description;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
