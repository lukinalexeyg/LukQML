TEMPLATE = lib

QT += qml

CONFIG += qt plugin

TARGET = LukQml

QML_IMPORT_NAME = LukQml
QML_IMPORT_MAJOR_VERSION = 1

include(LukQml.pri)

DESTDIR = bin
MOC_DIR = moc
OBJECTS_DIR = obj
RCC_DIR = rcc

win32-msvc* {
    QMAKE_EXTRA_TARGETS += before_build makefilehook
    makefilehook.target = $(MAKEFILE)
    makefilehook.depends = .beforebuild
    PRE_TARGETDEPS += .beforebuild
    before_build.target = .beforebuild
    before_build.depends = FORCE
    before_build.commands = chcp 1251
}
