TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    基于多态的职工管理系统.cpp \
    workermanager.cpp \
    employee.cpp \
    manager.cpp \
    boss.cpp

HEADERS += \
    workermanager.h \
    worker.h \
    employee.h \
    manager.h \
    boss.h
