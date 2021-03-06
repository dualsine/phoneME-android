/*
 * Copyright  1990-2009 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt).
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions.
 */

#ifndef __JAVACALL_DOM_TEXTEVENT_H_
#define __JAVACALL_DOM_TEXTEVENT_H_

/**
 * @file javacall_dom_textevent.h
 * @ingroup JSR290DOM
 * @brief Javacall DOM interfaces for TextEvent
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <javacall_dom.h>

/**
 * @defgroup JSR290DOM JSR290 DOM API
 *
 * The following API definitions are required by DOM part of the JSR-290.
 *
 * @{
 */

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR returns  <code>data</code> holds the value of the characters generated by the 
 * character device. This may be a single Unicode character or a 
 * non-empty sequence of Unicode characters [Unicode]. Characters should be 
 * normalized as defined by the Unicode normalization form NFC, defined in 
 * [<a href='http://www.unicode.org/reports/tr15/'>UAX #15</a>]. This 
 * attribute cannot be NULL or contain the empty string. 
 * 
 * @param handle Pointer to the object representing this textevent.
 * @param invocation_id Invocation identifier which MUST be used in the 
 *                  corresponding javanotify function.
 * @param context The context saved during asynchronous operation.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_OUT_OF_MEMORY if function fails to allocate memory for the 
 *             context or if length of the returend string is more then 
 *             specified in ret_value_len,
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_get_data_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_get_data_start(javacall_handle handle,
                                      javacall_int32 invocation_id,
                                      void **context,
                                      /* OUT */ javacall_utf16** ret_value,
                                      /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR returns  <code>data</code> holds the value of the characters generated by the 
 * character device. This may be a single Unicode character or a 
 * non-empty sequence of Unicode characters [Unicode]. Characters should be 
 * normalized as defined by the Unicode normalization form NFC, defined in 
 * [<a href='http://www.unicode.org/reports/tr15/'>UAX #15</a>]. This 
 * attribute cannot be NULL or contain the empty string. 
 * 
 * @param context The context saved during asynchronous operation.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_OUT_OF_MEMORY if length of the returend string is more then 
 *             specified in ret_value_len,
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_get_data_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_get_data_finish(void *context,
                                       /* OUT */ javacall_utf16** ret_value,
                                       /* INOUT */ javacall_uint32* ret_value_len);

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR  The <code>initTextEvent</code> method is used to initialize the value 
 * of a <code>TextEvent</code> object and has the same behavior as 
 * <code>UIEvent.initUIEvent()</code>. The value of 
 * <code>UIEvent.detail</code> remains undefined. 
 * 
 * @param handle Pointer to the object representing this textevent.
 * @param invocation_id Invocation identifier which MUST be used in the 
 *                  corresponding javanotify function.
 * @param context The context saved during asynchronous operation.
 * @param type_arg  Refer to the <code>UIEvent.initUIEvent()</code> method 
 *   for a description of this parameter. 
 * @param can_bubble_arg  Refer to the <code>UIEvent.initUIEvent()</code> 
 *   method for a description of this parameter. 
 * @param cancelable_arg  Refer to the <code>UIEvent.initUIEvent()</code> 
 *   method for a description of this parameter. 
 * @param view_arg Pointer to the object of
 *    Refer to the <code>UIEvent.initUIEvent()</code> method 
 *   for a description of this parameter. 
 * @param data_arg  Specifies <code>TextEvent.data</code>. 
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_OUT_OF_MEMORY if function fails to allocate memory for the 
 *             context,
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_init_text_event_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_init_text_event_start(javacall_handle handle,
                                             javacall_int32 invocation_id,
                                             void **context,
                                             javacall_const_utf16_string type_arg,
                                             javacall_bool can_bubble_arg,
                                             javacall_bool cancelable_arg,
                                             javacall_handle view_arg,
                                             javacall_const_utf16_string data_arg);

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR  The <code>initTextEvent</code> method is used to initialize the value 
 * of a <code>TextEvent</code> object and has the same behavior as 
 * <code>UIEvent.initUIEvent()</code>. The value of 
 * <code>UIEvent.detail</code> remains undefined. 
 * 
 * @param context The context saved during asynchronous operation.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_init_text_event_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_init_text_event_finish(void *context);

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR  The <code>initTextEventNS</code> method is used to initialize the 
 * value of a <code>TextEvent</code> object and has the same behavior as 
 * <code>UIEvent.initUIEventNS()</code>. The value of 
 * <code>UIEvent.detail</code> remains undefined. 
 * 
 * @param handle Pointer to the object representing this textevent.
 * @param invocation_id Invocation identifier which MUST be used in the 
 *                  corresponding javanotify function.
 * @param context The context saved during asynchronous operation.
 * @param namespace_uri_arg  Refer to the <code>UIEvent.initUIEventNS()</code> 
 *   method for a description of this parameter. 
 * @param type_arg  Refer to the <code>UIEvent.initUIEventNS()</code> method 
 *   for a description of this parameter. 
 * @param can_bubble_arg  Refer to the <code>UIEvent.initUIEventNS()</code> 
 *   method for a description of this parameter. 
 * @param cancelable_arg  Refer to the <code>UIEvent.initUIEventNS()</code>
 *   method for a description of this parameter. 
 * @param view_arg Pointer to the object of
 *    Refer to the <code>UIEvent.initUIEventNS()</code> 
 *   method for a description of this parameter. 
 * @param data_arg  Refer to the <code>TextEvent.initTextEvent()</code> 
 *   method for a description of this parameter. 
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_OUT_OF_MEMORY if function fails to allocate memory for the 
 *             context,
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_init_text_event_ns_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_init_text_event_ns_start(javacall_handle handle,
                                                javacall_int32 invocation_id,
                                                void **context,
                                                javacall_const_utf16_string namespace_uri_arg,
                                                javacall_const_utf16_string type_arg,
                                                javacall_bool can_bubble_arg,
                                                javacall_bool cancelable_arg,
                                                javacall_handle view_arg,
                                                javacall_const_utf16_string data_arg);

/**
 * Forms request to the native engine and returns with JAVACALL_WOULD_BLOCK code 
 * OR  The <code>initTextEventNS</code> method is used to initialize the 
 * value of a <code>TextEvent</code> object and has the same behavior as 
 * <code>UIEvent.initUIEventNS()</code>. The value of 
 * <code>UIEvent.detail</code> remains undefined. 
 * 
 * @param context The context saved during asynchronous operation.
 *   method for a description of this parameter. 
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_FAIL if error in native code occured
 *         JAVACALL_WOULD_BLOCK caller must call the 
 *             javacall_dom_textevent_init_text_event_ns_finish function to complete the 
 *             operation,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_init_text_event_ns_finish(void *context);

/** 
 * Decrements ref counter of the native object specified number of times
 * 
 * @param handle Pointer to the object representing this node.
 * @param count number of times to decrement.
 * 
 * @return JAVACALL_OK if all done successfuly,
 *         JAVACALL_NOT_IMPLEMENTED when the stub was called
 */
javacall_result
javacall_dom_textevent_clear_references(javacall_handle handle, javacall_int32 count);


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* ifndef __JAVACALL_DOM_TEXTEVENT_H_ */
