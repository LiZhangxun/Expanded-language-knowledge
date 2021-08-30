//#include<iostream>
//using namespace std;
////类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
////#include "person.h"错误，无法采用这种方式,不能将实现和声明分开

////解决方式1，包含cpp源文件
////#include "person.cpp"

////解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
//#include "person.hpp"
////总结：主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp

//void test01()
//{
//    Person<string, int> p("Tom", 10);
//    p.showPerson();
//}

//int main()
//{
//    test01();
//    return 0;
//}
