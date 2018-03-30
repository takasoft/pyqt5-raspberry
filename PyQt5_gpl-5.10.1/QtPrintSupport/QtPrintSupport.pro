TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT += printsupport
CONFIG += release
CONFIG -= android_install
TARGET = QtPrintSupport

win32 {
    PY_MODULE = QtPrintSupport.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtPrintSupport.so

    macx {
        PY_MODULE_SRC = $(TARGET).plugin/Contents/MacOS/$(TARGET)

        QMAKE_LFLAGS += "-undefined dynamic_lookup"

        equals(QT_MINOR_VERSION, 5) {
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
QMAKE_LFLAGS += -Wl,--version-script=QtPrintSupport.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
HEADERS = sipAPIQtPrintSupport.h
SOURCES = sipQtPrintSupportQAbstractPrintDialog.cpp sipQtPrintSupportQAbstractPrintDialogPrintDialogOptions.cpp sipQtPrintSupportQList0100QPageSize.cpp sipQtPrintSupportQList0100QPagedPaintDevicePageSize.cpp sipQtPrintSupportQList0100QPrinterDuplexMode.cpp sipQtPrintSupportQList0100QPrinterInfo.cpp sipQtPrintSupportQList0600QPair0100QString0100QSizeF.cpp sipQtPrintSupportQPageSetupDialog.cpp sipQtPrintSupportQPrintDialog.cpp sipQtPrintSupportQPrintEngine.cpp sipQtPrintSupportQPrintPreviewDialog.cpp sipQtPrintSupportQPrintPreviewWidget.cpp sipQtPrintSupportQPrinter.cpp sipQtPrintSupportQPrinterInfo.cpp sipQtPrintSupportcmodule.cpp
