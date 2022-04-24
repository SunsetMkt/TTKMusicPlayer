include($$PWD/../../plugins.pri)

DESTDIR = $$PLUGINS_PREFIX/Effect
TARGET = $${TARGET}

HEADERS += ladspahost.h \
           effectladspafactory.h \
           settingsdialog.h \
           ladspaslider.h \
           ladspa.h \
           ladspahelper.h \
           ladspabutton.h
    
SOURCES += ladspahost.cpp \
           effectladspafactory.cpp \
           settingsdialog.cpp \
           ladspaslider.cpp \
           ladspahelper.cpp \
           ladspabutton.cpp

FORMS += settingsdialog.ui

LIBS += -L/usr/lib \
        -I/usr/include

linux-g++|linux-g++-32|linux-g++-64:LIBS += -ldl

QMAKE_CLEAN = $$DESTDIR/lib$${TARGET}.so