TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
CONFIG += release
CONFIG -= android_install
TARGET = QtGui

win32 {
    PY_MODULE = QtGui.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtGui.so

    macx {
        PY_MODULE_SRC = $(TARGET).plugin/Contents/MacOS/$(TARGET)

        QMAKE_LFLAGS += "-undefined dynamic_lookup"

        equals(QT_MINOR_VERSION, 5) {
            QMAKE_LFLAGS += "-framework QtPrintSupport -framework QtDBus -framework QtWidgets"
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
        }
    } else {
        PY_MODULE_SRC = $(TARGET)
    }
}

QMAKE_POST_LINK = $(COPY_FILE) $$PY_MODULE_SRC $$PY_MODULE

target.CONFIG = no_check_exist
target.files = $$PY_MODULE

target.path = /usr/lib/python3/dist-packages/PyQt5
INSTALLS += target
QMAKE_LFLAGS += -Wl,--version-script=QtGui.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
DEFINES += Py_LIMITED_API=0x03040000
INCLUDEPATH += ../qpy/QtGui
HEADERS = sipAPIQtGui.h ../qpy/QtGui/qpyopengl_api.h ../qpy/QtGui/qpyopengl_data_cache.h ../qpy/QtGui/qpyopengl_misc.h
SOURCES = sipQtGuiQAbstractOpenGLFunctions.cpp sipQtGuiQAbstractTextDocumentLayout.cpp sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp sipQtGuiQAbstractTextDocumentLayoutSelection.cpp sipQtGuiQActionEvent.cpp sipQtGuiQBackingStore.cpp sipQtGuiQBitmap.cpp sipQtGuiQBrush.cpp sipQtGuiQClipboard.cpp sipQtGuiQCloseEvent.cpp sipQtGuiQColor.cpp sipQtGuiQConicalGradient.cpp sipQtGuiQContextMenuEvent.cpp sipQtGuiQCursor.cpp sipQtGuiQDesktopServices.cpp sipQtGuiQDoubleValidator.cpp sipQtGuiQDrag.cpp sipQtGuiQDragEnterEvent.cpp sipQtGuiQDragLeaveEvent.cpp sipQtGuiQDragMoveEvent.cpp sipQtGuiQDropEvent.cpp sipQtGuiQEnterEvent.cpp sipQtGuiQExposeEvent.cpp sipQtGuiQFileOpenEvent.cpp sipQtGuiQFocusEvent.cpp sipQtGuiQFont.cpp sipQtGuiQFontDatabase.cpp sipQtGuiQFontInfo.cpp sipQtGuiQFontMetrics.cpp sipQtGuiQFontMetricsF.cpp sipQtGuiQGlyphRun.cpp sipQtGuiQGlyphRunGlyphRunFlags.cpp sipQtGuiQGradient.cpp sipQtGuiQGuiApplication.cpp sipQtGuiQHelpEvent.cpp sipQtGuiQHideEvent.cpp sipQtGuiQHoverEvent.cpp sipQtGuiQIcon.cpp sipQtGuiQIconDragEvent.cpp sipQtGuiQIconEngine.cpp sipQtGuiQIconEngineAvailableSizesArgument.cpp sipQtGuiQImage.cpp sipQtGuiQImageIOHandler.cpp sipQtGuiQImageIOHandlerTransformations.cpp sipQtGuiQImageReader.cpp sipQtGuiQImageWriter.cpp sipQtGuiQInputEvent.cpp sipQtGuiQInputMethod.cpp sipQtGuiQInputMethodEvent.cpp sipQtGuiQInputMethodEventAttribute.cpp sipQtGuiQInputMethodQueryEvent.cpp sipQtGuiQIntValidator.cpp sipQtGuiQKeyEvent.cpp sipQtGuiQKeySequence.cpp sipQtGuiQLinearGradient.cpp sipQtGuiQList0100QFontDatabaseWritingSystem.cpp sipQtGuiQList0100QGlyphRun.cpp sipQtGuiQList0100QInputMethodEventAttribute.cpp sipQtGuiQList0100QKeySequence.cpp sipQtGuiQList0100QOpenGLDebugMessage.cpp sipQtGuiQList0100QPolygonF.cpp sipQtGuiQList0100QSize.cpp sipQtGuiQList0100QTextBlock.cpp sipQtGuiQList0100QTextLayoutFormatRange.cpp sipQtGuiQList0100QTextOptionTab.cpp sipQtGuiQList0100QTouchEventTouchPoint.cpp sipQtGuiQList0101QOpenGLContext.cpp sipQtGuiQList0101QOpenGLShader.cpp sipQtGuiQList0101QScreen.cpp sipQtGuiQList0101QStandardItem.cpp sipQtGuiQList0101QTextFrame.cpp sipQtGuiQList0101QWindow.cpp sipQtGuiQList0111QTouchDevice.cpp sipQtGuiQMatrix2x2.cpp sipQtGuiQMatrix2x3.cpp sipQtGuiQMatrix2x4.cpp sipQtGuiQMatrix3x2.cpp sipQtGuiQMatrix3x3.cpp sipQtGuiQMatrix3x4.cpp sipQtGuiQMatrix4x2.cpp sipQtGuiQMatrix4x3.cpp sipQtGuiQMatrix4x4.cpp sipQtGuiQMouseEvent.cpp sipQtGuiQMoveEvent.cpp sipQtGuiQMovie.cpp sipQtGuiQNativeGestureEvent.cpp sipQtGuiQOffscreenSurface.cpp sipQtGuiQOpenGLBuffer.cpp sipQtGuiQOpenGLBufferRangeAccessFlags.cpp sipQtGuiQOpenGLContext.cpp sipQtGuiQOpenGLContextGroup.cpp sipQtGuiQOpenGLDebugLogger.cpp sipQtGuiQOpenGLDebugMessage.cpp sipQtGuiQOpenGLDebugMessageSeverities.cpp sipQtGuiQOpenGLDebugMessageSources.cpp sipQtGuiQOpenGLDebugMessageTypes.cpp sipQtGuiQOpenGLFramebufferObject.cpp sipQtGuiQOpenGLFramebufferObjectFormat.cpp sipQtGuiQOpenGLPaintDevice.cpp sipQtGuiQOpenGLPixelTransferOptions.cpp sipQtGuiQOpenGLShader.cpp sipQtGuiQOpenGLShaderProgram.cpp sipQtGuiQOpenGLShaderShaderType.cpp sipQtGuiQOpenGLTexture.cpp sipQtGuiQOpenGLTextureFeatures.cpp sipQtGuiQOpenGLVersionProfile.cpp sipQtGuiQOpenGLVertexArrayObject.cpp sipQtGuiQOpenGLVertexArrayObjectBinder.cpp sipQtGuiQOpenGLWindow.cpp sipQtGuiQPageLayout.cpp sipQtGuiQPageSize.cpp sipQtGuiQPagedPaintDevice.cpp sipQtGuiQPagedPaintDeviceMargins.cpp sipQtGuiQPaintDevice.cpp sipQtGuiQPaintDeviceWindow.cpp sipQtGuiQPaintEngine.cpp sipQtGuiQPaintEngineDirtyFlags.cpp sipQtGuiQPaintEnginePaintEngineFeatures.cpp sipQtGuiQPaintEngineState.cpp sipQtGuiQPaintEvent.cpp sipQtGuiQPainter.cpp sipQtGuiQPainterPath.cpp sipQtGuiQPainterPathElement.cpp sipQtGuiQPainterPathStroker.cpp sipQtGuiQPainterPixmapFragment.cpp sipQtGuiQPainterPixmapFragmentHints.cpp sipQtGuiQPainterRenderHints.cpp sipQtGuiQPair0100QOpenGLTextureFilter0100QOpenGLTextureFilter.cpp sipQtGuiQPair22002200.cpp sipQtGuiQPalette.cpp sipQtGuiQPdfWriter.cpp sipQtGuiQPen.cpp sipQtGuiQPicture.cpp sipQtGuiQPictureIO.cpp sipQtGuiQPixelFormat.cpp sipQtGuiQPixmap.cpp sipQtGuiQPixmapCache.cpp sipQtGuiQPixmapCacheKey.cpp sipQtGuiQPlatformSurfaceEvent.cpp sipQtGuiQPolygon.cpp sipQtGuiQPolygonF.cpp sipQtGuiQQuaternion.cpp sipQtGuiQRadialGradient.cpp sipQtGuiQRasterWindow.cpp sipQtGuiQRawFont.cpp sipQtGuiQRawFontLayoutFlags.cpp sipQtGuiQRegExpValidator.cpp sipQtGuiQRegion.cpp sipQtGuiQRegularExpressionValidator.cpp sipQtGuiQResizeEvent.cpp sipQtGuiQRgba64.cpp sipQtGuiQScreen.cpp sipQtGuiQScrollEvent.cpp sipQtGuiQScrollPrepareEvent.cpp sipQtGuiQSessionManager.cpp sipQtGuiQSet0100QByteArray.cpp sipQtGuiQShortcutEvent.cpp sipQtGuiQShowEvent.cpp sipQtGuiQStandardItem.cpp sipQtGuiQStandardItemModel.cpp sipQtGuiQStaticText.cpp sipQtGuiQStatusTipEvent.cpp sipQtGuiQStyleHints.cpp sipQtGuiQSurface.cpp sipQtGuiQSurfaceFormat.cpp sipQtGuiQSurfaceFormatFormatOptions.cpp sipQtGuiQSyntaxHighlighter.cpp sipQtGuiQTabletEvent.cpp sipQtGuiQTextBlock.cpp sipQtGuiQTextBlockFormat.cpp sipQtGuiQTextBlockGroup.cpp sipQtGuiQTextBlockUserData.cpp sipQtGuiQTextBlockiterator.cpp sipQtGuiQTextCharFormat.cpp sipQtGuiQTextCursor.cpp sipQtGuiQTextDocument.cpp sipQtGuiQTextDocumentFindFlags.cpp sipQtGuiQTextDocumentFragment.cpp sipQtGuiQTextDocumentWriter.cpp sipQtGuiQTextFormat.cpp sipQtGuiQTextFormatPageBreakFlags.cpp sipQtGuiQTextFragment.cpp sipQtGuiQTextFrame.cpp sipQtGuiQTextFrameFormat.cpp sipQtGuiQTextFrameiterator.cpp sipQtGuiQTextImageFormat.cpp sipQtGuiQTextInlineObject.cpp sipQtGuiQTextItem.cpp sipQtGuiQTextItemRenderFlags.cpp sipQtGuiQTextLayout.cpp sipQtGuiQTextLayoutFormatRange.cpp sipQtGuiQTextLength.cpp sipQtGuiQTextLine.cpp sipQtGuiQTextList.cpp sipQtGuiQTextListFormat.cpp sipQtGuiQTextObject.cpp sipQtGuiQTextObjectInterface.cpp sipQtGuiQTextOption.cpp sipQtGuiQTextOptionFlags.cpp sipQtGuiQTextOptionTab.cpp sipQtGuiQTextTable.cpp sipQtGuiQTextTableCell.cpp sipQtGuiQTextTableCellFormat.cpp sipQtGuiQTextTableFormat.cpp sipQtGuiQTouchDevice.cpp sipQtGuiQTouchDeviceCapabilities.cpp sipQtGuiQTouchEvent.cpp sipQtGuiQTouchEventTouchPoint.cpp sipQtGuiQTouchEventTouchPointInfoFlags.cpp sipQtGuiQTransform.cpp sipQtGuiQValidator.cpp sipQtGuiQVector0100QAbstractTextDocumentLayoutSelection.cpp sipQtGuiQVector0100QLine.cpp sipQtGuiQVector0100QLineF.cpp sipQtGuiQVector0100QPoint.cpp sipQtGuiQVector0100QRect.cpp sipQtGuiQVector0100QRectF.cpp sipQtGuiQVector0100QSize.cpp sipQtGuiQVector0100QTextFormat.cpp sipQtGuiQVector0100QTextLayoutFormatRange.cpp sipQtGuiQVector0100QTextLength.cpp sipQtGuiQVector0600QPair24000100QColor.cpp sipQtGuiQVector1900.cpp sipQtGuiQVector2200.cpp sipQtGuiQVector2400.cpp sipQtGuiQVector2D.cpp sipQtGuiQVector3D.cpp sipQtGuiQVector4D.cpp sipQtGuiQWhatsThisClickedEvent.cpp sipQtGuiQWheelEvent.cpp sipQtGuiQWindow.cpp sipQtGuiQWindowStateChangeEvent.cpp sipQtGuiQt.cpp sipQtGuicmodule.cpp ../qpy/QtGui/qpyopengl_add_constants.cpp ../qpy/QtGui/qpyopengl_array_convertors.cpp ../qpy/QtGui/qpyopengl_attribute_array.cpp ../qpy/QtGui/qpyopengl_data_cache.cpp ../qpy/QtGui/qpyopengl_get.cpp ../qpy/QtGui/qpyopengl_init.cpp ../qpy/QtGui/qpyopengl_uniform_value_array.cpp ../qpy/QtGui/qpyopengl_value_array.cpp ../qpy/QtGui/qpyopengl_version_functions.cpp
