TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install
TARGET = pylupdate

win32 {
    PY_MODULE = pylupdate.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = pylupdate.so

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
QMAKE_LFLAGS += -Wl,--version-script=pylupdate.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
DEFINES += Py_LIMITED_API=0x03040000
INCLUDEPATH += ../qpy/pylupdate
HEADERS = sipAPIpylupdate.h ../qpy/pylupdate/metatranslator.h ../qpy/pylupdate/proparser.h ../qpy/pylupdate/pylupdate.h ../qpy/pylupdate/simtexth.h ../qpy/pylupdate/translator.h
SOURCES = sippylupdateMetaTranslator.cpp sippylupdateQMap0100QString0100QString.cpp sippylupdatecmodule.cpp ../qpy/pylupdate/fetchtr.cpp ../qpy/pylupdate/merge.cpp ../qpy/pylupdate/metatranslator.cpp ../qpy/pylupdate/numberh.cpp ../qpy/pylupdate/proparser.cpp ../qpy/pylupdate/sametexth.cpp ../qpy/pylupdate/simtexth.cpp ../qpy/pylupdate/translator.cpp
