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
#import "NTScreenPos.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * A container class that defines a bounding box on the screen using minimum and maximum screen positions.
 */
__attribute__ ((visibility("default"))) @interface NTScreenBounds : NSObject
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
 * Constructs an empty ScreenBounds object. The coordinates of the minimum position will be
 * set to positive infinity and the coordinates of the maximum position will be
 * set to negative infinity.
 */
-(id)init;
/**
 * Constructs a ScreenBounds object from a minimum and maximum position. If a coordinate of the
 * minimum positon is larger than the same coordinate of the maximum position then those
 * coordinates will be swapped.
 * @param min The minimum position.
 * @param max The maximum position.
 */
-(id)initWithMin: (NTScreenPos*)min max: (NTScreenPos*)max;
/**
 * Calculates the center screen position of this screen envelope object.
 * @return The center postion if this screen envelope object.
 */
-(NTScreenPos*)getCenter;
/**
 * Returns the width of the bounds object.
 * @return The width on the bounds object.
 */
-(float)getWidth;
/**
 * Returns the height of the bounds object.
 * @return The height on the bounds object.
 */
-(float)getHeight;
/**
 * Returns the minimum screen position.
 * @return The minimum screen position.
 */
-(NTScreenPos*)getMin;
/**
 * Returns the maximum screen position of this screen envelope object.
 * @return The maximum screen position of this screen envelope object.
 */
-(NTScreenPos*)getMax;
/**
 * Tests whether this screen bounds object contains a screen position.
 * @param pos The screen position.
 * @return True if this screen bounds object contains the screen position.
 */
-(BOOL)containsPos: (NTScreenPos*)pos;
/**
 * Tests whether this screen bounds object contains a another screen bounds object.
 * @param bounds The other screen bounds object.
 * @return True if this screen bounds object contains the other screen bounds object.
 */
-(BOOL)containsBounds: (NTScreenBounds*)bounds;
/**
 * Tests whether this screen bounds object intersects with a another screen bounds object.
 * @param bounds The other screen bounds object.
 * @return True if this screen bounds object intersects with the other screen bounds object.
 */
-(BOOL)intersects: (NTScreenBounds*)bounds;
/**
 * Checks for equality between this and another screen bounds object.
 * @param ScreenBounds The other screen bounds object.
 * @return True if equal.
 */
-(BOOL)isEqualInternal: (NTScreenBounds*)ScreenBounds;
/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(int)hashInternal;
/**
 * Creates a string representation of this screen bounds object, useful for logging.
 * @return The string representation of this screen bounds object.
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
