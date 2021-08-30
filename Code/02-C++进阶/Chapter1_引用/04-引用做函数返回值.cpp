/*
    1.作用:引用是可以作为函数的返回值存在的
    2.注意:不要返回局部变量的引用
    3.函数的调用可以作为左值
*/

#include <iostream>
using namespace std;

//返回局部变量引用
int& test01() {
    int a = 10; //局部变量
    return a; //&说明返回的是a的引用，换句话说就是返回a本身
}

//返回静态变量引用
int& test02() {
    static int a = 20; //静态变量
    return a; //&说明返回的是a的引用，换句话说就是返回a本身,此过程不产生副本,避免了临时变量的产生.
}

int main()
{
    //不能返回局部变量的引用,函数调用结束后，会被系统释放.
    int& ref = test01();
    cout << "ref = " << ref << endl; //编译器做了一次保留
    cout << "ref = " << ref << endl; //第二次结果错误，a的内存已经释放

    //返回全局变量引用
    int& ref2 = test02(); //返回a的引用，使ref2指向a所代表的内存空间(ref2就是a本身)
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    //如果函数的返回值是引用，这个函数调用可以作为左值
    test02() = 1000; //给ref2指向的内存进行赋值
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;
}
