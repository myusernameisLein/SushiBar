TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
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
    userinterface.cpp \
    order.cpp \
    orderinputscreen.cpp \
    orderlist.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
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
    userinterface.h \
    order.h \
    orderinputscreen.h \
    orderlist.h

