
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


const Binding::array_t Binding::s_functions =
{{
    &eglBindAPI,
    &eglBindTexImage,
    &eglChooseConfig,
    &eglClientWaitSync,
    &eglClientWaitSyncKHR,
    &eglClientWaitSyncNV,
    &eglCompositorBindTexWindowEXT,
    &eglCompositorSetContextAttributesEXT,
    &eglCompositorSetContextListEXT,
    &eglCompositorSetSizeEXT,
    &eglCompositorSetWindowAttributesEXT,
    &eglCompositorSetWindowListEXT,
    &eglCompositorSwapPolicyEXT,
    &eglCopyBuffers,
    &eglCreateContext,
    &eglCreateDRMImageMESA,
    &eglCreateFenceSyncNV,
    &eglCreateImage,
    &eglCreateImageKHR,
    &eglCreateNativeClientBufferANDROID,
    &eglCreatePbufferFromClientBuffer,
    &eglCreatePbufferSurface,
    &eglCreatePixmapSurface,
    &eglCreatePixmapSurfaceHI,
    &eglCreatePlatformPixmapSurface,
    &eglCreatePlatformPixmapSurfaceEXT,
    &eglCreatePlatformWindowSurface,
    &eglCreatePlatformWindowSurfaceEXT,
    &eglCreateStreamAttribKHR,
    &eglCreateStreamFromFileDescriptorKHR,
    &eglCreateStreamKHR,
    &eglCreateStreamProducerSurfaceKHR,
    &eglCreateStreamSyncNV,
    &eglCreateSync,
    &eglCreateSync64KHR,
    &eglCreateSyncKHR,
    &eglCreateWindowSurface,
    &eglDebugMessageControlKHR,
    &eglDestroyContext,
    &eglDestroyImage,
    &eglDestroyImageKHR,
    &eglDestroyStreamKHR,
    &eglDestroySurface,
    &eglDestroySync,
    &eglDestroySyncKHR,
    &eglDestroySyncNV,
    &eglDupNativeFenceFDANDROID,
    &eglExportDMABUFImageMESA,
    &eglExportDMABUFImageQueryMESA,
    &eglExportDRMImageMESA,
    &eglFenceNV,
    &eglGetCompositorTimingANDROID,
    &eglGetCompositorTimingSupportedANDROID,
    &eglGetConfigAttrib,
    &eglGetConfigs,
    &eglGetCurrentContext,
    &eglGetCurrentDisplay,
    &eglGetCurrentSurface,
    &eglGetDisplay,
    &eglGetError,
    &eglGetFrameTimestampSupportedANDROID,
    &eglGetFrameTimestampsANDROID,
    &eglGetNativeClientBufferANDROID,
    &eglGetNextFrameIdANDROID,
    &eglGetOutputLayersEXT,
    &eglGetOutputPortsEXT,
    &eglGetPlatformDisplay,
    &eglGetPlatformDisplayEXT,
    &eglGetProcAddress,
    &eglGetStreamFileDescriptorKHR,
    &eglGetSyncAttrib,
    &eglGetSyncAttribKHR,
    &eglGetSyncAttribNV,
    &eglGetSystemTimeFrequencyNV,
    &eglGetSystemTimeNV,
    &eglInitialize,
    &eglLabelObjectKHR,
    &eglLockSurfaceKHR,
    &eglMakeCurrent,
    &eglOutputLayerAttribEXT,
    &eglOutputPortAttribEXT,
    &eglPostSubBufferNV,
    &eglPresentationTimeANDROID,
    &eglQueryAPI,
    &eglQueryContext,
    &eglQueryDebugKHR,
    &eglQueryDeviceAttribEXT,
    &eglQueryDeviceStringEXT,
    &eglQueryDevicesEXT,
    &eglQueryDisplayAttribEXT,
    &eglQueryDisplayAttribKHR,
    &eglQueryDisplayAttribNV,
    &eglQueryDmaBufFormatsEXT,
    &eglQueryDmaBufModifiersEXT,
    &eglQueryNativeDisplayNV,
    &eglQueryNativePixmapNV,
    &eglQueryNativeWindowNV,
    &eglQueryOutputLayerAttribEXT,
    &eglQueryOutputLayerStringEXT,
    &eglQueryOutputPortAttribEXT,
    &eglQueryOutputPortStringEXT,
    &eglQueryStreamAttribKHR,
    &eglQueryStreamKHR,
    &eglQueryStreamMetadataNV,
    &eglQueryStreamTimeKHR,
    &eglQueryStreamu64KHR,
    &eglQueryString,
    &eglQuerySurface,
    &eglQuerySurface64KHR,
    &eglQuerySurfacePointerANGLE,
    &eglReleaseTexImage,
    &eglReleaseThread,
    &eglResetStreamNV,
    &eglSetBlobCacheFuncsANDROID,
    &eglSetDamageRegionKHR,
    &eglSetStreamAttribKHR,
    &eglSetStreamMetadataNV,
    &eglSignalSyncKHR,
    &eglSignalSyncNV,
    &eglStreamAttribKHR,
    &eglStreamConsumerAcquireAttribKHR,
    &eglStreamConsumerAcquireKHR,
    &eglStreamConsumerGLTextureExternalAttribsNV,
    &eglStreamConsumerGLTextureExternalKHR,
    &eglStreamConsumerOutputEXT,
    &eglStreamConsumerReleaseAttribKHR,
    &eglStreamConsumerReleaseKHR,
    &eglSurfaceAttrib,
    &eglSwapBuffers,
    &eglSwapBuffersRegion2NOK,
    &eglSwapBuffersRegionNOK,
    &eglSwapBuffersWithDamageEXT,
    &eglSwapBuffersWithDamageKHR,
    &eglSwapInterval,
    &eglTerminate,
    &eglUnlockSurfaceKHR,
    &eglWaitClient,
    &eglWaitGL,
    &eglWaitNative,
    &eglWaitSync,
    &eglWaitSyncKHR
}};


} // namespace eglbinding
