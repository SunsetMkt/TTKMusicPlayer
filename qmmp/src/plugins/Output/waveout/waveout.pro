include($$PWD/../../plugins.pri)

DESTDIR = $$PLUGINS_PREFIX/Output
TARGET = $${TARGET}

HEADERS += outputwaveoutfactory.h \
           outputwaveout.h

SOURCES += outputwaveoutfactory.cpp \
           outputwaveout.cpp

LIBS += -lwinmm