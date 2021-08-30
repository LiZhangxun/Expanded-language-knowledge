cmake_minimum_required(VERSION 3.20)
project(02-C++进阶)

set(CMAKE_CXX_STANDARD 14)

# 为了在同一工程下运行多个main()函数,文件名.cpp前面的那个名字需要不同

# Chapter1_引用
add_executable(Chapter1_01  Chapter1_引用/01-引用的基本使用.cpp)
add_executable(Chapter1_02  Chapter1_引用/02-引用的注意事项.cpp)
add_executable(Chapter1_03  Chapter1_引用/03-引用做函数参数.cpp)
add_executable(Chapter1_04  Chapter1_引用/04-引用做函数返回值.cpp)
add_executable(Chapter1_05  Chapter1_引用/05-引用的本质.cpp)
add_executable(Chapter1_06  Chapter1_引用/06-常量的引用.cpp)

# Chapter2_函数提高
add_executable(Chapter2_01  Chapter2_函数提高/01-函数默认参数.cpp)
add_executable(Chapter2_02  Chapter2_函数提高/02-函数占位参数.cpp)
add_executable(Chapter2_03  Chapter2_函数提高/03-函数重载的类型.cpp)
add_executable(Chapter2_04  Chapter2_函数提高/04-函数重载的注意事项.cpp)

# Chapter3_类和对象
add_executable(Chapter3_1_01  Chapter3_类和对象/1.封装/01-struct和class的区别.cpp)
add_executable(Chapter3_1_02  Chapter3_类和对象/1.封装/02-封装的意义1.cpp)
add_executable(Chapter3_1_03  Chapter3_类和对象/1.封装/03-封装的意义2.cpp)
add_executable(Chapter3_1_04  Chapter3_类和对象/1.封装/04-将成员属性设置为私有.cpp)
add_executable(Chapter3_1_05  Chapter3_类和对象/1.封装/05-设计一个学生类lzx的.cpp)
add_executable(Chapter3_1_06  Chapter3_类和对象/1.封装/06-设计一个学生类案例.cpp)
add_executable(Chapter3_1_07  Chapter3_类和对象/1.封装/07-设计点和圆的关系.cpp)
add_executable(Chapter3_1_08  Chapter3_类和对象/1.封装/08-设计立方体类.cpp)

add_executable(Chapter3_2_01  Chapter3_类和对象/2.对象的初始化和清理/01-构造函数和析构函数.cpp)
add_executable(Chapter3_2_02  Chapter3_类和对象/2.对象的初始化和清理/02-构造函数的分类及调用.cpp)
add_executable(Chapter3_2_03  Chapter3_类和对象/2.对象的初始化和清理/03-构造函数调用规则.cpp)
add_executable(Chapter3_2_04  Chapter3_类和对象/2.对象的初始化和清理/04-拷贝构造函数调用时机.cpp)
add_executable(Chapter3_2_05  Chapter3_类和对象/2.对象的初始化和清理/05-深拷贝与浅拷贝.cpp)
add_executable(Chapter3_2_06  Chapter3_类和对象/2.对象的初始化和清理/06-初始化列表.cpp)
add_executable(Chapter3_2_07  Chapter3_类和对象/2.对象的初始化和清理/07-类对象作为类成员.cpp)
add_executable(Chapter3_2_08  Chapter3_类和对象/2.对象的初始化和清理/08-静态成员函数.cpp)
add_executable(Chapter3_2_09  Chapter3_类和对象/2.对象的初始化和清理/09-静态成员变量.cpp)

add_executable(Chapter3_3_01  Chapter3_类和对象/3.C++的对象模型和this指针/01-成员变量与成员函数.cpp)
add_executable(Chapter3_3_02  Chapter3_类和对象/3.C++的对象模型和this指针/02-this指针概念.cpp)
add_executable(Chapter3_3_03  Chapter3_类和对象/3.C++的对象模型和this指针/03-空指针访问成员函数.cpp)
add_executable(Chapter3_3_04  Chapter3_类和对象/3.C++的对象模型和this指针/04-const修饰成员函数.cpp)

add_executable(Chapter3_4_01  Chapter3_类和对象/4.友元/01-全局函数做友元.cpp)
add_executable(Chapter3_4_02  Chapter3_类和对象/4.友元/02-类做友元.cpp)
add_executable(Chapter3_4_03  Chapter3_类和对象/4.友元/03-成员函数做友元.cpp)

add_executable(Chapter3_5_01  Chapter3_类和对象/5.运算符重载/01-加号运算符重载.cpp)
add_executable(Chapter3_5_02  Chapter3_类和对象/5.运算符重载/02-左移运算符重载.cpp)
add_executable(Chapter3_5_03  Chapter3_类和对象/5.运算符重载/03-递增运算符重载.cpp)
add_executable(Chapter3_5_04  Chapter3_类和对象/5.运算符重载/04-赋值运算符重载.cpp)
add_executable(Chapter3_5_05  Chapter3_类和对象/5.运算符重载/05-关系运算符重载.cpp)
add_executable(Chapter3_5_06  Chapter3_类和对象/5.运算符重载/06-函数调用运算符重载.cpp)

add_executable(Chapter3_6_01  Chapter3_类和对象/6.继承/01-继承的基本语法.cpp)
add_executable(Chapter3_6_02  Chapter3_类和对象/6.继承/02-继承方式.cpp)
add_executable(Chapter3_6_03  Chapter3_类和对象/6.继承/03-继承中的对象模型.cpp)
add_executable(Chapter3_6_04  Chapter3_类和对象/6.继承/04-继承中构造和析构顺序.cpp)
add_executable(Chapter3_6_05  Chapter3_类和对象/6.继承/05-继承同名成员处理方式.cpp)
add_executable(Chapter3_6_06  Chapter3_类和对象/6.继承/06-继承同名静态成员处理方式.cpp)
add_executable(Chapter3_6_07  Chapter3_类和对象/6.继承/07-多继承语法.cpp)
add_executable(Chapter3_6_08  Chapter3_类和对象/6.继承/08-菱形继承.cpp)

add_executable(Chapter3_7_01  Chapter3_类和对象/7.多态/01-多态的基本概念.cpp)
add_executable(Chapter3_7_02  Chapter3_类和对象/7.多态/02-多态案例一-计算器类.cpp)
add_executable(Chapter3_7_03  Chapter3_类和对象/7.多态/03-纯虚函数和抽象类.cpp)
add_executable(Chapter3_7_04  Chapter3_类和对象/7.多态/04-多态案例二-制作饮品.cpp)
add_executable(Chapter3_7_05  Chapter3_类和对象/7.多态/05-虚析构和纯虚析构.cpp)
add_executable(Chapter3_7_06  Chapter3_类和对象/7.多态/06-多态案例三-电脑组装.cpp)

# Chapter4_文件操作
add_executable(Chapter4_01  Chapter4_文件操作/01-文本写文件.cpp)
add_executable(Chapter4_02  Chapter4_文件操作/02-文本读文件.cpp)
add_executable(Chapter4_03  Chapter4_文件操作/03-二进制写文件.cpp)
add_executable(Chapter4_04  Chapter4_文件操作/04-二进制读文件.cpp)


