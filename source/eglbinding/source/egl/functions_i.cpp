
#include "../Binding_pch.h"

#include <eglbinding/egl/functions.h>


using namespace eglbinding;


namespace egl
{


EGLBoolean eglInitialize(EGLDisplay dpy, EGLint * major, EGLint * minor)
{
    return Binding::eglInitialize(dpy, major, minor);
}




} // namespace egl
