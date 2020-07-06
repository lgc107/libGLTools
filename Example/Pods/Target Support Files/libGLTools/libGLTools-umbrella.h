#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "glew.h"
#import "glxew.h"
#import "wglew.h"
#import "GLBatch.h"
#import "GLBatchBase.h"
#import "GLFrame.h"
#import "GLFrustum.h"
#import "GLGeometryTransform.h"
#import "GLMatrixStack.h"
#import "GLShaderManager.h"
#import "GLTools.h"
#import "GLTriangleBatch.h"
#import "math3d.h"
#import "StopWatch.h"

FOUNDATION_EXPORT double libGLToolsVersionNumber;
FOUNDATION_EXPORT const unsigned char libGLToolsVersionString[];

