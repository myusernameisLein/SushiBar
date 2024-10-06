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
    spending.cpp \
    spendinglist.cpp \
    spendinginputscreen.cpp \
    userinterface.cpp \
    tenant.cpp \
    tenantinputscreen.cpp \
    tenantlist.cpp \
    rentrow.cpp \
    rentrecord.cpp \
    rentinputscreen.cpp

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
    userinterface.h \
    tenant.h \
    tenantinputscreen.h \
    tenantlist.h \
    rentrow.h \
    rentrecord.h \
    rentinputscreen.h

