QT -= gui
CONFIG += release
TARGET = cfgtest_QtCore
INCLUDEPATH += /usr/include/python3.5m
win32 {
    LIBS += -L/usr/lib/arm-linux-gnueabihf
}
SOURCES = /home/pi/PyQt5_gpl-5.10.1/config-tests/cfgtest_QtCore.cpp