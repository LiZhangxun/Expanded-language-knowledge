#-------------------------------------------------
#
# Project created by QtCreator 2015-12-30T10:04:52
#
#-------------------------------------------------

#QT包含的模块(1)core --> 核心模块;(2)gui --> 图形界面模块
QT       += core gui

#高于4版本，添加 QT += widgets ，为了兼容Qt4
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#应用程序的名字
TARGET = LZX

#指定makefile的类型, app
TEMPLATE = app

#源文件 .cpp文件
SOURCES += main.cpp\
        mywidget.cpp

#头文件 .h文件
HEADERS  += mywidget.h
