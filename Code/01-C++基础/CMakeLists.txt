cmake_minimum_required(VERSION 3.20)
project(01-C++基础)

set(CMAKE_CXX_STANDARD 14)

# 为了在同一工程下运行多个main()函数,文件名.cpp前面的那个名字需要不同

# Chapter1_初识C++
add_executable(Chapter1_01  Chapter1_初识C++/01-第一个C++程序.cpp)
add_executable(Chapter1_02  Chapter1_初识C++/02-单行与多行注释.cpp)
add_executable(Chapter1_03  Chapter1_初识C++/03-变量.cpp)
add_executable(Chapter1_04  Chapter1_初识C++/04-常量.cpp)

# Chapter2_数据类型
add_executable(Chapter2_01  Chapter2_数据类型/01-整型.cpp)
add_executable(Chapter2_02  Chapter2_数据类型/02-sizeof关键字.cpp)
add_executable(Chapter2_03  Chapter2_数据类型/03-浮点型.cpp)
add_executable(Chapter2_04  Chapter2_数据类型/04-字符型.cpp)
add_executable(Chapter2_05  Chapter2_数据类型/05-转义字符.cpp)
add_executable(Chapter2_06  Chapter2_数据类型/06-字符串型.cpp)
add_executable(Chapter2_07  Chapter2_数据类型/07-布尔类型.cpp)
add_executable(Chapter2_08  Chapter2_数据类型/08-数据的输入.cpp)

# Chapter3_运算符
add_executable(Chapter3_01  Chapter3_运算符/01-算术运算符.cpp)
add_executable(Chapter3_02  Chapter3_运算符/02-赋值运算符.cpp)
add_executable(Chapter3_03  Chapter3_运算符/03-比较运算符.cpp)
add_executable(Chapter3_04  Chapter3_运算符/04-逻辑运算符.cpp)

# Chapter4_程序流程结构
add_executable(Chapter4_1_01  Chapter4_程序流程结构/1.选择结构/01-if语句.cpp)
add_executable(Chapter4_1_02  Chapter4_程序流程结构/1.选择结构/02-三目运算符.cpp)
add_executable(Chapter4_1_03  Chapter4_程序流程结构/1.选择结构/03-switch语句.cpp)
add_executable(Chapter4_2_01  Chapter4_程序流程结构/2.循环结构/01-while语句.cpp)
add_executable(Chapter4_2_02  Chapter4_程序流程结构/2.循环结构/02-do-while语句.cpp)
add_executable(Chapter4_2_03  Chapter4_程序流程结构/2.循环结构/03-for语句.cpp)
add_executable(Chapter4_2_04  Chapter4_程序流程结构/2.循环结构/04-循环嵌套.cpp)
add_executable(Chapter4_3_01  Chapter4_程序流程结构/3.跳转语句/01-break语句.cpp)
add_executable(Chapter4_3_02  Chapter4_程序流程结构/3.跳转语句/02-continue语句.cpp)
add_executable(Chapter4_3_03  Chapter4_程序流程结构/3.跳转语句/03-goto语句.cpp)

# Chapter5_数组
add_executable(Chapter5_1_01  Chapter5_数组/1.一维数组/01-一维数组定义方式.cpp)
add_executable(Chapter5_1_02  Chapter5_数组/1.一维数组/02-一维数组数组名.cpp)
add_executable(Chapter5_1_03  Chapter5_数组/1.一维数组/03-一维数组应用案例.cpp)
add_executable(Chapter5_2_01  Chapter5_数组/2.二维数组/01-二维数组定义方式.cpp)
add_executable(Chapter5_2_02  Chapter5_数组/2.二维数组/02-二维数组组名.cpp)
add_executable(Chapter5_2_03  Chapter5_数组/2.二维数组/03-二维数组应用案例.cpp)

# Chapter6_函数
add_executable(Chapter6_01  Chapter6_函数/01-函数定义.cpp)
add_executable(Chapter6_02  Chapter6_函数/02-函数调用.cpp)
add_executable(Chapter6_03  Chapter6_函数/03-函数的值传递.cpp)
add_executable(Chapter6_04  Chapter6_函数/04-函数的常见样式.cpp)
add_executable(Chapter6_05  Chapter6_函数/05-函数的声明.cpp)
add_executable(Chapter6_06  Chapter6_函数/06-函数的分文件编写/main.cpp Chapter6_函数/06-函数的分文件编写/swap.cpp Chapter6_函数/06-函数的分文件编写/include/swap.h)

# Chapter7_指针
add_executable(Chapter7_01  Chapter7_指针/01-指针变量的定义和使用.cpp)
add_executable(Chapter7_02  Chapter7_指针/02-指针所占内存空间.cpp)
add_executable(Chapter7_03  Chapter7_指针/03-空指针和野指针.cpp)
add_executable(Chapter7_04  Chapter7_指针/04-const修饰指针.cpp)
add_executable(Chapter7_05  Chapter7_指针/05-指针和数组.cpp)
add_executable(Chapter7_06  Chapter7_指针/06-指针和函数.cpp)
add_executable(Chapter7_07  Chapter7_指针/07-指针应用案例.cpp)

# Chapter8_结构体
add_executable(Chapter8_01  Chapter8_结构体/01-结构体的定义和使用.cpp)
add_executable(Chapter8_02  Chapter8_结构体/02-结构体数组.cpp)
add_executable(Chapter8_03  Chapter8_结构体/03-结构体指针.cpp)
add_executable(Chapter8_04  Chapter8_结构体/04-结构体嵌套.cpp)
add_executable(Chapter8_05  Chapter8_结构体/05-结构体作为函数参数.cpp)
add_executable(Chapter8_06  Chapter8_结构体/06-结构体中的const.cpp)


