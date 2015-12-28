TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    regex.cpp

include(deployment.pri)
qtcAddDeployment()

