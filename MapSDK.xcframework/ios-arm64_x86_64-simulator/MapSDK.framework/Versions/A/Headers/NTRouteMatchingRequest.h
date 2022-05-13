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
#import "NTVariant.h"
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
@class NTMapPosVector;

/**
 * A class that defines required attributes for route matching.
 */
__attribute__ ((visibility("default"))) @interface NTRouteMatchingRequest : NSObject
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
 * Constructs a new RouteMatchingRequest instance from projection, measured points and accuracy.
 * @param projection The projection of the points.
 * @param points The list of points to match. Must contains at least 1 element.
 * @param accuracy Accuracy of the points in meters.
 */
-(id)initWithProjection: (NTProjection*)projection points: (NTMapPosVector*)points accuracy: (float)accuracy;
/**
 * Returns the projection of the points in the request.
 * @return The projection of the request.
 */
-(NTProjection*)getProjection;
/**
 * Returns the measured points of the request.
 * @return The measured points of the request.
 */
-(NTMapPosVector*)getPoints;
/**
 * Returns the accuracy of the points in the request.
 * @return The accuracy of the points in the request.
 */
-(float)getAccuracy;
/**
 * Returns the parameter value for the given routing point.
 * @param index The routing point index.
 * @param param The name of the parameter.
 * @return The value of the specified parameter of the given routing point. If the parameter does not exist, empty variant is returned.
 */
-(NTVariant*)getPointParameter: (int)index param: (NSString*)param;
/**
 * Sets the parameter value for the given routing point.
 * This is currently supported by Valhalla routing engine and can be used to specify initial or final heading, for example.
 * @param index The routing point index.
 * @param param The name of the parameter to set.
 * @param value The new value for the parameter of the given routing point.
 */
-(void)setPointParameter: (int)index param: (NSString*)param value: (NTVariant*)value;
/**
 * Returns the custom parameter value of the request.
 * @param param The name of the parameter to return.
 * @return The value of the parameter. If the parameter does not exist, empty variant is returned.
 */
-(NTVariant*)getCustomParameter: (NSString*)param;
/**
 * Sets a custom parameter for the the request.
 * @param param The name of the parameter. For example, "trace_options.search_radius".
 * @param value The new value for the parameter.
 */
-(void)setCustomParameter: (NSString*)param value: (NTVariant*)value;
/**
 * Creates a string representation of this request object, useful for logging.
 * @return The string representation of this request object.
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
