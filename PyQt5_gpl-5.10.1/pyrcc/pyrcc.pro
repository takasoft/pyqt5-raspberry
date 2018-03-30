TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install
TARGET = pyrcc

win32 {
    PY_MODULE = pyrcc.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = pyrcc.so

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
QMAKE_LFLAGS += -Wl,--version-script=pyrcc.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
DEFINES += Py_LIMITED_API=0x03040000
INCLUDEPATH += ../qpy/pyrcc
HEADERS = sipAPIpyrcc.h ../qpy/pyrcc/rcc.h
SOURCES = sippyrccRCCResourceLibrary.cpp sippyrcccmodule.cpp ../qpy/pyrcc/rcc.cpp
