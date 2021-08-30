/*
#include <iostream>
#include <string>
using namespace std;
//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员

//静态成员分为：

//1.静态成员变量
//   *  所有对象共享同一份数据!!!
//   *  在编译阶段分配内存
//   *  类内声明，类外初始化!!!
//2.静态成员函数
//   *  所有对象共享同一个函数
//   *  静态成员函数只能访问静态成员变量

class Person
{
//类内声明静态成员变量
public:
    static int m_A; //静态成员变量

private:
    static int m_B; //静态成员变量也是有访问权限的
};
//类外初始化静态成员变量
int Person::m_A = 10;
int Person::m_B = 10;

void test01()
{
    //静态成员变量两种访问方式

    //1、通过对象
    Person p1;
    p1.m_A = 100;
    cout << "p1.m_A = " << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;
    //共享同一份数据
    cout << "p1.m_A = " << p1.m_A << endl; //由于在操作对象p2时修改了静态成员变量的值，导致p1中的也改变；
    cout << "p2.m_A = " << p2.m_A << endl;

    //2、通过类名
    cout << "m_A = " << Person::m_A << endl;
    //cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
}

int main()
{
    test01();
    return 0;
}
*/
