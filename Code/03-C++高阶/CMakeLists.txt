cmake_minimum_required(VERSION 3.20)
project(03-C++高阶)

set(CMAKE_CXX_STANDARD 14)

# 为了在同一工程下运行多个main()函数,文件名.cpp前面的那个名字需要不同

# Chapter1_模板-泛型编程
add_executable(Chapter1_1_01  Chapter1_模板-泛型编程/1.函数模板/01-函数模板.cpp)
add_executable(Chapter1_1_02  Chapter1_模板-泛型编程/1.函数模板/02-函数模板注意事项.cpp)
add_executable(Chapter1_1_03  Chapter1_模板-泛型编程/1.函数模板/03-函数模板案例.cpp)
add_executable(Chapter1_1_04  Chapter1_模板-泛型编程/1.函数模板/04-普通函数与函数模板的区别.cpp)
add_executable(Chapter1_1_05  Chapter1_模板-泛型编程/1.函数模板/05-普通函数与函数模板的调用规则.cpp)
add_executable(Chapter1_1_06  Chapter1_模板-泛型编程/1.函数模板/06-模板的局限性.cpp)

add_executable(Chapter1_2_01  Chapter1_模板-泛型编程/2.类模板/01-类模板语法.cpp)
add_executable(Chapter1_2_02  Chapter1_模板-泛型编程/2.类模板/02-类模板与函数模板区别.cpp)
add_executable(Chapter1_2_03  Chapter1_模板-泛型编程/2.类模板/03-类模板中成员函数创建时机.cpp)
add_executable(Chapter1_2_04  Chapter1_模板-泛型编程/2.类模板/04-类模板对象做函数参数.cpp)
add_executable(Chapter1_2_05  Chapter1_模板-泛型编程/2.类模板/05-类模板与继承.cpp)
add_executable(Chapter1_2_06  Chapter1_模板-泛型编程/2.类模板/06-类模板成员函数类外实现.cpp)
add_executable(Chapter1_2_07  Chapter1_模板-泛型编程/2.类模板/07-类模板分文件编写/main.cpp
                              Chapter1_模板-泛型编程/2.类模板/07-类模板分文件编写/include/person.hpp)
add_executable(Chapter1_2_08  Chapter1_模板-泛型编程/2.类模板/08-类模板与友元.cpp)
add_executable(Chapter1_2_09  Chapter1_模板-泛型编程/2.类模板/09-类模板案例/main.cpp
                              Chapter1_模板-泛型编程/2.类模板/09-类模板案例/include/myArray.hpp)

# Chapter2_STL-常用容器
add_executable(Chapter2_1_01  Chapter2_STL-常用容器/1.string容器/01-string构造函数.cpp)
add_executable(Chapter2_1_02  Chapter2_STL-常用容器/1.string容器/02-string赋值操作.cpp)
add_executable(Chapter2_1_03  Chapter2_STL-常用容器/1.string容器/03-string字符串拼接.cpp)
add_executable(Chapter2_1_04  Chapter2_STL-常用容器/1.string容器/04-string查找和替换.cpp)
add_executable(Chapter2_1_05  Chapter2_STL-常用容器/1.string容器/05-string字符串比较.cpp)
add_executable(Chapter2_1_06  Chapter2_STL-常用容器/1.string容器/06-string字符存取.cpp)
add_executable(Chapter2_1_07  Chapter2_STL-常用容器/1.string容器/07-string插入和删除.cpp)
add_executable(Chapter2_1_08  Chapter2_STL-常用容器/1.string容器/08-string子串.cpp)

add_executable(Chapter2_2_01  Chapter2_STL-常用容器/2.vector容器/01-vector存放内置数据类型.cpp)
add_executable(Chapter2_2_02  Chapter2_STL-常用容器/2.vector容器/02-vector存放自定义数据类型.cpp)
add_executable(Chapter2_2_03  Chapter2_STL-常用容器/2.vector容器/03-vector容器嵌套容器.cpp)
add_executable(Chapter2_2_04  Chapter2_STL-常用容器/2.vector容器/04-vector构造函数.cpp)
add_executable(Chapter2_2_05  Chapter2_STL-常用容器/2.vector容器/05-vector赋值操作.cpp)
add_executable(Chapter2_2_06  Chapter2_STL-常用容器/2.vector容器/06-vector容量和大小.cpp)
add_executable(Chapter2_2_07  Chapter2_STL-常用容器/2.vector容器/07-vector插入和删除.cpp)
add_executable(Chapter2_2_08  Chapter2_STL-常用容器/2.vector容器/08-vector数据存取.cpp)
add_executable(Chapter2_2_09  Chapter2_STL-常用容器/2.vector容器/09-vector互换容器.cpp)
add_executable(Chapter2_2_10  Chapter2_STL-常用容器/2.vector容器/10-vector预留空间.cpp)

add_executable(Chapter2_3_01  Chapter2_STL-常用容器/3.deque容器/01-deque构造函数.cpp)
add_executable(Chapter2_3_02  Chapter2_STL-常用容器/3.deque容器/02-deque赋值操作.cpp)
add_executable(Chapter2_3_03  Chapter2_STL-常用容器/3.deque容器/03-deque大小操作.cpp)
add_executable(Chapter2_3_04  Chapter2_STL-常用容器/3.deque容器/04-deque插入和删除.cpp)
add_executable(Chapter2_3_05  Chapter2_STL-常用容器/3.deque容器/05-deque数据存取.cpp)
add_executable(Chapter2_3_06  Chapter2_STL-常用容器/3.deque容器/06-deque数据排序.cpp)

add_executable(Chapter2_4_01  Chapter2_STL-常用容器/4.应用案例1-评委打分/实现代码.cpp)
add_executable(Chapter2_5_01  Chapter2_STL-常用容器/5.stack容器/01-stack常用接口.cpp)
add_executable(Chapter2_6_01  Chapter2_STL-常用容器/6.queue容器/01-queue常用接口.cpp)

add_executable(Chapter2_7_01  Chapter2_STL-常用容器/7.list容器/01-list构造函数.cpp)
add_executable(Chapter2_7_02  Chapter2_STL-常用容器/7.list容器/02-list赋值和交换.cpp)
add_executable(Chapter2_7_03  Chapter2_STL-常用容器/7.list容器/03-list大小操作.cpp)
add_executable(Chapter2_7_04  Chapter2_STL-常用容器/7.list容器/04-list插入和删除.cpp)
add_executable(Chapter2_7_05  Chapter2_STL-常用容器/7.list容器/05-list数据存取.cpp)
add_executable(Chapter2_7_06  Chapter2_STL-常用容器/7.list容器/06-list反转和排序.cpp)
add_executable(Chapter2_7_07  Chapter2_STL-常用容器/7.list容器/07-应用案例.cpp)

add_executable(Chapter2_8_01  Chapter2_STL-常用容器/8.set与multiset容器/01-set构造和赋值.cpp)
add_executable(Chapter2_8_02  Chapter2_STL-常用容器/8.set与multiset容器/02-set大小和交换.cpp)
add_executable(Chapter2_8_03  Chapter2_STL-常用容器/8.set与multiset容器/03-set插入和删除.cpp)
add_executable(Chapter2_8_04  Chapter2_STL-常用容器/8.set与multiset容器/04-set查找和统计.cpp)
add_executable(Chapter2_8_05  Chapter2_STL-常用容器/8.set与multiset容器/05-set和multiset区别.cpp)
add_executable(Chapter2_8_06  Chapter2_STL-常用容器/8.set与multiset容器/06-pair对组创建.cpp)
add_executable(Chapter2_8_07  Chapter2_STL-常用容器/8.set与multiset容器/07-set容器排序之内置数据类型.cpp)
add_executable(Chapter2_8_08  Chapter2_STL-常用容器/8.set与multiset容器/08-set容器排序之自定义数据类型.cpp)

add_executable(Chapter2_9_01  Chapter2_STL-常用容器/9.map与multimap容器/01-map构造和赋值.cpp)
add_executable(Chapter2_9_02  Chapter2_STL-常用容器/9.map与multimap容器/02-map大小和交换.cpp)
add_executable(Chapter2_9_03  Chapter2_STL-常用容器/9.map与multimap容器/03-map插入和删除.cpp)
add_executable(Chapter2_9_04  Chapter2_STL-常用容器/9.map与multimap容器/04-map查找和统计.cpp)
add_executable(Chapter2_9_05  Chapter2_STL-常用容器/9.map与multimap容器/05-map容器排序.cpp)

add_executable(Chapter2_10_01  Chapter2_STL-常用容器/10.应用案例2-员工分组/实现代码.cpp)

# Chapter3_STL-函数对象
add_executable(Chapter3_01  Chapter3_STL-函数对象/01-函数对象.cpp)
add_executable(Chapter3_02  Chapter3_STL-函数对象/02-一元谓词.cpp)
add_executable(Chapter3_03  Chapter3_STL-函数对象/03-二元谓词.cpp)
add_executable(Chapter3_04  Chapter3_STL-函数对象/04-算术仿函数.cpp)
add_executable(Chapter3_05  Chapter3_STL-函数对象/05-关系仿函数.cpp)
add_executable(Chapter3_06  Chapter3_STL-函数对象/06-逻辑仿函数.cpp)

# Chapter4_STL-常用算法
add_executable(Chapter4_1_01  Chapter4_STL-常用算法/1.常用遍历算法/01-for_each.cpp)
add_executable(Chapter4_1_02  Chapter4_STL-常用算法/1.常用遍历算法/02-transform.cpp)

add_executable(Chapter4_2_01  Chapter4_STL-常用算法/2.常用查找算法/01-find.cpp)
add_executable(Chapter4_2_02  Chapter4_STL-常用算法/2.常用查找算法/02-find_if.cpp)
add_executable(Chapter4_2_03  Chapter4_STL-常用算法/2.常用查找算法/03-adjacent_find.cpp)
add_executable(Chapter4_2_04  Chapter4_STL-常用算法/2.常用查找算法/04-binary_search.cpp)
add_executable(Chapter4_2_05  Chapter4_STL-常用算法/2.常用查找算法/05-count.cpp)
add_executable(Chapter4_2_06  Chapter4_STL-常用算法/2.常用查找算法/06-count_if.cpp)

add_executable(Chapter4_3_01  Chapter4_STL-常用算法/3.常用排序算法/01-sort.cpp)
add_executable(Chapter4_3_02  Chapter4_STL-常用算法/3.常用排序算法/02-random_shuffle.cpp)
add_executable(Chapter4_3_03  Chapter4_STL-常用算法/3.常用排序算法/03-merge.cpp)
add_executable(Chapter4_3_04  Chapter4_STL-常用算法/3.常用排序算法/04-reverse.cpp)

add_executable(Chapter4_4_01  Chapter4_STL-常用算法/4.常用拷贝和替换算法/01-copy.cpp)
add_executable(Chapter4_4_02  Chapter4_STL-常用算法/4.常用拷贝和替换算法/02-replace.cpp)
add_executable(Chapter4_4_03  Chapter4_STL-常用算法/4.常用拷贝和替换算法/03-replace_if.cpp)
add_executable(Chapter4_4_04  Chapter4_STL-常用算法/4.常用拷贝和替换算法/04-swap.cpp)

add_executable(Chapter4_5_01  Chapter4_STL-常用算法/5.常用算术生成算法/01-accumulate.cpp)
add_executable(Chapter4_5_02  Chapter4_STL-常用算法/5.常用算术生成算法/02-fill.cpp)

add_executable(Chapter4_6_01  Chapter4_STL-常用算法/6.常用集合算法/01-set_intersection.cpp)
add_executable(Chapter4_6_02  Chapter4_STL-常用算法/6.常用集合算法/02-set_union.cpp)
add_executable(Chapter4_6_03  Chapter4_STL-常用算法/6.常用集合算法/03-set_difference.cpp)
