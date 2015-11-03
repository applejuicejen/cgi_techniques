TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    objLoader.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    objLoader.h

