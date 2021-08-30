TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    1.函数模板.cpp \
    2.函数模板注意事项.cpp \
    3.函数模板案例.cpp \
    4.普通函数与函数模板的区别.cpp \
    5.普通函数与函数模板的调用规则.cpp \
    6.模板的局限性.cpp \
    a.类模板语法.cpp \
    b.类模板与函数模板区别.cpp \
    c.类模板中成员函数创建时机.cpp \
    d.类模板对象做函数参数.cpp \
    e.类模板与继承.cpp \
    f.类模板成员函数类外实现.cpp \
    g.类模板分文件编写.cpp \
    h.类模板与友元.cpp \
    案例：数组类封装.cpp

HEADERS += \
    person.hpp \
    myarray.hpp
