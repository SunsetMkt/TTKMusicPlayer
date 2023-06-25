include($$PWD/../../Input.pri)

DESTDIR = $$PLUGINS_PREFIX/Input

HEADERS += decoderasapfactory.h \
           decoder_asap.h \
           asaphelper.h

SOURCES += decoderasapfactory.cpp \
           decoder_asap.cpp \
           asaphelper.cpp

INCLUDEPATH += $$EXTRA_PREFIX/libttk/include

unix{
    QMAKE_CLEAN = $$DESTDIR/lib$${TARGET}.so
    LIBS += -L$$EXTRA_PREFIX/libttk/lib -lasap$$STATIC_LIBRARY_SUFFIX
}

win32{
    LIBS += -L$$EXTRA_PREFIX/libttk/lib -lasap
}