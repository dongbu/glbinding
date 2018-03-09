
#include "Meta_Maps.h"

#include <eglbinding/egl/enum.h>


using namespace egl;


namespace eglbinding
{


const std::unordered_map<GLenum, std::string> Meta_StringsByEnum =
{
    { GLenum::EGL_NO_NATIVE_FENCE_FD_ANDROID, "EGL_NO_NATIVE_FENCE_FD_ANDROID" },
    { GLenum::EGL_DEFAULT_DISPLAY, "EGL_DEFAULT_DISPLAY" },
    { GLenum::EGL_TRUE, "EGL_TRUE" },
    { GLenum::EGL_CONTEXT_RELEASE_BEHAVIOR_KHR, "EGL_CONTEXT_RELEASE_BEHAVIOR_KHR" },
    { GLenum::EGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR, "EGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR" },
    { GLenum::EGL_DISPLAY_SCALING, "EGL_DISPLAY_SCALING" },
    { GLenum::EGL_SUCCESS, "EGL_SUCCESS" },
    { GLenum::EGL_NOT_INITIALIZED, "EGL_NOT_INITIALIZED" },
    { GLenum::EGL_BAD_ACCESS, "EGL_BAD_ACCESS" },
    { GLenum::EGL_BAD_ALLOC, "EGL_BAD_ALLOC" },
    { GLenum::EGL_BAD_ATTRIBUTE, "EGL_BAD_ATTRIBUTE" },
    { GLenum::EGL_BAD_CONFIG, "EGL_BAD_CONFIG" },
    { GLenum::EGL_BAD_CONTEXT, "EGL_BAD_CONTEXT" },
    { GLenum::EGL_BAD_CURRENT_SURFACE, "EGL_BAD_CURRENT_SURFACE" },
    { GLenum::EGL_BAD_DISPLAY, "EGL_BAD_DISPLAY" },
    { GLenum::EGL_BAD_MATCH, "EGL_BAD_MATCH" },
    { GLenum::EGL_BAD_NATIVE_PIXMAP, "EGL_BAD_NATIVE_PIXMAP" },
    { GLenum::EGL_BAD_NATIVE_WINDOW, "EGL_BAD_NATIVE_WINDOW" },
    { GLenum::EGL_BAD_PARAMETER, "EGL_BAD_PARAMETER" },
    { GLenum::EGL_BAD_SURFACE, "EGL_BAD_SURFACE" },
    { GLenum::EGL_CONTEXT_LOST, "EGL_CONTEXT_LOST" },
    { GLenum::EGL_BUFFER_SIZE, "EGL_BUFFER_SIZE" },
    { GLenum::EGL_ALPHA_SIZE, "EGL_ALPHA_SIZE" },
    { GLenum::EGL_BLUE_SIZE, "EGL_BLUE_SIZE" },
    { GLenum::EGL_GREEN_SIZE, "EGL_GREEN_SIZE" },
    { GLenum::EGL_RED_SIZE, "EGL_RED_SIZE" },
    { GLenum::EGL_DEPTH_SIZE, "EGL_DEPTH_SIZE" },
    { GLenum::EGL_STENCIL_SIZE, "EGL_STENCIL_SIZE" },
    { GLenum::EGL_CONFIG_CAVEAT, "EGL_CONFIG_CAVEAT" },
    { GLenum::EGL_CONFIG_ID, "EGL_CONFIG_ID" },
    { GLenum::EGL_LEVEL, "EGL_LEVEL" },
    { GLenum::EGL_MAX_PBUFFER_HEIGHT, "EGL_MAX_PBUFFER_HEIGHT" },
    { GLenum::EGL_MAX_PBUFFER_PIXELS, "EGL_MAX_PBUFFER_PIXELS" },
    { GLenum::EGL_MAX_PBUFFER_WIDTH, "EGL_MAX_PBUFFER_WIDTH" },
    { GLenum::EGL_NATIVE_RENDERABLE, "EGL_NATIVE_RENDERABLE" },
    { GLenum::EGL_NATIVE_VISUAL_ID, "EGL_NATIVE_VISUAL_ID" },
    { GLenum::EGL_NATIVE_VISUAL_TYPE, "EGL_NATIVE_VISUAL_TYPE" },
    { GLenum::EGL_SAMPLES, "EGL_SAMPLES" },
    { GLenum::EGL_SAMPLE_BUFFERS, "EGL_SAMPLE_BUFFERS" },
    { GLenum::EGL_SURFACE_TYPE, "EGL_SURFACE_TYPE" },
    { GLenum::EGL_TRANSPARENT_TYPE, "EGL_TRANSPARENT_TYPE" },
    { GLenum::EGL_TRANSPARENT_BLUE_VALUE, "EGL_TRANSPARENT_BLUE_VALUE" },
    { GLenum::EGL_TRANSPARENT_GREEN_VALUE, "EGL_TRANSPARENT_GREEN_VALUE" },
    { GLenum::EGL_TRANSPARENT_RED_VALUE, "EGL_TRANSPARENT_RED_VALUE" },
    { GLenum::EGL_NONE, "EGL_NONE" },
    { GLenum::EGL_BIND_TO_TEXTURE_RGB, "EGL_BIND_TO_TEXTURE_RGB" },
    { GLenum::EGL_BIND_TO_TEXTURE_RGBA, "EGL_BIND_TO_TEXTURE_RGBA" },
    { GLenum::EGL_MIN_SWAP_INTERVAL, "EGL_MIN_SWAP_INTERVAL" },
    { GLenum::EGL_MAX_SWAP_INTERVAL, "EGL_MAX_SWAP_INTERVAL" },
    { GLenum::EGL_LUMINANCE_SIZE, "EGL_LUMINANCE_SIZE" },
    { GLenum::EGL_ALPHA_MASK_SIZE, "EGL_ALPHA_MASK_SIZE" },
    { GLenum::EGL_COLOR_BUFFER_TYPE, "EGL_COLOR_BUFFER_TYPE" },
    { GLenum::EGL_RENDERABLE_TYPE, "EGL_RENDERABLE_TYPE" },
    { GLenum::EGL_MATCH_NATIVE_PIXMAP, "EGL_MATCH_NATIVE_PIXMAP" },
    { GLenum::EGL_CONFORMANT, "EGL_CONFORMANT" },
    { GLenum::EGL_MATCH_FORMAT_KHR, "EGL_MATCH_FORMAT_KHR" },
    { GLenum::EGL_SLOW_CONFIG, "EGL_SLOW_CONFIG" },
    { GLenum::EGL_NON_CONFORMANT_CONFIG, "EGL_NON_CONFORMANT_CONFIG" },
    { GLenum::EGL_TRANSPARENT_RGB, "EGL_TRANSPARENT_RGB" },
    { GLenum::EGL_VENDOR, "EGL_VENDOR" },
    { GLenum::EGL_VERSION, "EGL_VERSION" },
    { GLenum::EGL_EXTENSIONS, "EGL_EXTENSIONS" },
    { GLenum::EGL_HEIGHT, "EGL_HEIGHT" },
    { GLenum::EGL_WIDTH, "EGL_WIDTH" },
    { GLenum::EGL_LARGEST_PBUFFER, "EGL_LARGEST_PBUFFER" },
    { GLenum::EGL_DRAW, "EGL_DRAW" },
    { GLenum::EGL_READ, "EGL_READ" },
    { GLenum::EGL_CORE_NATIVE_ENGINE, "EGL_CORE_NATIVE_ENGINE" },
    { GLenum::EGL_NO_TEXTURE, "EGL_NO_TEXTURE" },
    { GLenum::EGL_TEXTURE_RGB, "EGL_TEXTURE_RGB" },
    { GLenum::EGL_TEXTURE_RGBA, "EGL_TEXTURE_RGBA" },
    { GLenum::EGL_TEXTURE_2D, "EGL_TEXTURE_2D" },
    { GLenum::EGL_Y_INVERTED_NOK, "EGL_Y_INVERTED_NOK" },
    { GLenum::EGL_TEXTURE_FORMAT, "EGL_TEXTURE_FORMAT" },
    { GLenum::EGL_TEXTURE_TARGET, "EGL_TEXTURE_TARGET" },
    { GLenum::EGL_MIPMAP_TEXTURE, "EGL_MIPMAP_TEXTURE" },
    { GLenum::EGL_MIPMAP_LEVEL, "EGL_MIPMAP_LEVEL" },
    { GLenum::EGL_BACK_BUFFER, "EGL_BACK_BUFFER" },
    { GLenum::EGL_SINGLE_BUFFER, "EGL_SINGLE_BUFFER" },
    { GLenum::EGL_RENDER_BUFFER, "EGL_RENDER_BUFFER" },
    { GLenum::EGL_COLORSPACE, "EGL_COLORSPACE" },
    { GLenum::EGL_ALPHA_FORMAT, "EGL_ALPHA_FORMAT" },
    { GLenum::EGL_COLORSPACE_sRGB, "EGL_COLORSPACE_sRGB" },
    { GLenum::EGL_COLORSPACE_LINEAR, "EGL_COLORSPACE_LINEAR" },
    { GLenum::EGL_ALPHA_FORMAT_NONPRE, "EGL_ALPHA_FORMAT_NONPRE" },
    { GLenum::EGL_ALPHA_FORMAT_PRE, "EGL_ALPHA_FORMAT_PRE" },
    { GLenum::EGL_CLIENT_APIS, "EGL_CLIENT_APIS" },
    { GLenum::EGL_RGB_BUFFER, "EGL_RGB_BUFFER" },
    { GLenum::EGL_LUMINANCE_BUFFER, "EGL_LUMINANCE_BUFFER" },
    { GLenum::EGL_HORIZONTAL_RESOLUTION, "EGL_HORIZONTAL_RESOLUTION" },
    { GLenum::EGL_VERTICAL_RESOLUTION, "EGL_VERTICAL_RESOLUTION" },
    { GLenum::EGL_PIXEL_ASPECT_RATIO, "EGL_PIXEL_ASPECT_RATIO" },
    { GLenum::EGL_SWAP_BEHAVIOR, "EGL_SWAP_BEHAVIOR" },
    { GLenum::EGL_BUFFER_PRESERVED, "EGL_BUFFER_PRESERVED" },
    { GLenum::EGL_BUFFER_DESTROYED, "EGL_BUFFER_DESTROYED" },
    { GLenum::EGL_OPENVG_IMAGE, "EGL_OPENVG_IMAGE" },
    { GLenum::EGL_CONTEXT_CLIENT_TYPE, "EGL_CONTEXT_CLIENT_TYPE" },
    { GLenum::EGL_CONTEXT_CLIENT_VERSION, "EGL_CONTEXT_CLIENT_VERSION" },
    { GLenum::EGL_MULTISAMPLE_RESOLVE, "EGL_MULTISAMPLE_RESOLVE" },
    { GLenum::EGL_MULTISAMPLE_RESOLVE_DEFAULT, "EGL_MULTISAMPLE_RESOLVE_DEFAULT" },
    { GLenum::EGL_MULTISAMPLE_RESOLVE_BOX, "EGL_MULTISAMPLE_RESOLVE_BOX" },
    { GLenum::EGL_CL_EVENT_HANDLE, "EGL_CL_EVENT_HANDLE" },
    { GLenum::EGL_GL_COLORSPACE, "EGL_GL_COLORSPACE" },
    { GLenum::EGL_OPENGL_ES_API, "EGL_OPENGL_ES_API" },
    { GLenum::EGL_OPENVG_API, "EGL_OPENVG_API" },
    { GLenum::EGL_OPENGL_API, "EGL_OPENGL_API" },
    { GLenum::EGL_NATIVE_PIXMAP_KHR, "EGL_NATIVE_PIXMAP_KHR" },
    { GLenum::EGL_GL_TEXTURE_2D, "EGL_GL_TEXTURE_2D" },
    { GLenum::EGL_GL_TEXTURE_3D, "EGL_GL_TEXTURE_3D" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X, "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X, "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y, "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z, "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z" },
    { GLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z, "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z" },
    { GLenum::EGL_GL_RENDERBUFFER, "EGL_GL_RENDERBUFFER" },
    { GLenum::EGL_VG_PARENT_IMAGE_KHR, "EGL_VG_PARENT_IMAGE_KHR" },
    { GLenum::EGL_GL_TEXTURE_LEVEL, "EGL_GL_TEXTURE_LEVEL" },
    { GLenum::EGL_GL_TEXTURE_ZOFFSET, "EGL_GL_TEXTURE_ZOFFSET" },
    { GLenum::EGL_POST_SUB_BUFFER_SUPPORTED_NV, "EGL_POST_SUB_BUFFER_SUPPORTED_NV" },
    { GLenum::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT, "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT" },
    { GLenum::EGL_FORMAT_RGB_565_EXACT_KHR, "EGL_FORMAT_RGB_565_EXACT_KHR" },
    { GLenum::EGL_FORMAT_RGB_565_KHR, "EGL_FORMAT_RGB_565_KHR" },
    { GLenum::EGL_FORMAT_RGBA_8888_EXACT_KHR, "EGL_FORMAT_RGBA_8888_EXACT_KHR" },
    { GLenum::EGL_FORMAT_RGBA_8888_KHR, "EGL_FORMAT_RGBA_8888_KHR" },
    { GLenum::EGL_MAP_PRESERVE_PIXELS_KHR, "EGL_MAP_PRESERVE_PIXELS_KHR" },
    { GLenum::EGL_LOCK_USAGE_HINT_KHR, "EGL_LOCK_USAGE_HINT_KHR" },
    { GLenum::EGL_BITMAP_POINTER_KHR, "EGL_BITMAP_POINTER_KHR" },
    { GLenum::EGL_BITMAP_PITCH_KHR, "EGL_BITMAP_PITCH_KHR" },
    { GLenum::EGL_BITMAP_ORIGIN_KHR, "EGL_BITMAP_ORIGIN_KHR" },
    { GLenum::EGL_BITMAP_PIXEL_RED_OFFSET_KHR, "EGL_BITMAP_PIXEL_RED_OFFSET_KHR" },
    { GLenum::EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR, "EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR" },
    { GLenum::EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR, "EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR" },
    { GLenum::EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR, "EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR" },
    { GLenum::EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR, "EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR" },
    { GLenum::EGL_LOWER_LEFT_KHR, "EGL_LOWER_LEFT_KHR" },
    { GLenum::EGL_UPPER_LEFT_KHR, "EGL_UPPER_LEFT_KHR" },
    { GLenum::EGL_IMAGE_PRESERVED, "EGL_IMAGE_PRESERVED" },
    { GLenum::EGL_COVERAGE_BUFFERS_NV, "EGL_COVERAGE_BUFFERS_NV" },
    { GLenum::EGL_COVERAGE_SAMPLES_NV, "EGL_COVERAGE_SAMPLES_NV" },
    { GLenum::EGL_DEPTH_ENCODING_NV, "EGL_DEPTH_ENCODING_NV" },
    { GLenum::EGL_DEPTH_ENCODING_NONLINEAR_NV, "EGL_DEPTH_ENCODING_NONLINEAR_NV" },
    { GLenum::EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV, "EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV" },
    { GLenum::EGL_SYNC_STATUS_NV, "EGL_SYNC_STATUS_NV" },
    { GLenum::EGL_SIGNALED_NV, "EGL_SIGNALED_NV" },
    { GLenum::EGL_UNSIGNALED_NV, "EGL_UNSIGNALED_NV" },
    { GLenum::EGL_ALREADY_SIGNALED_NV, "EGL_ALREADY_SIGNALED_NV" },
    { GLenum::EGL_TIMEOUT_EXPIRED_NV, "EGL_TIMEOUT_EXPIRED_NV" },
    { GLenum::EGL_CONDITION_SATISFIED_NV, "EGL_CONDITION_SATISFIED_NV" },
    { GLenum::EGL_SYNC_TYPE_NV, "EGL_SYNC_TYPE_NV" },
    { GLenum::EGL_SYNC_CONDITION_NV, "EGL_SYNC_CONDITION_NV" },
    { GLenum::EGL_SYNC_FENCE_NV, "EGL_SYNC_FENCE_NV" },
    { GLenum::EGL_SYNC_PRIOR_COMMANDS_COMPLETE, "EGL_SYNC_PRIOR_COMMANDS_COMPLETE" },
    { GLenum::EGL_SYNC_STATUS, "EGL_SYNC_STATUS" },
    { GLenum::EGL_SIGNALED, "EGL_SIGNALED" },
    { GLenum::EGL_UNSIGNALED, "EGL_UNSIGNALED" },
    { GLenum::EGL_TIMEOUT_EXPIRED, "EGL_TIMEOUT_EXPIRED" },
    { GLenum::EGL_CONDITION_SATISFIED, "EGL_CONDITION_SATISFIED" },
    { GLenum::EGL_SYNC_TYPE, "EGL_SYNC_TYPE" },
    { GLenum::EGL_SYNC_CONDITION, "EGL_SYNC_CONDITION" },
    { GLenum::EGL_SYNC_FENCE, "EGL_SYNC_FENCE" },
    { GLenum::EGL_SYNC_REUSABLE_KHR, "EGL_SYNC_REUSABLE_KHR" },
    { GLenum::EGL_CONTEXT_MINOR_VERSION, "EGL_CONTEXT_MINOR_VERSION" },
    { GLenum::EGL_CONTEXT_FLAGS_KHR, "EGL_CONTEXT_FLAGS_KHR" },
    { GLenum::EGL_CONTEXT_OPENGL_PROFILE_MASK, "EGL_CONTEXT_OPENGL_PROFILE_MASK" },
    { GLenum::EGL_SYNC_CL_EVENT, "EGL_SYNC_CL_EVENT" },
    { GLenum::EGL_SYNC_CL_EVENT_COMPLETE, "EGL_SYNC_CL_EVENT_COMPLETE" },
    { GLenum::EGL_CONTEXT_PRIORITY_LEVEL_IMG, "EGL_CONTEXT_PRIORITY_LEVEL_IMG" },
    { GLenum::EGL_CONTEXT_PRIORITY_HIGH_IMG, "EGL_CONTEXT_PRIORITY_HIGH_IMG" },
    { GLenum::EGL_CONTEXT_PRIORITY_MEDIUM_IMG, "EGL_CONTEXT_PRIORITY_MEDIUM_IMG" },
    { GLenum::EGL_CONTEXT_PRIORITY_LOW_IMG, "EGL_CONTEXT_PRIORITY_LOW_IMG" },
    { GLenum::EGL_NATIVE_BUFFER_MULTIPLANE_SEPARATE_IMG, "EGL_NATIVE_BUFFER_MULTIPLANE_SEPARATE_IMG" },
    { GLenum::EGL_NATIVE_BUFFER_PLANE_OFFSET_IMG, "EGL_NATIVE_BUFFER_PLANE_OFFSET_IMG" },
    { GLenum::EGL_BITMAP_PIXEL_SIZE_KHR, "EGL_BITMAP_PIXEL_SIZE_KHR" },
    { GLenum::EGL_COVERAGE_SAMPLE_RESOLVE_NV, "EGL_COVERAGE_SAMPLE_RESOLVE_NV" },
    { GLenum::EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV, "EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV" },
    { GLenum::EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV, "EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV" },
    { GLenum::EGL_MULTIVIEW_VIEW_COUNT_EXT, "EGL_MULTIVIEW_VIEW_COUNT_EXT" },
    { GLenum::EGL_AUTO_STEREO_NV, "EGL_AUTO_STEREO_NV" },
    { GLenum::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT, "EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT" },
    { GLenum::EGL_BUFFER_AGE_EXT, "EGL_BUFFER_AGE_EXT" },
    { GLenum::EGL_PLATFORM_DEVICE_EXT, "EGL_PLATFORM_DEVICE_EXT" },
    { GLenum::EGL_NATIVE_BUFFER_ANDROID, "EGL_NATIVE_BUFFER_ANDROID" },
    { GLenum::EGL_PLATFORM_ANDROID_KHR, "EGL_PLATFORM_ANDROID_KHR" },
    { GLenum::EGL_RECORDABLE_ANDROID, "EGL_RECORDABLE_ANDROID" },
    { GLenum::EGL_NATIVE_BUFFER_USAGE_ANDROID, "EGL_NATIVE_BUFFER_USAGE_ANDROID" },
    { GLenum::EGL_SYNC_NATIVE_FENCE_ANDROID, "EGL_SYNC_NATIVE_FENCE_ANDROID" },
    { GLenum::EGL_SYNC_NATIVE_FENCE_FD_ANDROID, "EGL_SYNC_NATIVE_FENCE_FD_ANDROID" },
    { GLenum::EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID, "EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID" },
    { GLenum::EGL_FRAMEBUFFER_TARGET_ANDROID, "EGL_FRAMEBUFFER_TARGET_ANDROID" },
    { GLenum::EGL_FRONT_BUFFER_AUTO_REFRESH_ANDROID, "EGL_FRONT_BUFFER_AUTO_REFRESH_ANDROID" },
    { GLenum::EGL_GL_COLORSPACE_DEFAULT_EXT, "EGL_GL_COLORSPACE_DEFAULT_EXT" },
    { GLenum::EGL_CONTEXT_OPENGL_DEBUG, "EGL_CONTEXT_OPENGL_DEBUG" },
    { GLenum::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE, "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE" },
    { GLenum::EGL_CONTEXT_OPENGL_ROBUST_ACCESS, "EGL_CONTEXT_OPENGL_ROBUST_ACCESS" },
    { GLenum::EGL_CONTEXT_OPENGL_NO_ERROR_KHR, "EGL_CONTEXT_OPENGL_NO_ERROR_KHR" },
    { GLenum::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY, "EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY" },
    { GLenum::EGL_NO_RESET_NOTIFICATION, "EGL_NO_RESET_NOTIFICATION" },
    { GLenum::EGL_LOSE_CONTEXT_ON_RESET, "EGL_LOSE_CONTEXT_ON_RESET" },
    { GLenum::EGL_DRM_BUFFER_FORMAT_MESA, "EGL_DRM_BUFFER_FORMAT_MESA" },
    { GLenum::EGL_DRM_BUFFER_USE_MESA, "EGL_DRM_BUFFER_USE_MESA" },
    { GLenum::EGL_DRM_BUFFER_FORMAT_ARGB32_MESA, "EGL_DRM_BUFFER_FORMAT_ARGB32_MESA" },
    { GLenum::EGL_DRM_BUFFER_MESA, "EGL_DRM_BUFFER_MESA" },
    { GLenum::EGL_DRM_BUFFER_STRIDE_MESA, "EGL_DRM_BUFFER_STRIDE_MESA" },
    { GLenum::EGL_PLATFORM_X11_EXT, "EGL_PLATFORM_X11_EXT" },
    { GLenum::EGL_PLATFORM_X11_SCREEN_EXT, "EGL_PLATFORM_X11_SCREEN_EXT" },
    { GLenum::EGL_PLATFORM_GBM_MESA, "EGL_PLATFORM_GBM_MESA" },
    { GLenum::EGL_PLATFORM_WAYLAND_EXT, "EGL_PLATFORM_WAYLAND_EXT" },
    { GLenum::EGL_PLATFORM_SURFACELESS_MESA, "EGL_PLATFORM_SURFACELESS_MESA" },
    { GLenum::EGL_STREAM_FIFO_LENGTH_KHR, "EGL_STREAM_FIFO_LENGTH_KHR" },
    { GLenum::EGL_STREAM_TIME_NOW_KHR, "EGL_STREAM_TIME_NOW_KHR" },
    { GLenum::EGL_STREAM_TIME_CONSUMER_KHR, "EGL_STREAM_TIME_CONSUMER_KHR" },
    { GLenum::EGL_STREAM_TIME_PRODUCER_KHR, "EGL_STREAM_TIME_PRODUCER_KHR" },
    { GLenum::EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE, "EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE" },
    { GLenum::EGL_FIXED_SIZE_ANGLE, "EGL_FIXED_SIZE_ANGLE" },
    { GLenum::EGL_CONSUMER_LATENCY_USEC_KHR, "EGL_CONSUMER_LATENCY_USEC_KHR" },
    { GLenum::EGL_PRODUCER_FRAME_KHR, "EGL_PRODUCER_FRAME_KHR" },
    { GLenum::EGL_CONSUMER_FRAME_KHR, "EGL_CONSUMER_FRAME_KHR" },
    { GLenum::EGL_STREAM_STATE_KHR, "EGL_STREAM_STATE_KHR" },
    { GLenum::EGL_STREAM_STATE_CREATED_KHR, "EGL_STREAM_STATE_CREATED_KHR" },
    { GLenum::EGL_STREAM_STATE_CONNECTING_KHR, "EGL_STREAM_STATE_CONNECTING_KHR" },
    { GLenum::EGL_STREAM_STATE_EMPTY_KHR, "EGL_STREAM_STATE_EMPTY_KHR" },
    { GLenum::EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR, "EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR" },
    { GLenum::EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR, "EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR" },
    { GLenum::EGL_STREAM_STATE_DISCONNECTED_KHR, "EGL_STREAM_STATE_DISCONNECTED_KHR" },
    { GLenum::EGL_BAD_STREAM_KHR, "EGL_BAD_STREAM_KHR" },
    { GLenum::EGL_BAD_STATE_KHR, "EGL_BAD_STATE_KHR" },
    { GLenum::EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR, "EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR" },
    { GLenum::EGL_SYNC_NEW_FRAME_NV, "EGL_SYNC_NEW_FRAME_NV" },
    { GLenum::EGL_BAD_DEVICE_EXT, "EGL_BAD_DEVICE_EXT" },
    { GLenum::EGL_DEVICE_EXT, "EGL_DEVICE_EXT" },
    { GLenum::EGL_BAD_OUTPUT_LAYER_EXT, "EGL_BAD_OUTPUT_LAYER_EXT" },
    { GLenum::EGL_BAD_OUTPUT_PORT_EXT, "EGL_BAD_OUTPUT_PORT_EXT" },
    { GLenum::EGL_SWAP_INTERVAL_EXT, "EGL_SWAP_INTERVAL_EXT" },
    { GLenum::EGL_DRM_DEVICE_FILE_EXT, "EGL_DRM_DEVICE_FILE_EXT" },
    { GLenum::EGL_DRM_CRTC_EXT, "EGL_DRM_CRTC_EXT" },
    { GLenum::EGL_DRM_PLANE_EXT, "EGL_DRM_PLANE_EXT" },
    { GLenum::EGL_DRM_CONNECTOR_EXT, "EGL_DRM_CONNECTOR_EXT" },
    { GLenum::EGL_OPENWF_DEVICE_ID_EXT, "EGL_OPENWF_DEVICE_ID_EXT" },
    { GLenum::EGL_OPENWF_PIPELINE_ID_EXT, "EGL_OPENWF_PIPELINE_ID_EXT" },
    { GLenum::EGL_OPENWF_PORT_ID_EXT, "EGL_OPENWF_PORT_ID_EXT" },
    { GLenum::EGL_CUDA_DEVICE_NV, "EGL_CUDA_DEVICE_NV" },
    { GLenum::EGL_CUDA_EVENT_HANDLE_NV, "EGL_CUDA_EVENT_HANDLE_NV" },
    { GLenum::EGL_SYNC_CUDA_EVENT_NV, "EGL_SYNC_CUDA_EVENT_NV" },
    { GLenum::EGL_SYNC_CUDA_EVENT_COMPLETE_NV, "EGL_SYNC_CUDA_EVENT_COMPLETE_NV" },
    { GLenum::EGL_STREAM_CROSS_PARTITION_NV, "EGL_STREAM_CROSS_PARTITION_NV" },
    { GLenum::EGL_STREAM_STATE_INITIALIZING_NV, "EGL_STREAM_STATE_INITIALIZING_NV" },
    { GLenum::EGL_STREAM_TYPE_NV, "EGL_STREAM_TYPE_NV" },
    { GLenum::EGL_STREAM_PROTOCOL_NV, "EGL_STREAM_PROTOCOL_NV" },
    { GLenum::EGL_STREAM_ENDPOINT_NV, "EGL_STREAM_ENDPOINT_NV" },
    { GLenum::EGL_STREAM_LOCAL_NV, "EGL_STREAM_LOCAL_NV" },
    { GLenum::EGL_STREAM_CROSS_PROCESS_NV, "EGL_STREAM_CROSS_PROCESS_NV" },
    { GLenum::EGL_STREAM_PROTOCOL_FD_NV, "EGL_STREAM_PROTOCOL_FD_NV" },
    { GLenum::EGL_STREAM_PRODUCER_NV, "EGL_STREAM_PRODUCER_NV" },
    { GLenum::EGL_STREAM_CONSUMER_NV, "EGL_STREAM_CONSUMER_NV" },
    { GLenum::EGL_STREAM_PROTOCOL_SOCKET_NV, "EGL_STREAM_PROTOCOL_SOCKET_NV" },
    { GLenum::EGL_SOCKET_HANDLE_NV, "EGL_SOCKET_HANDLE_NV" },
    { GLenum::EGL_SOCKET_TYPE_NV, "EGL_SOCKET_TYPE_NV" },
    { GLenum::EGL_SOCKET_TYPE_UNIX_NV, "EGL_SOCKET_TYPE_UNIX_NV" },
    { GLenum::EGL_SOCKET_TYPE_INET_NV, "EGL_SOCKET_TYPE_INET_NV" },
    { GLenum::EGL_MAX_STREAM_METADATA_BLOCKS_NV, "EGL_MAX_STREAM_METADATA_BLOCKS_NV" },
    { GLenum::EGL_MAX_STREAM_METADATA_BLOCK_SIZE_NV, "EGL_MAX_STREAM_METADATA_BLOCK_SIZE_NV" },
    { GLenum::EGL_MAX_STREAM_METADATA_TOTAL_SIZE_NV, "EGL_MAX_STREAM_METADATA_TOTAL_SIZE_NV" },
    { GLenum::EGL_PRODUCER_METADATA_NV, "EGL_PRODUCER_METADATA_NV" },
    { GLenum::EGL_CONSUMER_METADATA_NV, "EGL_CONSUMER_METADATA_NV" },
    { GLenum::EGL_METADATA0_SIZE_NV, "EGL_METADATA0_SIZE_NV" },
    { GLenum::EGL_METADATA1_SIZE_NV, "EGL_METADATA1_SIZE_NV" },
    { GLenum::EGL_METADATA2_SIZE_NV, "EGL_METADATA2_SIZE_NV" },
    { GLenum::EGL_METADATA3_SIZE_NV, "EGL_METADATA3_SIZE_NV" },
    { GLenum::EGL_METADATA0_TYPE_NV, "EGL_METADATA0_TYPE_NV" },
    { GLenum::EGL_METADATA1_TYPE_NV, "EGL_METADATA1_TYPE_NV" },
    { GLenum::EGL_METADATA2_TYPE_NV, "EGL_METADATA2_TYPE_NV" },
    { GLenum::EGL_METADATA3_TYPE_NV, "EGL_METADATA3_TYPE_NV" },
    { GLenum::EGL_LINUX_DMA_BUF_EXT, "EGL_LINUX_DMA_BUF_EXT" },
    { GLenum::EGL_LINUX_DRM_FOURCC_EXT, "EGL_LINUX_DRM_FOURCC_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE0_FD_EXT, "EGL_DMA_BUF_PLANE0_FD_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE0_OFFSET_EXT, "EGL_DMA_BUF_PLANE0_OFFSET_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE0_PITCH_EXT, "EGL_DMA_BUF_PLANE0_PITCH_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE1_FD_EXT, "EGL_DMA_BUF_PLANE1_FD_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE1_OFFSET_EXT, "EGL_DMA_BUF_PLANE1_OFFSET_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE1_PITCH_EXT, "EGL_DMA_BUF_PLANE1_PITCH_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE2_FD_EXT, "EGL_DMA_BUF_PLANE2_FD_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE2_OFFSET_EXT, "EGL_DMA_BUF_PLANE2_OFFSET_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE2_PITCH_EXT, "EGL_DMA_BUF_PLANE2_PITCH_EXT" },
    { GLenum::EGL_YUV_COLOR_SPACE_HINT_EXT, "EGL_YUV_COLOR_SPACE_HINT_EXT" },
    { GLenum::EGL_SAMPLE_RANGE_HINT_EXT, "EGL_SAMPLE_RANGE_HINT_EXT" },
    { GLenum::EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT, "EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT" },
    { GLenum::EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT, "EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT" },
    { GLenum::EGL_ITU_REC601_EXT, "EGL_ITU_REC601_EXT" },
    { GLenum::EGL_ITU_REC709_EXT, "EGL_ITU_REC709_EXT" },
    { GLenum::EGL_ITU_REC2020_EXT, "EGL_ITU_REC2020_EXT" },
    { GLenum::EGL_YUV_FULL_RANGE_EXT, "EGL_YUV_FULL_RANGE_EXT" },
    { GLenum::EGL_YUV_NARROW_RANGE_EXT, "EGL_YUV_NARROW_RANGE_EXT" },
    { GLenum::EGL_YUV_CHROMA_SITING_0_EXT, "EGL_YUV_CHROMA_SITING_0_EXT" },
    { GLenum::EGL_YUV_CHROMA_SITING_0_5_EXT, "EGL_YUV_CHROMA_SITING_0_5_EXT" },
    { GLenum::EGL_DISCARD_SAMPLES_ARM, "EGL_DISCARD_SAMPLES_ARM" },
    { GLenum::EGL_SYNC_PRIOR_COMMANDS_IMPLICIT_EXTERNAL_ARM, "EGL_SYNC_PRIOR_COMMANDS_IMPLICIT_EXTERNAL_ARM" },
    { GLenum::EGL_NATIVE_BUFFER_TIZEN, "EGL_NATIVE_BUFFER_TIZEN" },
    { GLenum::EGL_NATIVE_SURFACE_TIZEN, "EGL_NATIVE_SURFACE_TIZEN" },
    { GLenum::EGL_PROTECTED_CONTENT_EXT, "EGL_PROTECTED_CONTENT_EXT" },
    { GLenum::EGL_YUV_BUFFER_EXT, "EGL_YUV_BUFFER_EXT" },
    { GLenum::EGL_YUV_ORDER_EXT, "EGL_YUV_ORDER_EXT" },
    { GLenum::EGL_YUV_ORDER_YUV_EXT, "EGL_YUV_ORDER_YUV_EXT" },
    { GLenum::EGL_YUV_ORDER_YVU_EXT, "EGL_YUV_ORDER_YVU_EXT" },
    { GLenum::EGL_YUV_ORDER_YUYV_EXT, "EGL_YUV_ORDER_YUYV_EXT" },
    { GLenum::EGL_YUV_ORDER_UYVY_EXT, "EGL_YUV_ORDER_UYVY_EXT" },
    { GLenum::EGL_YUV_ORDER_YVYU_EXT, "EGL_YUV_ORDER_YVYU_EXT" },
    { GLenum::EGL_YUV_ORDER_VYUY_EXT, "EGL_YUV_ORDER_VYUY_EXT" },
    { GLenum::EGL_YUV_ORDER_AYUV_EXT, "EGL_YUV_ORDER_AYUV_EXT" },
    { GLenum::EGL_YUV_CSC_STANDARD_EXT, "EGL_YUV_CSC_STANDARD_EXT" },
    { GLenum::EGL_YUV_CSC_STANDARD_601_EXT, "EGL_YUV_CSC_STANDARD_601_EXT" },
    { GLenum::EGL_YUV_CSC_STANDARD_709_EXT, "EGL_YUV_CSC_STANDARD_709_EXT" },
    { GLenum::EGL_YUV_CSC_STANDARD_2020_EXT, "EGL_YUV_CSC_STANDARD_2020_EXT" },
    { GLenum::EGL_YUV_NUMBER_OF_PLANES_EXT, "EGL_YUV_NUMBER_OF_PLANES_EXT" },
    { GLenum::EGL_YUV_SUBSAMPLE_EXT, "EGL_YUV_SUBSAMPLE_EXT" },
    { GLenum::EGL_YUV_SUBSAMPLE_4_2_0_EXT, "EGL_YUV_SUBSAMPLE_4_2_0_EXT" },
    { GLenum::EGL_YUV_SUBSAMPLE_4_2_2_EXT, "EGL_YUV_SUBSAMPLE_4_2_2_EXT" },
    { GLenum::EGL_YUV_SUBSAMPLE_4_4_4_EXT, "EGL_YUV_SUBSAMPLE_4_4_4_EXT" },
    { GLenum::EGL_YUV_DEPTH_RANGE_EXT, "EGL_YUV_DEPTH_RANGE_EXT" },
    { GLenum::EGL_YUV_DEPTH_RANGE_LIMITED_EXT, "EGL_YUV_DEPTH_RANGE_LIMITED_EXT" },
    { GLenum::EGL_YUV_DEPTH_RANGE_FULL_EXT, "EGL_YUV_DEPTH_RANGE_FULL_EXT" },
    { GLenum::EGL_YUV_PLANE_BPP_EXT, "EGL_YUV_PLANE_BPP_EXT" },
    { GLenum::EGL_YUV_PLANE_BPP_0_EXT, "EGL_YUV_PLANE_BPP_0_EXT" },
    { GLenum::EGL_YUV_PLANE_BPP_8_EXT, "EGL_YUV_PLANE_BPP_8_EXT" },
    { GLenum::EGL_YUV_PLANE_BPP_10_EXT, "EGL_YUV_PLANE_BPP_10_EXT" },
    { GLenum::EGL_PENDING_METADATA_NV, "EGL_PENDING_METADATA_NV" },
    { GLenum::EGL_PENDING_FRAME_NV, "EGL_PENDING_FRAME_NV" },
    { GLenum::EGL_STREAM_TIME_PENDING_NV, "EGL_STREAM_TIME_PENDING_NV" },
    { GLenum::EGL_YUV_PLANE0_TEXTURE_UNIT_NV, "EGL_YUV_PLANE0_TEXTURE_UNIT_NV" },
    { GLenum::EGL_YUV_PLANE1_TEXTURE_UNIT_NV, "EGL_YUV_PLANE1_TEXTURE_UNIT_NV" },
    { GLenum::EGL_YUV_PLANE2_TEXTURE_UNIT_NV, "EGL_YUV_PLANE2_TEXTURE_UNIT_NV" },
    { GLenum::EGL_SUPPORT_RESET_NV, "EGL_SUPPORT_RESET_NV" },
    { GLenum::EGL_SUPPORT_REUSE_NV, "EGL_SUPPORT_REUSE_NV" },
    { GLenum::EGL_STREAM_FIFO_SYNCHRONOUS_NV, "EGL_STREAM_FIFO_SYNCHRONOUS_NV" },
    { GLenum::EGL_PRODUCER_MAX_FRAME_HINT_NV, "EGL_PRODUCER_MAX_FRAME_HINT_NV" },
    { GLenum::EGL_CONSUMER_MAX_FRAME_HINT_NV, "EGL_CONSUMER_MAX_FRAME_HINT_NV" },
    { GLenum::EGL_COLOR_COMPONENT_TYPE_EXT, "EGL_COLOR_COMPONENT_TYPE_EXT" },
    { GLenum::EGL_COLOR_COMPONENT_TYPE_FIXED_EXT, "EGL_COLOR_COMPONENT_TYPE_FIXED_EXT" },
    { GLenum::EGL_COLOR_COMPONENT_TYPE_FLOAT_EXT, "EGL_COLOR_COMPONENT_TYPE_FLOAT_EXT" },
    { GLenum::EGL_GL_COLORSPACE_BT2020_LINEAR_EXT, "EGL_GL_COLORSPACE_BT2020_LINEAR_EXT" },
    { GLenum::EGL_GL_COLORSPACE_BT2020_PQ_EXT, "EGL_GL_COLORSPACE_BT2020_PQ_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_RX_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_RX_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_RY_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_RY_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_GX_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_GX_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_GY_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_GY_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_BX_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_BX_EXT" },
    { GLenum::EGL_SMPTE2086_DISPLAY_PRIMARY_BY_EXT, "EGL_SMPTE2086_DISPLAY_PRIMARY_BY_EXT" },
    { GLenum::EGL_SMPTE2086_WHITE_POINT_X_EXT, "EGL_SMPTE2086_WHITE_POINT_X_EXT" },
    { GLenum::EGL_SMPTE2086_WHITE_POINT_Y_EXT, "EGL_SMPTE2086_WHITE_POINT_Y_EXT" },
    { GLenum::EGL_SMPTE2086_MAX_LUMINANCE_EXT, "EGL_SMPTE2086_MAX_LUMINANCE_EXT" },
    { GLenum::EGL_SMPTE2086_MIN_LUMINANCE_EXT, "EGL_SMPTE2086_MIN_LUMINANCE_EXT" },
    { GLenum::EGL_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV, "EGL_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV" },
    { GLenum::EGL_STREAM_CROSS_OBJECT_NV, "EGL_STREAM_CROSS_OBJECT_NV" },
    { GLenum::EGL_STREAM_CROSS_DISPLAY_NV, "EGL_STREAM_CROSS_DISPLAY_NV" },
    { GLenum::EGL_STREAM_CROSS_SYSTEM_NV, "EGL_STREAM_CROSS_SYSTEM_NV" },
    { GLenum::EGL_GL_COLORSPACE_SCRGB_LINEAR_EXT, "EGL_GL_COLORSPACE_SCRGB_LINEAR_EXT" },
    { GLenum::EGL_GL_COLORSPACE_SCRGB_EXT, "EGL_GL_COLORSPACE_SCRGB_EXT" },
    { GLenum::EGL_TRACK_REFERENCES_KHR, "EGL_TRACK_REFERENCES_KHR" },
    { GLenum::EGL_CONTEXT_PRIORITY_REALTIME_NV, "EGL_CONTEXT_PRIORITY_REALTIME_NV" },
    { GLenum::EGL_CTA861_3_MAX_CONTENT_LIGHT_LEVEL_EXT, "EGL_CTA861_3_MAX_CONTENT_LIGHT_LEVEL_EXT" },
    { GLenum::EGL_CTA861_3_MAX_FRAME_AVERAGE_LEVEL_EXT, "EGL_CTA861_3_MAX_FRAME_AVERAGE_LEVEL_EXT" },
    { GLenum::EGL_GL_COLORSPACE_DISPLAY_P3_LINEAR_EXT, "EGL_GL_COLORSPACE_DISPLAY_P3_LINEAR_EXT" },
    { GLenum::EGL_GL_COLORSPACE_DISPLAY_P3_EXT, "EGL_GL_COLORSPACE_DISPLAY_P3_EXT" },
    { GLenum::EGL_D3D9_DEVICE_ANGLE, "EGL_D3D9_DEVICE_ANGLE" },
    { GLenum::EGL_D3D11_DEVICE_ANGLE, "EGL_D3D11_DEVICE_ANGLE" },
    { GLenum::EGL_OBJECT_THREAD_KHR, "EGL_OBJECT_THREAD_KHR" },
    { GLenum::EGL_OBJECT_DISPLAY_KHR, "EGL_OBJECT_DISPLAY_KHR" },
    { GLenum::EGL_OBJECT_CONTEXT_KHR, "EGL_OBJECT_CONTEXT_KHR" },
    { GLenum::EGL_OBJECT_SURFACE_KHR, "EGL_OBJECT_SURFACE_KHR" },
    { GLenum::EGL_OBJECT_IMAGE_KHR, "EGL_OBJECT_IMAGE_KHR" },
    { GLenum::EGL_OBJECT_SYNC_KHR, "EGL_OBJECT_SYNC_KHR" },
    { GLenum::EGL_OBJECT_STREAM_KHR, "EGL_OBJECT_STREAM_KHR" },
    { GLenum::EGL_DEBUG_CALLBACK_KHR, "EGL_DEBUG_CALLBACK_KHR" },
    { GLenum::EGL_DEBUG_MSG_CRITICAL_KHR, "EGL_DEBUG_MSG_CRITICAL_KHR" },
    { GLenum::EGL_DEBUG_MSG_ERROR_KHR, "EGL_DEBUG_MSG_ERROR_KHR" },
    { GLenum::EGL_DEBUG_MSG_WARN_KHR, "EGL_DEBUG_MSG_WARN_KHR" },
    { GLenum::EGL_DEBUG_MSG_INFO_KHR, "EGL_DEBUG_MSG_INFO_KHR" },
    { GLenum::EGL_TIMESTAMPS_ANDROID, "EGL_TIMESTAMPS_ANDROID" },
    { GLenum::EGL_COMPOSITE_DEADLINE_ANDROID, "EGL_COMPOSITE_DEADLINE_ANDROID" },
    { GLenum::EGL_COMPOSITE_INTERVAL_ANDROID, "EGL_COMPOSITE_INTERVAL_ANDROID" },
    { GLenum::EGL_COMPOSITE_TO_PRESENT_LATENCY_ANDROID, "EGL_COMPOSITE_TO_PRESENT_LATENCY_ANDROID" },
    { GLenum::EGL_REQUESTED_PRESENT_TIME_ANDROID, "EGL_REQUESTED_PRESENT_TIME_ANDROID" },
    { GLenum::EGL_RENDERING_COMPLETE_TIME_ANDROID, "EGL_RENDERING_COMPLETE_TIME_ANDROID" },
    { GLenum::EGL_COMPOSITION_LATCH_TIME_ANDROID, "EGL_COMPOSITION_LATCH_TIME_ANDROID" },
    { GLenum::EGL_FIRST_COMPOSITION_START_TIME_ANDROID, "EGL_FIRST_COMPOSITION_START_TIME_ANDROID" },
    { GLenum::EGL_LAST_COMPOSITION_START_TIME_ANDROID, "EGL_LAST_COMPOSITION_START_TIME_ANDROID" },
    { GLenum::EGL_FIRST_COMPOSITION_GPU_FINISHED_TIME_ANDROID, "EGL_FIRST_COMPOSITION_GPU_FINISHED_TIME_ANDROID" },
    { GLenum::EGL_DISPLAY_PRESENT_TIME_ANDROID, "EGL_DISPLAY_PRESENT_TIME_ANDROID" },
    { GLenum::EGL_DEQUEUE_READY_TIME_ANDROID, "EGL_DEQUEUE_READY_TIME_ANDROID" },
    { GLenum::EGL_READS_DONE_TIME_ANDROID, "EGL_READS_DONE_TIME_ANDROID" },
    { GLenum::EGL_DMA_BUF_PLANE3_FD_EXT, "EGL_DMA_BUF_PLANE3_FD_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE3_OFFSET_EXT, "EGL_DMA_BUF_PLANE3_OFFSET_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE3_PITCH_EXT, "EGL_DMA_BUF_PLANE3_PITCH_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE0_MODIFIER_LO_EXT, "EGL_DMA_BUF_PLANE0_MODIFIER_LO_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE0_MODIFIER_HI_EXT, "EGL_DMA_BUF_PLANE0_MODIFIER_HI_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE1_MODIFIER_LO_EXT, "EGL_DMA_BUF_PLANE1_MODIFIER_LO_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE1_MODIFIER_HI_EXT, "EGL_DMA_BUF_PLANE1_MODIFIER_HI_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE2_MODIFIER_LO_EXT, "EGL_DMA_BUF_PLANE2_MODIFIER_LO_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE2_MODIFIER_HI_EXT, "EGL_DMA_BUF_PLANE2_MODIFIER_HI_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE3_MODIFIER_LO_EXT, "EGL_DMA_BUF_PLANE3_MODIFIER_LO_EXT" },
    { GLenum::EGL_DMA_BUF_PLANE3_MODIFIER_HI_EXT, "EGL_DMA_BUF_PLANE3_MODIFIER_HI_EXT" },
    { GLenum::EGL_PRIMARY_COMPOSITOR_CONTEXT_EXT, "EGL_PRIMARY_COMPOSITOR_CONTEXT_EXT" },
    { GLenum::EGL_EXTERNAL_REF_ID_EXT, "EGL_EXTERNAL_REF_ID_EXT" },
    { GLenum::EGL_COMPOSITOR_DROP_NEWEST_FRAME_EXT, "EGL_COMPOSITOR_DROP_NEWEST_FRAME_EXT" },
    { GLenum::EGL_COMPOSITOR_KEEP_NEWEST_FRAME_EXT, "EGL_COMPOSITOR_KEEP_NEWEST_FRAME_EXT" },
    { GLenum::EGL_FRONT_BUFFER_EXT, "EGL_FRONT_BUFFER_EXT" },
    { GLenum::EGL_IMPORT_SYNC_TYPE_EXT, "EGL_IMPORT_SYNC_TYPE_EXT" },
    { GLenum::EGL_IMPORT_IMPLICIT_SYNC_EXT, "EGL_IMPORT_IMPLICIT_SYNC_EXT" },
    { GLenum::EGL_IMPORT_EXPLICIT_SYNC_EXT, "EGL_IMPORT_EXPLICIT_SYNC_EXT" },
    { GLenum::EGL_COLOR_FORMAT_HI, "EGL_COLOR_FORMAT_HI" },
    { GLenum::EGL_COLOR_RGB_HI, "EGL_COLOR_RGB_HI" },
    { GLenum::EGL_COLOR_RGBA_HI, "EGL_COLOR_RGBA_HI" },
    { GLenum::EGL_COLOR_ARGB_HI, "EGL_COLOR_ARGB_HI" },
    { GLenum::EGL_CLIENT_PIXMAP_POINTER_HI, "EGL_CLIENT_PIXMAP_POINTER_HI" },
    { GLenum::EGL_METADATA_SCALING_EXT, "EGL_METADATA_SCALING_EXT" }
};


} // namespace eglbinding
