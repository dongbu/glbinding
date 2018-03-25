
#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


const Binding::array_t Binding::s_functions =
{{
    &BindAPI,
    &BindTexImage,
    &ChooseConfig,
    &ClientWaitSync,
    &ClientWaitSyncKHR,
    &ClientWaitSyncNV,
    &CompositorBindTexWindowEXT,
    &CompositorSetContextAttributesEXT,
    &CompositorSetContextListEXT,
    &CompositorSetSizeEXT,
    &CompositorSetWindowAttributesEXT,
    &CompositorSetWindowListEXT,
    &CompositorSwapPolicyEXT,
    &CopyBuffers,
    &CreateContext,
    &CreateDRMImageMESA,
    &CreateFenceSyncNV,
    &CreateImage,
    &CreateImageKHR,
    &CreateNativeClientBufferANDROID,
    &CreatePbufferFromClientBuffer,
    &CreatePbufferSurface,
    &CreatePixmapSurface,
    &CreatePixmapSurfaceHI,
    &CreatePlatformPixmapSurface,
    &CreatePlatformPixmapSurfaceEXT,
    &CreatePlatformWindowSurface,
    &CreatePlatformWindowSurfaceEXT,
    &CreateStreamAttribKHR,
    &CreateStreamFromFileDescriptorKHR,
    &CreateStreamKHR,
    &CreateStreamProducerSurfaceKHR,
    &CreateStreamSyncNV,
    &CreateSync,
    &CreateSync64KHR,
    &CreateSyncKHR,
    &CreateWindowSurface,
    &DebugMessageControlKHR,
    &DestroyContext,
    &DestroyImage,
    &DestroyImageKHR,
    &DestroyStreamKHR,
    &DestroySurface,
    &DestroySync,
    &DestroySyncKHR,
    &DestroySyncNV,
    &DupNativeFenceFDANDROID,
    &ExportDMABUFImageMESA,
    &ExportDMABUFImageQueryMESA,
    &ExportDRMImageMESA,
    &FenceNV,
    &GetCompositorTimingANDROID,
    &GetCompositorTimingSupportedANDROID,
    &GetConfigAttrib,
    &GetConfigs,
    &GetCurrentContext,
    &GetCurrentDisplay,
    &GetCurrentSurface,
    &GetDisplay,
    &GetError,
    &GetFrameTimestampSupportedANDROID,
    &GetFrameTimestampsANDROID,
    &GetNativeClientBufferANDROID,
    &GetNextFrameIdANDROID,
    &GetOutputLayersEXT,
    &GetOutputPortsEXT,
    &GetPlatformDisplay,
    &GetPlatformDisplayEXT,
    &GetProcAddress,
    &GetStreamFileDescriptorKHR,
    &GetSyncAttrib,
    &GetSyncAttribKHR,
    &GetSyncAttribNV,
    &GetSystemTimeFrequencyNV,
    &GetSystemTimeNV,
    &Initialize,
    &LabelObjectKHR,
    &LockSurfaceKHR,
    &MakeCurrent,
    &OutputLayerAttribEXT,
    &OutputPortAttribEXT,
    &PostSubBufferNV,
    &PresentationTimeANDROID,
    &QueryAPI,
    &QueryContext,
    &QueryDebugKHR,
    &QueryDeviceAttribEXT,
    &QueryDeviceStringEXT,
    &QueryDevicesEXT,
    &QueryDisplayAttribEXT,
    &QueryDisplayAttribKHR,
    &QueryDisplayAttribNV,
    &QueryDmaBufFormatsEXT,
    &QueryDmaBufModifiersEXT,
    &QueryNativeDisplayNV,
    &QueryNativePixmapNV,
    &QueryNativeWindowNV,
    &QueryOutputLayerAttribEXT,
    &QueryOutputLayerStringEXT,
    &QueryOutputPortAttribEXT,
    &QueryOutputPortStringEXT,
    &QueryStreamAttribKHR,
    &QueryStreamKHR,
    &QueryStreamMetadataNV,
    &QueryStreamTimeKHR,
    &QueryStreamu64KHR,
    &QueryString,
    &QuerySurface,
    &QuerySurface64KHR,
    &QuerySurfacePointerANGLE,
    &ReleaseTexImage,
    &ReleaseThread,
    &ResetStreamNV,
    &SetBlobCacheFuncsANDROID,
    &SetDamageRegionKHR,
    &SetStreamAttribKHR,
    &SetStreamMetadataNV,
    &SignalSyncKHR,
    &SignalSyncNV,
    &StreamAttribKHR,
    &StreamConsumerAcquireAttribKHR,
    &StreamConsumerAcquireKHR,
    &StreamConsumerGLTextureExternalAttribsNV,
    &StreamConsumerGLTextureExternalKHR,
    &StreamConsumerOutputEXT,
    &StreamConsumerReleaseAttribKHR,
    &StreamConsumerReleaseKHR,
    &SurfaceAttrib,
    &SwapBuffers,
    &SwapBuffersRegion2NOK,
    &SwapBuffersRegionNOK,
    &SwapBuffersWithDamageEXT,
    &SwapBuffersWithDamageKHR,
    &SwapInterval,
    &Terminate,
    &UnlockSurfaceKHR,
    &WaitClient,
    &WaitGL,
    &WaitNative,
    &WaitSync,
    &WaitSyncKHR
}};


} // namespace eglbinding
