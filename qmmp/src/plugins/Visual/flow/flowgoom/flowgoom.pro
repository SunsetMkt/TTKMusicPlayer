include($$PWD/../../Visual.pri)

DESTDIR = $$PLUGINS_PREFIX/Visual
TARGET = $${TARGET}

HEADERS += goomwidget.h \
           visualflowgoomfactory.h

SOURCES += goomwidget.cpp \
           visualflowgoomfactory.cpp

INCLUDEPATH += $$EXTRA_PREFIX/libzed/include

unix{
    QMAKE_CLEAN = $$DESTDIR/lib$${TARGET}.so
    LIBS += -L$$EXTRA_PREFIX/libzed/lib -lgoom$$STATIC_LIBRARY_SUFFIX
}

win32{
    LIBS += -L$$EXTRA_PREFIX/libzed/lib -lgoom
}