TEMPLATE = lib
CONFIG += warn_on exceptions_off plugin plugin_bundle
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install
TARGET = QtDBus

win32 {
    PY_MODULE = QtDBus.pyd
    PY_MODULE_SRC = $(DESTDIR_TARGET)
} else {
    PY_MODULE = QtDBus.so

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
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
DEFINES += Py_LIMITED_API=0x03040000
INCLUDEPATH += ../qpy/QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbusreply.h
SOURCES = sipQtDBusQDBus.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQPyDBusReply.cpp sipQtDBuscmodule.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbus_post_init.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbusreply.cpp
