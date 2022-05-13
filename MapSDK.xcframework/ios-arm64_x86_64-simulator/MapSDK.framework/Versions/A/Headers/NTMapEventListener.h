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
#import "NTMapClickInfo.h"
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#import "NTMapInteractionInfo.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Listener for events like map clicks etc.
 */
__attribute__ ((visibility("default"))) @interface NTMapEventListener : NSObject
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
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 * @param cPtr The native pointer of the instance.
 * @param cMemoryOwn The ownership flag.
 * @return The new instance.
 */
/** @internal:nodoc: */
+(NTMapEventListener*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Listener method that gets called at the end of the rendering process when the
 * map view needs no further refreshing.
 * Note that there can still be background processes (tile loading) that may change
 * the map view but these may take long time.
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onMapIdle;
/**
 * Listener method that gets called at the end of the rendering process when the
 * map view needs no further refreshing.
 * Note that there can still be background processes (tile loading) that may change
 * the map view but these may take long time.
 * This method is called from GL renderer thread, not from main thread.
 */
-(void)onMapIdleSwigExplicitNTMapEventListener;
/**
 * Listener method that gets called when the map is panned, rotated, tilted or zoomed.
 * The callback is used for both UI events and map changes resulting from API calls.
 * It is recommended to use onMapInteraction callback instead of onMapMoved, if possible.
 * Doing any calls to update MapView state from this method is potentially dangerous and may
 * result in deadlocks or crashes.
 * The thread this method is called from may vary.
 */
-(void)onMapMoved;
/**
 * Listener method that gets called when the map is panned, rotated, tilted or zoomed.
 * The callback is used for both UI events and map changes resulting from API calls.
 * It is recommended to use onMapInteraction callback instead of onMapMoved, if possible.
 * Doing any calls to update MapView state from this method is potentially dangerous and may
 * result in deadlocks or crashes.
 * The thread this method is called from may vary.
 */
-(void)onMapMovedSwigExplicitNTMapEventListener;
/**
 * Listener method that gets called when map is in 'stable' state - map animations have finished,
 * user has lifted fingers from the screen. This method is similar to onMapIdle, but is called less
 * frequently and takes account touch state.
 * The thread this method is called from may vary.
 */
-(void)onMapStable;
/**
 * Listener method that gets called when map is in 'stable' state - map animations have finished,
 * user has lifted fingers from the screen. This method is similar to onMapIdle, but is called less
 * frequently and takes account touch state.
 * The thread this method is called from may vary.
 */
-(void)onMapStableSwigExplicitNTMapEventListener;
/**
 * Listener method that gets called when user has interacted with the map. The callback
 * includes info about interaction type (panning, zooming, etc).
 * @param mapInteractionInfo A container that provides information about the interaction.
 */
-(void)onMapInteraction: (NTMapInteractionInfo*)mapInteractionInfo;
/**
 * Listener method that gets called when user has interacted with the map. The callback
 * includes info about interaction type (panning, zooming, etc).
 * @param mapInteractionInfo A container that provides information about the interaction.
 */
-(void)onMapInteractionSwigExplicitNTMapEventListener: (NTMapInteractionInfo*)mapInteractionInfo;
/**
 * Listener method that gets called when a click is performed on an empty area of the map.
 * This method will NOT be called from the main thread.
 * @param mapClickInfo A container that provides information about the click.
 */
-(void)onMapClicked: (NTMapClickInfo*)mapClickInfo;
/**
 * Listener method that gets called when a click is performed on an empty area of the map.
 * This method will NOT be called from the main thread.
 * @param mapClickInfo A container that provides information about the click.
 */
-(void)onMapClickedSwigExplicitNTMapEventListener: (NTMapClickInfo*)mapClickInfo;
/**
 * Returns the raw pointer to the object. This is used internally by the SDK.
 * @return The internal pointer of the object.
 */
/** @internal:nodoc: */
-(long long)swigGetRawPtr;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.
 * @return The class name of this object.
 */
/** @internal:nodoc: */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.
 * @return The pointer to the connected director object or null if director is not connected.
 */
/** @internal:nodoc: */
-(void *)swigGetDirectorObject;
-(id)init;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
