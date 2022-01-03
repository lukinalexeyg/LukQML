INCLUDEPATH += $$PWD/src

HEADERS += \
    $$PWD/src/clipboardadapter.h \
    $$PWD/src/lukqmlplugin.h

SOURCES += \
    $$PWD/src/clipboardadapter.cpp \
    $$PWD/src/lukqmlplugin.cpp

RESOURCES += \
    $$PWD/src/lukqml.qrc

DISTFILES += \
    $$PWD/src/qmldir
