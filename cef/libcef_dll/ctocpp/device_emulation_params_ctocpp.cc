// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=b905d9420211f11108b71d0a11816b239ad26805$
//

#include "libcef_dll/ctocpp/device_emulation_params_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDeviceEmulationParams> CefDeviceEmulationParams::Create() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_device_emulation_params_t* _retval = cef_device_emulation_params_create();

  // Return type: refptr_same
  return CefDeviceEmulationParamsCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetScreenType(int type) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_screen_type))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_screen_type(_struct, type);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetScreenSize(int width, int height) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_screen_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_screen_size(_struct, width, height);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetViewPosition(int x, int y) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_view_position))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_view_position(_struct, x, y);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetViewSize(int width, int height) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_view_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_view_size(_struct, width, height);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetDeviceScaleFactor(float value) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_device_scale_factor))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_device_scale_factor(_struct, value);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetScale(float value) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_scale))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_scale(_struct, value);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetViewportOffset(float x, float y) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_viewport_offset))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_viewport_offset(_struct, x, y);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetViewportScale(float value) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_viewport_scale))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_viewport_scale(_struct, value);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetScreenOrientationType(int type) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_screen_orientation_type))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_screen_orientation_type(_struct, type);
}

NO_SANITIZE("cfi-icall")
void CefDeviceEmulationParamsCToCpp::SetScreenOrientationAngle(int angle) {
  shutdown_checker::AssertNotShutdown();

  cef_device_emulation_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_screen_orientation_angle))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_screen_orientation_angle(_struct, angle);
}

// CONSTRUCTOR - Do not edit by hand.

CefDeviceEmulationParamsCToCpp::CefDeviceEmulationParamsCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDeviceEmulationParamsCToCpp::~CefDeviceEmulationParamsCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_device_emulation_params_t* CefCToCppRefCounted<
    CefDeviceEmulationParamsCToCpp,
    CefDeviceEmulationParams,
    cef_device_emulation_params_t>::UnwrapDerived(CefWrapperType type,
                                                  CefDeviceEmulationParams* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefDeviceEmulationParamsCToCpp,
                        CefDeviceEmulationParams,
                        cef_device_emulation_params_t>::kWrapperType =
        WT_DEVICE_EMULATION_PARAMS;