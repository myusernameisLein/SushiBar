TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    landlord.cpp \
    goods.cpp \
    annualreport.cpp \
    globalmethods.cpp \
    goodslist.cpp \
    goodsinputscreen.cpp \
    income.cpp \
    incomelist.cpp \
    incomeinputscreen.cpp \
    spendinglist.cpp \
    spendinginputscreen.cpp \
    userinterface.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    landlord.h \
    goods.h \
    annualreport.h \
    globalmethods.h \
    goodslist.h \
    goodsinputscreen.h \
    income.h \
    incomelist.h \
    incomeinputscreen.h \
    spending.h \
    spendinglist.h \
    spendinginputscreen.h \
    userinterface.h

