TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    landlord.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    landlord.h

