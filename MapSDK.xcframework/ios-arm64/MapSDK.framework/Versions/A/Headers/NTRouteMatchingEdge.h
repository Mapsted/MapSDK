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
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTStringVariantMap;

/**
 * A class that defines a route matching result edge.
 */
__attribute__ ((visibility("default"))) @interface NTRouteMatchingEdge : NSObject
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
 * Constructs a new RouteMatchingEdge instance with no attributes.
 */
-(id)init;
/**
 * Constructs a new RouteMatchingEdge from an attributes map.
 * @param attributes The attributes map.
 */
-(id)initWithAttributes: (NTStringVariantMap*)attributes;
/**
 * Returns true if edge contains the specified attribute.
 * @param name The name of the attribute to check.
 * @return True if the specified attribute exists in the edge.
 */
-(BOOL)containsAttribute: (NSString*)name;
/**
 * Returns the value of the specified attribute.
 * @param name The name of the attribute to return.
 * @return The attribute value, if attribute exists. Null variant is returned otherwise.
 */
-(NTVariant*)getAttribute: (NSString*)name;
/**
 * Creates a string representation of this object, useful for logging.
 * @return The string representation of this object.
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
#import "NTVariant.h"
#ifdef __cplusplus
extern "C" {
#endif
@class NTStringVariantMap;

__attribute__ ((visibility("default"))) @interface NTRouteMatchingEdgeVector : NSObject
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
-(id)init;
-(unsigned int)size;
-(unsigned int)capacity;
-(void)reserve: (unsigned int)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTRouteMatchingEdge*)x;
-(NTRouteMatchingEdge*)get: (int)i;
-(void)set: (int)i val: (NTRouteMatchingEdge*)val;
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
