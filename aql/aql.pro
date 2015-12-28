TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    regex.cpp \
    aql.cpp \
    aqltoken.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    aql.h \
    aqltoken.h

