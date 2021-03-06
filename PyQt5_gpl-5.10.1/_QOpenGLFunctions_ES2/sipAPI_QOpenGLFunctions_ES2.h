/*
 * Internal module API header file.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __QOpenGLFunctions_ES2API_H
#define __QOpenGLFunctions_ES2API_H

#if !defined(Py_LIMITED_API)
#define Py_LIMITED_API
#endif

#include <sip.h>

#include <QMetaType>
#include <QThread>

/* These are the qualifiers that are enabled. */
#define SIP_FEATURE_PyQt_MacOSXOnly
#define SIP_FEATURE_PyQt_Process
#define SIP_FEATURE_PyQt_NotBootstrapped
#define SIP_FEATURE_PyQt_OpenGL
#define SIP_FEATURE_PyQt_RawFont
#define SIP_FEATURE_PyQt_PrintPreviewDialog
#define SIP_FEATURE_PyQt_PrintPreviewWidget
#define SIP_FEATURE_PyQt_Printer
#define SIP_FEATURE_PyQt_PrintDialog
#define SIP_FEATURE_Py_v3
#define SIP_FEATURE_PyQt_qreal_double
#define SIP_FEATURE_PyQt_SSL
#define SIP_FEATURE_PyQt_SessionManager
#define SIP_FEATURE_PyQt_Accessibility
#define SIP_PLATFORM_WS_X11
#define SIP_TIMELINE_Qt_5_7_1


/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_glGetFramebufferAttachmentParameteriv 0
#define sipName_glGetFramebufferAttachmentParameteriv &sipStrings__QOpenGLFunctions_ES2[0]
#define sipNameNr_glGetRenderbufferParameteriv 38
#define sipName_glGetRenderbufferParameteriv &sipStrings__QOpenGLFunctions_ES2[38]
#define sipNameNr_PyQt5__QOpenGLFunctions_ES2 67
#define sipName_PyQt5__QOpenGLFunctions_ES2 &sipStrings__QOpenGLFunctions_ES2[67]
#define sipNameNr_glGetShaderPrecisionFormat 95
#define sipName_glGetShaderPrecisionFormat &sipStrings__QOpenGLFunctions_ES2[95]
#define sipNameNr_glDisableVertexAttribArray 122
#define sipName_glDisableVertexAttribArray &sipStrings__QOpenGLFunctions_ES2[122]
#define sipNameNr_glFramebufferRenderbuffer 149
#define sipName_glFramebufferRenderbuffer &sipStrings__QOpenGLFunctions_ES2[149]
#define sipNameNr_glEnableVertexAttribArray 175
#define sipName_glEnableVertexAttribArray &sipStrings__QOpenGLFunctions_ES2[175]
#define sipNameNr_glCompressedTexSubImage2D 201
#define sipName_glCompressedTexSubImage2D &sipStrings__QOpenGLFunctions_ES2[201]
#define sipNameNr_initializeOpenGLFunctions 227
#define sipName_initializeOpenGLFunctions &sipStrings__QOpenGLFunctions_ES2[227]
#define sipNameNr_glCheckFramebufferStatus 253
#define sipName_glCheckFramebufferStatus &sipStrings__QOpenGLFunctions_ES2[253]
#define sipNameNr_glReleaseShaderCompiler 278
#define sipName_glReleaseShaderCompiler &sipStrings__QOpenGLFunctions_ES2[278]
#define sipNameNr_glBlendEquationSeparate 302
#define sipName_glBlendEquationSeparate &sipStrings__QOpenGLFunctions_ES2[302]
#define sipNameNr_glGetBufferParameteriv 326
#define sipName_glGetBufferParameteriv &sipStrings__QOpenGLFunctions_ES2[326]
#define sipNameNr_glFramebufferTexture2D 349
#define sipName_glFramebufferTexture2D &sipStrings__QOpenGLFunctions_ES2[349]
#define sipNameNr_glCompressedTexImage2D 372
#define sipName_glCompressedTexImage2D &sipStrings__QOpenGLFunctions_ES2[372]
#define sipNameNr_glVertexAttribPointer 395
#define sipName_glVertexAttribPointer &sipStrings__QOpenGLFunctions_ES2[395]
#define sipNameNr_glStencilMaskSeparate 417
#define sipName_glStencilMaskSeparate &sipStrings__QOpenGLFunctions_ES2[417]
#define sipNameNr_glStencilFuncSeparate 439
#define sipName_glStencilFuncSeparate &sipStrings__QOpenGLFunctions_ES2[439]
#define sipNameNr_glRenderbufferStorage 461
#define sipName_glRenderbufferStorage &sipStrings__QOpenGLFunctions_ES2[461]
#define sipNameNr_glDeleteRenderbuffers 483
#define sipName_glDeleteRenderbuffers &sipStrings__QOpenGLFunctions_ES2[483]
#define sipNameNr_glGetUniformLocation 505
#define sipName_glGetUniformLocation &sipStrings__QOpenGLFunctions_ES2[505]
#define sipNameNr_glGetAttachedShaders 526
#define sipName_glGetAttachedShaders &sipStrings__QOpenGLFunctions_ES2[526]
#define sipNameNr_glDeleteFramebuffers 547
#define sipName_glDeleteFramebuffers &sipStrings__QOpenGLFunctions_ES2[547]
#define sipNameNr_glBindAttribLocation 568
#define sipName_glBindAttribLocation &sipStrings__QOpenGLFunctions_ES2[568]
#define sipNameNr_QOpenGLFunctions_ES2 74
#define sipName_QOpenGLFunctions_ES2 &sipStrings__QOpenGLFunctions_ES2[74]
#define sipNameNr_glStencilOpSeparate 589
#define sipName_glStencilOpSeparate &sipStrings__QOpenGLFunctions_ES2[589]
#define sipNameNr_glGetVertexAttribiv 609
#define sipName_glGetVertexAttribiv &sipStrings__QOpenGLFunctions_ES2[609]
#define sipNameNr_glGetVertexAttribfv 629
#define sipName_glGetVertexAttribfv &sipStrings__QOpenGLFunctions_ES2[629]
#define sipNameNr_glGetTexParameteriv 649
#define sipName_glGetTexParameteriv &sipStrings__QOpenGLFunctions_ES2[649]
#define sipNameNr_glGetTexParameterfv 669
#define sipName_glGetTexParameterfv &sipStrings__QOpenGLFunctions_ES2[669]
#define sipNameNr_glGetProgramInfoLog 689
#define sipName_glGetProgramInfoLog &sipStrings__QOpenGLFunctions_ES2[689]
#define sipNameNr_glGetAttribLocation 709
#define sipName_glGetAttribLocation &sipStrings__QOpenGLFunctions_ES2[709]
#define sipNameNr_glCopyTexSubImage2D 729
#define sipName_glCopyTexSubImage2D &sipStrings__QOpenGLFunctions_ES2[729]
#define sipNameNr_glBlendFuncSeparate 749
#define sipName_glBlendFuncSeparate &sipStrings__QOpenGLFunctions_ES2[749]
#define sipNameNr_glUniformMatrix4fv 769
#define sipName_glUniformMatrix4fv &sipStrings__QOpenGLFunctions_ES2[769]
#define sipNameNr_glUniformMatrix3fv 788
#define sipName_glUniformMatrix3fv &sipStrings__QOpenGLFunctions_ES2[788]
#define sipNameNr_glUniformMatrix2fv 807
#define sipName_glUniformMatrix2fv &sipStrings__QOpenGLFunctions_ES2[807]
#define sipNameNr_glGetShaderInfoLog 826
#define sipName_glGetShaderInfoLog &sipStrings__QOpenGLFunctions_ES2[826]
#define sipNameNr_glGetActiveUniform 845
#define sipName_glGetActiveUniform &sipStrings__QOpenGLFunctions_ES2[845]
#define sipNameNr_glGenRenderbuffers 864
#define sipName_glGenRenderbuffers &sipStrings__QOpenGLFunctions_ES2[864]
#define sipNameNr_glBindRenderbuffer 883
#define sipName_glBindRenderbuffer &sipStrings__QOpenGLFunctions_ES2[883]
#define sipNameNr_glVertexAttrib4fv 902
#define sipName_glVertexAttrib4fv &sipStrings__QOpenGLFunctions_ES2[902]
#define sipNameNr_glVertexAttrib3fv 920
#define sipName_glVertexAttrib3fv &sipStrings__QOpenGLFunctions_ES2[920]
#define sipNameNr_glVertexAttrib2fv 938
#define sipName_glVertexAttrib2fv &sipStrings__QOpenGLFunctions_ES2[938]
#define sipNameNr_glVertexAttrib1fv 956
#define sipName_glVertexAttrib1fv &sipStrings__QOpenGLFunctions_ES2[956]
#define sipNameNr_glValidateProgram 974
#define sipName_glValidateProgram &sipStrings__QOpenGLFunctions_ES2[974]
#define sipNameNr_glGetShaderSource 992
#define sipName_glGetShaderSource &sipStrings__QOpenGLFunctions_ES2[992]
#define sipNameNr_glGetActiveAttrib 1010
#define sipName_glGetActiveAttrib &sipStrings__QOpenGLFunctions_ES2[1010]
#define sipNameNr_glGenFramebuffers 1028
#define sipName_glGenFramebuffers &sipStrings__QOpenGLFunctions_ES2[1028]
#define sipNameNr_glBindFramebuffer 1046
#define sipName_glBindFramebuffer &sipStrings__QOpenGLFunctions_ES2[1046]
#define sipNameNr_glVertexAttrib4f 1064
#define sipName_glVertexAttrib4f &sipStrings__QOpenGLFunctions_ES2[1064]
#define sipNameNr_glVertexAttrib3f 1081
#define sipName_glVertexAttrib3f &sipStrings__QOpenGLFunctions_ES2[1081]
#define sipNameNr_glVertexAttrib2f 1098
#define sipName_glVertexAttrib2f &sipStrings__QOpenGLFunctions_ES2[1098]
#define sipNameNr_glVertexAttrib1f 1115
#define sipName_glVertexAttrib1f &sipStrings__QOpenGLFunctions_ES2[1115]
#define sipNameNr_glTexParameteriv 1132
#define sipName_glTexParameteriv &sipStrings__QOpenGLFunctions_ES2[1132]
#define sipNameNr_glTexParameterfv 1149
#define sipName_glTexParameterfv &sipStrings__QOpenGLFunctions_ES2[1149]
#define sipNameNr_glSampleCoverage 1166
#define sipName_glSampleCoverage &sipStrings__QOpenGLFunctions_ES2[1166]
#define sipNameNr_glIsRenderbuffer 1183
#define sipName_glIsRenderbuffer &sipStrings__QOpenGLFunctions_ES2[1183]
#define sipNameNr_glGenerateMipmap 1200
#define sipName_glGenerateMipmap &sipStrings__QOpenGLFunctions_ES2[1200]
#define sipNameNr_glDeleteTextures 1217
#define sipName_glDeleteTextures &sipStrings__QOpenGLFunctions_ES2[1217]
#define sipNameNr_glCopyTexImage2D 1234
#define sipName_glCopyTexImage2D &sipStrings__QOpenGLFunctions_ES2[1234]
#define sipNameNr_glTexSubImage2D 1251
#define sipName_glTexSubImage2D &sipStrings__QOpenGLFunctions_ES2[1251]
#define sipNameNr_glTexParameteri 1267
#define sipName_glTexParameteri &sipStrings__QOpenGLFunctions_ES2[1267]
#define sipNameNr_glTexParameterf 1283
#define sipName_glTexParameterf &sipStrings__QOpenGLFunctions_ES2[1283]
#define sipNameNr_glPolygonOffset 1299
#define sipName_glPolygonOffset &sipStrings__QOpenGLFunctions_ES2[1299]
#define sipNameNr_glIsFramebuffer 1315
#define sipName_glIsFramebuffer &sipStrings__QOpenGLFunctions_ES2[1315]
#define sipNameNr_glDeleteProgram 1331
#define sipName_glDeleteProgram &sipStrings__QOpenGLFunctions_ES2[1331]
#define sipNameNr_glDeleteBuffers 1347
#define sipName_glDeleteBuffers &sipStrings__QOpenGLFunctions_ES2[1347]
#define sipNameNr_glCreateProgram 1363
#define sipName_glCreateProgram &sipStrings__QOpenGLFunctions_ES2[1363]
#define sipNameNr_glCompileShader 1379
#define sipName_glCompileShader &sipStrings__QOpenGLFunctions_ES2[1379]
#define sipNameNr_glBufferSubData 1395
#define sipName_glBufferSubData &sipStrings__QOpenGLFunctions_ES2[1395]
#define sipNameNr_glBlendEquation 1411
#define sipName_glBlendEquation &sipStrings__QOpenGLFunctions_ES2[1411]
#define sipNameNr_glActiveTexture 1427
#define sipName_glActiveTexture &sipStrings__QOpenGLFunctions_ES2[1427]
#define sipNameNr_internal_format 1443
#define sipName_internal_format &sipStrings__QOpenGLFunctions_ES2[1443]
#define sipNameNr_aspectRatioMode 1459
#define sipName_aspectRatioMode &sipStrings__QOpenGLFunctions_ES2[1459]
#define sipNameNr_glGetProgramiv 1475
#define sipName_glGetProgramiv &sipStrings__QOpenGLFunctions_ES2[1475]
#define sipNameNr_glDrawElements 1490
#define sipName_glDrawElements &sipStrings__QOpenGLFunctions_ES2[1490]
#define sipNameNr_glDetachShader 1505
#define sipName_glDetachShader &sipStrings__QOpenGLFunctions_ES2[1505]
#define sipNameNr_glDeleteShader 1520
#define sipName_glDeleteShader &sipStrings__QOpenGLFunctions_ES2[1520]
#define sipNameNr_glCreateShader 1535
#define sipName_glCreateShader &sipStrings__QOpenGLFunctions_ES2[1535]
#define sipNameNr_glClearStencil 1550
#define sipName_glClearStencil &sipStrings__QOpenGLFunctions_ES2[1550]
#define sipNameNr_glAttachShader 1565
#define sipName_glAttachShader &sipStrings__QOpenGLFunctions_ES2[1565]
#define sipNameNr_glStencilMask 1580
#define sipName_glStencilMask &sipStrings__QOpenGLFunctions_ES2[1580]
#define sipNameNr_glStencilFunc 1594
#define sipName_glStencilFunc &sipStrings__QOpenGLFunctions_ES2[1594]
#define sipNameNr_glPixelStorei 1608
#define sipName_glPixelStorei &sipStrings__QOpenGLFunctions_ES2[1608]
#define sipNameNr_glLinkProgram 1622
#define sipName_glLinkProgram &sipStrings__QOpenGLFunctions_ES2[1622]
#define sipNameNr_glGetShaderiv 1636
#define sipName_glGetShaderiv &sipStrings__QOpenGLFunctions_ES2[1636]
#define sipNameNr_glGetIntegerv 1650
#define sipName_glGetIntegerv &sipStrings__QOpenGLFunctions_ES2[1650]
#define sipNameNr_glGetBooleanv 1664
#define sipName_glGetBooleanv &sipStrings__QOpenGLFunctions_ES2[1664]
#define sipNameNr_glGenTextures 1678
#define sipName_glGenTextures &sipStrings__QOpenGLFunctions_ES2[1678]
#define sipNameNr_glDepthRangef 1692
#define sipName_glDepthRangef &sipStrings__QOpenGLFunctions_ES2[1692]
#define sipNameNr_glClearDepthf 1706
#define sipName_glClearDepthf &sipStrings__QOpenGLFunctions_ES2[1706]
#define sipNameNr_glBindTexture 1720
#define sipName_glBindTexture &sipStrings__QOpenGLFunctions_ES2[1720]
#define sipNameNr_transformMode 1734
#define sipName_transformMode &sipStrings__QOpenGLFunctions_ES2[1734]
#define sipNameNr_glUseProgram 1748
#define sipName_glUseProgram &sipStrings__QOpenGLFunctions_ES2[1748]
#define sipNameNr_glUniform4iv 1761
#define sipName_glUniform4iv &sipStrings__QOpenGLFunctions_ES2[1761]
#define sipNameNr_glUniform4fv 1774
#define sipName_glUniform4fv &sipStrings__QOpenGLFunctions_ES2[1774]
#define sipNameNr_glUniform3iv 1787
#define sipName_glUniform3iv &sipStrings__QOpenGLFunctions_ES2[1787]
#define sipNameNr_glUniform3fv 1800
#define sipName_glUniform3fv &sipStrings__QOpenGLFunctions_ES2[1800]
#define sipNameNr_glUniform2iv 1813
#define sipName_glUniform2iv &sipStrings__QOpenGLFunctions_ES2[1813]
#define sipNameNr_glUniform2fv 1826
#define sipName_glUniform2fv &sipStrings__QOpenGLFunctions_ES2[1826]
#define sipNameNr_glUniform1iv 1839
#define sipName_glUniform1iv &sipStrings__QOpenGLFunctions_ES2[1839]
#define sipNameNr_glUniform1fv 1852
#define sipName_glUniform1fv &sipStrings__QOpenGLFunctions_ES2[1852]
#define sipNameNr_glTexImage2D 1865
#define sipName_glTexImage2D &sipStrings__QOpenGLFunctions_ES2[1865]
#define sipNameNr_glGenBuffers 1878
#define sipName_glGenBuffers &sipStrings__QOpenGLFunctions_ES2[1878]
#define sipNameNr_glDrawArrays 1891
#define sipName_glDrawArrays &sipStrings__QOpenGLFunctions_ES2[1891]
#define sipNameNr_glClearColor 1904
#define sipName_glClearColor &sipStrings__QOpenGLFunctions_ES2[1904]
#define sipNameNr_glBufferData 1917
#define sipName_glBufferData &sipStrings__QOpenGLFunctions_ES2[1917]
#define sipNameNr_glBlendColor 1930
#define sipName_glBlendColor &sipStrings__QOpenGLFunctions_ES2[1930]
#define sipNameNr_glBindBuffer 1943
#define sipName_glBindBuffer &sipStrings__QOpenGLFunctions_ES2[1943]
#define sipNameNr_boundingRect 1956
#define sipName_boundingRect &sipStrings__QOpenGLFunctions_ES2[1956]
#define sipNameNr_glUniform4i 1969
#define sipName_glUniform4i &sipStrings__QOpenGLFunctions_ES2[1969]
#define sipNameNr_glUniform4f 1981
#define sipName_glUniform4f &sipStrings__QOpenGLFunctions_ES2[1981]
#define sipNameNr_glUniform3i 1993
#define sipName_glUniform3i &sipStrings__QOpenGLFunctions_ES2[1993]
#define sipNameNr_glUniform3f 2005
#define sipName_glUniform3f &sipStrings__QOpenGLFunctions_ES2[2005]
#define sipNameNr_glUniform2i 2017
#define sipName_glUniform2i &sipStrings__QOpenGLFunctions_ES2[2017]
#define sipNameNr_glUniform2f 2029
#define sipName_glUniform2f &sipStrings__QOpenGLFunctions_ES2[2029]
#define sipNameNr_glUniform1i 2041
#define sipName_glUniform1i &sipStrings__QOpenGLFunctions_ES2[2041]
#define sipNameNr_glUniform1f 2053
#define sipName_glUniform1f &sipStrings__QOpenGLFunctions_ES2[2053]
#define sipNameNr_glStencilOp 2065
#define sipName_glStencilOp &sipStrings__QOpenGLFunctions_ES2[2065]
#define sipNameNr_glLineWidth 2077
#define sipName_glLineWidth &sipStrings__QOpenGLFunctions_ES2[2077]
#define sipNameNr_glIsTexture 2089
#define sipName_glIsTexture &sipStrings__QOpenGLFunctions_ES2[2089]
#define sipNameNr_glIsProgram 2101
#define sipName_glIsProgram &sipStrings__QOpenGLFunctions_ES2[2101]
#define sipNameNr_glIsEnabled 2113
#define sipName_glIsEnabled &sipStrings__QOpenGLFunctions_ES2[2113]
#define sipNameNr_glGetString 2125
#define sipName_glGetString &sipStrings__QOpenGLFunctions_ES2[2125]
#define sipNameNr_glGetFloatv 2137
#define sipName_glGetFloatv &sipStrings__QOpenGLFunctions_ES2[2137]
#define sipNameNr_glFrontFace 2149
#define sipName_glFrontFace &sipStrings__QOpenGLFunctions_ES2[2149]
#define sipNameNr_glDepthMask 2161
#define sipName_glDepthMask &sipStrings__QOpenGLFunctions_ES2[2161]
#define sipNameNr_glDepthFunc 2173
#define sipName_glDepthFunc &sipStrings__QOpenGLFunctions_ES2[2173]
#define sipNameNr_glColorMask 2185
#define sipName_glColorMask &sipStrings__QOpenGLFunctions_ES2[2185]
#define sipNameNr_glBlendFunc 2197
#define sipName_glBlendFunc &sipStrings__QOpenGLFunctions_ES2[2197]
#define sipNameNr_matchPolicy 2209
#define sipName_matchPolicy &sipStrings__QOpenGLFunctions_ES2[2209]
#define sipNameNr_glViewport 2221
#define sipName_glViewport &sipStrings__QOpenGLFunctions_ES2[2221]
#define sipNameNr_glIsShader 2232
#define sipName_glIsShader &sipStrings__QOpenGLFunctions_ES2[2232]
#define sipNameNr_glIsBuffer 2243
#define sipName_glIsBuffer &sipStrings__QOpenGLFunctions_ES2[2243]
#define sipNameNr_glGetError 2254
#define sipName_glGetError &sipStrings__QOpenGLFunctions_ES2[2254]
#define sipNameNr_glCullFace 2265
#define sipName_glCullFace &sipStrings__QOpenGLFunctions_ES2[2265]
#define sipNameNr_genMipMaps 2276
#define sipName_genMipMaps &sipStrings__QOpenGLFunctions_ES2[2276]
#define sipNameNr_glScissor 2287
#define sipName_glScissor &sipStrings__QOpenGLFunctions_ES2[2287]
#define sipNameNr_glDisable 2297
#define sipName_glDisable &sipStrings__QOpenGLFunctions_ES2[2297]
#define sipNameNr_operation 2307
#define sipName_operation &sipStrings__QOpenGLFunctions_ES2[2307]
#define sipNameNr_directory 2317
#define sipName_directory &sipStrings__QOpenGLFunctions_ES2[2317]
#define sipNameNr_alignment 2327
#define sipName_alignment &sipStrings__QOpenGLFunctions_ES2[2327]
#define sipNameNr_precision 2337
#define sipName_precision &sipStrings__QOpenGLFunctions_ES2[2337]
#define sipNameNr_glFinish 2347
#define sipName_glFinish &sipStrings__QOpenGLFunctions_ES2[2347]
#define sipNameNr_glEnable 2356
#define sipName_glEnable &sipStrings__QOpenGLFunctions_ES2[2356]
#define sipNameNr_fillRule 2365
#define sipName_fillRule &sipStrings__QOpenGLFunctions_ES2[2365]
#define sipNameNr_tabArray 2374
#define sipName_tabArray &sipStrings__QOpenGLFunctions_ES2[2374]
#define sipNameNr_tabStops 2383
#define sipName_tabStops &sipStrings__QOpenGLFunctions_ES2[2383]
#define sipNameNr_nameType 2392
#define sipName_nameType &sipStrings__QOpenGLFunctions_ES2[2392]
#define sipNameNr_position 2401
#define sipName_position &sipStrings__QOpenGLFunctions_ES2[2401]
#define sipNameNr_glFlush 2410
#define sipName_glFlush &sipStrings__QOpenGLFunctions_ES2[2410]
#define sipNameNr_glClear 2418
#define sipName_glClear &sipStrings__QOpenGLFunctions_ES2[2418]
#define sipNameNr_exposed 2426
#define sipName_exposed &sipStrings__QOpenGLFunctions_ES2[2426]
#define sipNameNr_buffers 497
#define sipName_buffers &sipStrings__QOpenGLFunctions_ES2[497]
#define sipNameNr_sources 2434
#define sipName_sources &sipStrings__QOpenGLFunctions_ES2[2434]
#define sipNameNr_quality 2442
#define sipName_quality &sipStrings__QOpenGLFunctions_ES2[2442]
#define sipNameNr_filters 2450
#define sipName_filters &sipStrings__QOpenGLFunctions_ES2[2450]
#define sipNameNr_options 2458
#define sipName_options &sipStrings__QOpenGLFunctions_ES2[2458]
#define sipNameNr_glHint 2466
#define sipName_glHint &sipStrings__QOpenGLFunctions_ES2[2466]
#define sipNameNr_stride 2473
#define sipName_stride &sipStrings__QOpenGLFunctions_ES2[2473]
#define sipNameNr_proper 2480
#define sipName_proper &sipStrings__QOpenGLFunctions_ES2[2480]
#define sipNameNr_value9 2487
#define sipName_value9 &sipStrings__QOpenGLFunctions_ES2[2487]
#define sipNameNr_value8 2494
#define sipName_value8 &sipStrings__QOpenGLFunctions_ES2[2494]
#define sipNameNr_value7 2501
#define sipName_value7 &sipStrings__QOpenGLFunctions_ES2[2501]
#define sipNameNr_value6 2508
#define sipName_value6 &sipStrings__QOpenGLFunctions_ES2[2508]
#define sipNameNr_value5 2515
#define sipName_value5 &sipStrings__QOpenGLFunctions_ES2[2515]
#define sipNameNr_value4 2522
#define sipName_value4 &sipStrings__QOpenGLFunctions_ES2[2522]
#define sipNameNr_value3 2529
#define sipName_value3 &sipStrings__QOpenGLFunctions_ES2[2529]
#define sipNameNr_value2 2536
#define sipName_value2 &sipStrings__QOpenGLFunctions_ES2[2536]
#define sipNameNr_value1 2543
#define sipName_value1 &sipStrings__QOpenGLFunctions_ES2[2543]
#define sipNameNr_value0 2550
#define sipName_value0 &sipStrings__QOpenGLFunctions_ES2[2550]
#define sipNameNr_symbol 2557
#define sipName_symbol &sipStrings__QOpenGLFunctions_ES2[2557]
#define sipNameNr_suffix 2564
#define sipName_suffix &sipStrings__QOpenGLFunctions_ES2[2564]
#define sipNameNr_prefix 2571
#define sipName_prefix &sipStrings__QOpenGLFunctions_ES2[2571]
#define sipNameNr_filter 2578
#define sipName_filter &sipStrings__QOpenGLFunctions_ES2[2578]
#define sipNameNr_option 2585
#define sipName_option &sipStrings__QOpenGLFunctions_ES2[2585]
#define sipNameNr_locale 2592
#define sipName_locale &sipStrings__QOpenGLFunctions_ES2[2592]
#define sipNameNr_format 1452
#define sipName_format &sipStrings__QOpenGLFunctions_ES2[1452]
#define sipNameNr_types 2599
#define sipName_types &sipStrings__QOpenGLFunctions_ES2[2599]
#define sipNameNr_flags 2605
#define sipName_flags &sipStrings__QOpenGLFunctions_ES2[2605]
#define sipNameNr_msecs 2611
#define sipName_msecs &sipStrings__QOpenGLFunctions_ES2[2611]
#define sipNameNr_state 2617
#define sipName_state &sipStrings__QOpenGLFunctions_ES2[2617]
#define sipNameNr_mode 2623
#define sipName_mode &sipStrings__QOpenGLFunctions_ES2[2623]
#define sipNameNr_name 2628
#define sipName_name &sipStrings__QOpenGLFunctions_ES2[2628]
#define sipNameNr_base 2633
#define sipName_base &sipStrings__QOpenGLFunctions_ES2[2633]
#define sipNameNr_from 2638
#define sipName_from &sipStrings__QOpenGLFunctions_ES2[2638]
#define sipNameNr_sort 2643
#define sipName_sort &sipStrings__QOpenGLFunctions_ES2[2643]
#define sipNameNr_pos 2648
#define sipName_pos &sipStrings__QOpenGLFunctions_ES2[2648]
#define sipNameNr_sw 2652
#define sipName_sw &sipStrings__QOpenGLFunctions_ES2[2652]
#define sipNameNr_sh 2353
#define sipName_sh &sipStrings__QOpenGLFunctions_ES2[2353]
#define sipNameNr_sy 2655
#define sipName_sy &sipStrings__QOpenGLFunctions_ES2[2655]
#define sipNameNr_sx 2658
#define sipName_sx &sipStrings__QOpenGLFunctions_ES2[2658]

#define sipMalloc                   sipAPI__QOpenGLFunctions_ES2->api_malloc
#define sipFree                     sipAPI__QOpenGLFunctions_ES2->api_free
#define sipBuildResult              sipAPI__QOpenGLFunctions_ES2->api_build_result
#define sipCallMethod               sipAPI__QOpenGLFunctions_ES2->api_call_method
#define sipCallProcedureMethod      sipAPI__QOpenGLFunctions_ES2->api_call_procedure_method
#define sipCallErrorHandler         sipAPI__QOpenGLFunctions_ES2->api_call_error_handler
#define sipParseResultEx            sipAPI__QOpenGLFunctions_ES2->api_parse_result_ex
#define sipParseResult              sipAPI__QOpenGLFunctions_ES2->api_parse_result
#define sipParseArgs                sipAPI__QOpenGLFunctions_ES2->api_parse_args
#define sipParseKwdArgs             sipAPI__QOpenGLFunctions_ES2->api_parse_kwd_args
#define sipParsePair                sipAPI__QOpenGLFunctions_ES2->api_parse_pair
#define sipInstanceDestroyed        sipAPI__QOpenGLFunctions_ES2->api_instance_destroyed
#define sipInstanceDestroyedEx      sipAPI__QOpenGLFunctions_ES2->api_instance_destroyed_ex
#define sipConvertFromSequenceIndex sipAPI__QOpenGLFunctions_ES2->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI__QOpenGLFunctions_ES2->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI__QOpenGLFunctions_ES2->api_convert_to_void_ptr
#define sipAddException             sipAPI__QOpenGLFunctions_ES2->api_add_exception
#define sipNoFunction               sipAPI__QOpenGLFunctions_ES2->api_no_function
#define sipNoMethod                 sipAPI__QOpenGLFunctions_ES2->api_no_method
#define sipAbstractMethod           sipAPI__QOpenGLFunctions_ES2->api_abstract_method
#define sipBadClass                 sipAPI__QOpenGLFunctions_ES2->api_bad_class
#define sipBadCatcherResult         sipAPI__QOpenGLFunctions_ES2->api_bad_catcher_result
#define sipBadCallableArg           sipAPI__QOpenGLFunctions_ES2->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI__QOpenGLFunctions_ES2->api_bad_operator_arg
#define sipTrace                    sipAPI__QOpenGLFunctions_ES2->api_trace
#define sipTransferBack             sipAPI__QOpenGLFunctions_ES2->api_transfer_back
#define sipTransferTo               sipAPI__QOpenGLFunctions_ES2->api_transfer_to
#define sipTransferBreak            sipAPI__QOpenGLFunctions_ES2->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI__QOpenGLFunctions_ES2->api_simplewrapper_type
#define sipWrapper_Type             sipAPI__QOpenGLFunctions_ES2->api_wrapper_type
#define sipWrapperType_Type         sipAPI__QOpenGLFunctions_ES2->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI__QOpenGLFunctions_ES2->api_voidptr_type
#define sipGetPyObject              sipAPI__QOpenGLFunctions_ES2->api_get_pyobject
#define sipGetAddress               sipAPI__QOpenGLFunctions_ES2->api_get_address
#define sipGetMixinAddress          sipAPI__QOpenGLFunctions_ES2->api_get_mixin_address
#define sipGetCppPtr                sipAPI__QOpenGLFunctions_ES2->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI__QOpenGLFunctions_ES2->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI__QOpenGLFunctions_ES2->api_is_py_method
#define sipCallHook                 sipAPI__QOpenGLFunctions_ES2->api_call_hook
#define sipEndThread                sipAPI__QOpenGLFunctions_ES2->api_end_thread
#define sipConnectRx                sipAPI__QOpenGLFunctions_ES2->api_connect_rx
#define sipDisconnectRx             sipAPI__QOpenGLFunctions_ES2->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI__QOpenGLFunctions_ES2->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI__QOpenGLFunctions_ES2->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI__QOpenGLFunctions_ES2->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI__QOpenGLFunctions_ES2->api_add_type_instance
#define sipFreeSipslot              sipAPI__QOpenGLFunctions_ES2->api_free_sipslot
#define sipSameSlot                 sipAPI__QOpenGLFunctions_ES2->api_same_slot
#define sipPySlotExtend             sipAPI__QOpenGLFunctions_ES2->api_pyslot_extend
#define sipConvertRx                sipAPI__QOpenGLFunctions_ES2->api_convert_rx
#define sipAddDelayedDtor           sipAPI__QOpenGLFunctions_ES2->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI__QOpenGLFunctions_ES2->api_can_convert_to_type
#define sipConvertToType            sipAPI__QOpenGLFunctions_ES2->api_convert_to_type
#define sipForceConvertToType       sipAPI__QOpenGLFunctions_ES2->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI__QOpenGLFunctions_ES2->api_can_convert_to_enum
#define sipConvertToEnum            sipAPI__QOpenGLFunctions_ES2->api_convert_to_enum
#define sipConvertToBool            sipAPI__QOpenGLFunctions_ES2->api_convert_to_bool
#define sipReleaseType              sipAPI__QOpenGLFunctions_ES2->api_release_type
#define sipConvertFromType          sipAPI__QOpenGLFunctions_ES2->api_convert_from_type
#define sipConvertFromNewType       sipAPI__QOpenGLFunctions_ES2->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI__QOpenGLFunctions_ES2->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI__QOpenGLFunctions_ES2->api_convert_from_enum
#define sipGetState                 sipAPI__QOpenGLFunctions_ES2->api_get_state
#define sipExportSymbol             sipAPI__QOpenGLFunctions_ES2->api_export_symbol
#define sipImportSymbol             sipAPI__QOpenGLFunctions_ES2->api_import_symbol
#define sipFindType                 sipAPI__QOpenGLFunctions_ES2->api_find_type
#define sipFindNamedEnum            sipAPI__QOpenGLFunctions_ES2->api_find_named_enum
#define sipBytes_AsChar             sipAPI__QOpenGLFunctions_ES2->api_bytes_as_char
#define sipBytes_AsString           sipAPI__QOpenGLFunctions_ES2->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI__QOpenGLFunctions_ES2->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI__QOpenGLFunctions_ES2->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI__QOpenGLFunctions_ES2->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI__QOpenGLFunctions_ES2->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI__QOpenGLFunctions_ES2->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI__QOpenGLFunctions_ES2->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI__QOpenGLFunctions_ES2->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI__QOpenGLFunctions_ES2->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI__QOpenGLFunctions_ES2->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI__QOpenGLFunctions_ES2->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI__QOpenGLFunctions_ES2->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI__QOpenGLFunctions_ES2->api_invoke_slot
#define sipInvokeSlotEx             sipAPI__QOpenGLFunctions_ES2->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI__QOpenGLFunctions_ES2->api_save_slot
#define sipClearAnySlotReference    sipAPI__QOpenGLFunctions_ES2->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI__QOpenGLFunctions_ES2->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->wt_td->td_cname)
#define sipDeprecated               sipAPI__QOpenGLFunctions_ES2->api_deprecated
#define sipGetReference             sipAPI__QOpenGLFunctions_ES2->api_get_reference
#define sipKeepReference            sipAPI__QOpenGLFunctions_ES2->api_keep_reference
#define sipRegisterProxyResolver    sipAPI__QOpenGLFunctions_ES2->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI__QOpenGLFunctions_ES2->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI__QOpenGLFunctions_ES2->api_type_from_py_type_object
#define sipTypeScope                sipAPI__QOpenGLFunctions_ES2->api_type_scope
#define sipResolveTypedef           sipAPI__QOpenGLFunctions_ES2->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI__QOpenGLFunctions_ES2->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI__QOpenGLFunctions_ES2->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI__QOpenGLFunctions_ES2->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI__QOpenGLFunctions_ES2->api_enable_autoconversion
#define sipEnableOverflowChecking   sipAPI__QOpenGLFunctions_ES2->api_enable_overflow_checking
#define sipInitMixin                sipAPI__QOpenGLFunctions_ES2->api_init_mixin
#define sipExportModule             sipAPI__QOpenGLFunctions_ES2->api_export_module
#define sipInitModule               sipAPI__QOpenGLFunctions_ES2->api_init_module
#define sipGetInterpreter           sipAPI__QOpenGLFunctions_ES2->api_get_interpreter
#define sipSetNewUserTypeHandler    sipAPI__QOpenGLFunctions_ES2->api_set_new_user_type_handler
#define sipSetTypeUserData          sipAPI__QOpenGLFunctions_ES2->api_set_type_user_data
#define sipGetTypeUserData          sipAPI__QOpenGLFunctions_ES2->api_get_type_user_data
#define sipPyTypeDict               sipAPI__QOpenGLFunctions_ES2->api_py_type_dict
#define sipPyTypeName               sipAPI__QOpenGLFunctions_ES2->api_py_type_name
#define sipGetCFunction             sipAPI__QOpenGLFunctions_ES2->api_get_c_function
#define sipGetMethod                sipAPI__QOpenGLFunctions_ES2->api_get_method
#define sipFromMethod               sipAPI__QOpenGLFunctions_ES2->api_from_method
#define sipGetDate                  sipAPI__QOpenGLFunctions_ES2->api_get_date
#define sipFromDate                 sipAPI__QOpenGLFunctions_ES2->api_from_date
#define sipGetDateTime              sipAPI__QOpenGLFunctions_ES2->api_get_datetime
#define sipFromDateTime             sipAPI__QOpenGLFunctions_ES2->api_from_datetime
#define sipGetTime                  sipAPI__QOpenGLFunctions_ES2->api_get_time
#define sipFromTime                 sipAPI__QOpenGLFunctions_ES2->api_from_time
#define sipIsUserType               sipAPI__QOpenGLFunctions_ES2->api_is_user_type
#define sipGetFrame                 sipAPI__QOpenGLFunctions_ES2->api_get_frame
#define sipCheckPluginForType       sipAPI__QOpenGLFunctions_ES2->api_check_plugin_for_type
#define sipUnicodeNew               sipAPI__QOpenGLFunctions_ES2->api_unicode_new
#define sipUnicodeWrite             sipAPI__QOpenGLFunctions_ES2->api_unicode_write
#define sipUnicodeData              sipAPI__QOpenGLFunctions_ES2->api_unicode_data
#define sipGetBufferInfo            sipAPI__QOpenGLFunctions_ES2->api_get_buffer_info
#define sipReleaseBufferInfo        sipAPI__QOpenGLFunctions_ES2->api_release_buffer_info
#define sipIsOwnedByPython          sipAPI__QOpenGLFunctions_ES2->api_is_owned_by_python
#define sipIsDerivedClass           sipAPI__QOpenGLFunctions_ES2->api_is_derived_class
#define sipGetUserObject            sipAPI__QOpenGLFunctions_ES2->api_get_user_object
#define sipSetUserObject            sipAPI__QOpenGLFunctions_ES2->api_set_user_object
#define sipRegisterEventHandler     sipAPI__QOpenGLFunctions_ES2->api_register_event_handler
#define sipLong_AsChar              sipAPI__QOpenGLFunctions_ES2->api_long_as_char
#define sipLong_AsSignedChar        sipAPI__QOpenGLFunctions_ES2->api_long_as_signed_char
#define sipLong_AsUnsignedChar      sipAPI__QOpenGLFunctions_ES2->api_long_as_unsigned_char
#define sipLong_AsShort             sipAPI__QOpenGLFunctions_ES2->api_long_as_short
#define sipLong_AsUnsignedShort     sipAPI__QOpenGLFunctions_ES2->api_long_as_unsigned_short
#define sipLong_AsInt               sipAPI__QOpenGLFunctions_ES2->api_long_as_int
#define sipLong_AsUnsignedInt       sipAPI__QOpenGLFunctions_ES2->api_long_as_unsigned_int
#define sipLong_AsLong              sipAPI__QOpenGLFunctions_ES2->api_long_as_long
#define sipLong_AsUnsignedLong      sipAPI__QOpenGLFunctions_ES2->api_long_as_unsigned_long
#define sipLong_AsLongLong          sipAPI__QOpenGLFunctions_ES2->api_long_as_long_long
#define sipLong_AsUnsignedLongLong  sipAPI__QOpenGLFunctions_ES2->api_long_as_unsigned_long_long

/* These are deprecated. */
#define sipMapStringToClass         sipAPI__QOpenGLFunctions_ES2->api_map_string_to_class
#define sipMapIntToClass            sipAPI__QOpenGLFunctions_ES2->api_map_int_to_class
#define sipFindClass                sipAPI__QOpenGLFunctions_ES2->api_find_class
#define sipFindMappedType           sipAPI__QOpenGLFunctions_ES2->api_find_mapped_type
#define sipConvertToArray           sipAPI__QOpenGLFunctions_ES2->api_convert_to_array
#define sipConvertToTypedArray      sipAPI__QOpenGLFunctions_ES2->api_convert_to_typed_array
#define sipEnableGC                 sipAPI__QOpenGLFunctions_ES2->api_enable_gc
#define sipPrintObject              sipAPI__QOpenGLFunctions_ES2->api_print_object
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI__QOpenGLFunctions_ES2->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->wt_td)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->wt_td, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->wt_td, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->wt_td, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->wt_td, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->wt_td, (t))

/* The strings used by this module. */
extern const char sipStrings__QOpenGLFunctions_ES2[];

#define sipType_QOpenGLFunctions_ES2 sipExportedTypes__QOpenGLFunctions_ES2[0]
#define sipClass_QOpenGLFunctions_ES2 sipExportedTypes__QOpenGLFunctions_ES2[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef__QOpenGLFunctions_ES2_QOpenGLFunctions_ES2;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI__QOpenGLFunctions_ES2;
extern sipExportedModuleDef sipModuleAPI__QOpenGLFunctions_ES2;
extern sipTypeDef *sipExportedTypes__QOpenGLFunctions_ES2[];

#define sipType_QAbstractOpenGLFunctions sipImportedTypes__QOpenGLFunctions_ES2_QtGui[0].it_td
#define sipClass_QAbstractOpenGLFunctions sipImportedTypes__QOpenGLFunctions_ES2_QtGui[0].it_td->u.td_wrapper_type
extern sipImportedTypeDef sipImportedTypes__QOpenGLFunctions_ES2_QtGui[];

typedef const QMetaObject *(*sip_qt_metaobject_func)(sipSimpleWrapper *,sipTypeDef *);
extern sip_qt_metaobject_func sip__QOpenGLFunctions_ES2_qt_metaobject;

typedef int (*sip_qt_metacall_func)(sipSimpleWrapper *,sipTypeDef *,QMetaObject::Call,int,void **);
extern sip_qt_metacall_func sip__QOpenGLFunctions_ES2_qt_metacall;

typedef bool (*sip_qt_metacast_func)(sipSimpleWrapper *, const sipTypeDef *, const char *, void **);
extern sip_qt_metacast_func sip__QOpenGLFunctions_ES2_qt_metacast;
#line 775 "/home/pi/PyQt5_gpl-5.10.1/sip/_QOpenGLFunctions_ES2/qopenglfunctions_es2.sip"
#include <qopengl.h>

// Imports from QtGui.
typedef const GLvoid *(*qpyopengl_value_array_t)(sipErrorState *, PyObject *, GLenum, PyObject *);
extern qpyopengl_value_array_t qpyopengl_value_array;

typedef const GLvoid *(*qpyopengl_value_array_cached_t)(sipErrorState *, PyObject *, GLenum, PyObject *, const char *, GLuint);
extern qpyopengl_value_array_cached_t qpyopengl_value_array_cached;

typedef GLint (*qpyopengl_get_t)(GLenum, GLenum *);
extern qpyopengl_get_t qpyopengl_get;

typedef PyObject *(*qpyopengl_from_GLint_t)(int *, const GLint *, Py_ssize_t);
extern qpyopengl_from_GLint_t qpyopengl_from_GLint;

typedef PyObject *(*qpyopengl_from_GLuint_t)(int *, const GLuint *, Py_ssize_t);
extern qpyopengl_from_GLuint_t qpyopengl_from_GLuint;

typedef PyObject *(*qpyopengl_from_GLboolean_t)(int *, const GLboolean *, Py_ssize_t);
extern qpyopengl_from_GLboolean_t qpyopengl_from_GLboolean;

typedef PyObject *(*qpyopengl_from_GLfloat_t)(int *, const GLfloat *, Py_ssize_t);
extern qpyopengl_from_GLfloat_t qpyopengl_from_GLfloat;
#line 662 "/home/pi/PyQt5_gpl-5.10.1/_QOpenGLFunctions_ES2/sipAPI_QOpenGLFunctions_ES2.h"

#endif
