#include<iostream>
#include <string>
#include <typeinfo>
using namespace std;

//全局函数类内实现 - 直接在类内声明友元即可

//全局函数类外实现 - 需要提前让编译器知道全局函数的存在

template<class T1, class T2>
class Person;//1、先要编译器知道类的存在

template<class T1, class T2>//2.然后要让编译器知道全局函数存在
void printPerson2(Person<T1, T2> & p)//全局函数无需加作用域
{
    cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
}

//类模板的实现
template<class T1, class T2>
class Person
{
    //1.全局函数配合友元 -> 类内实现
    friend void printPerson(Person<T1, T2> & p)
    {
        cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
    }
    //2.全局函数配合友元 -> 类外实现
    //友元函数声明
    friend void printPerson2<>(Person<T1, T2> & p);//必须要加上空模板的参数列表,表示它是一个函数模板
public:

    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
private:
    T1 m_Name;
    T2 m_Age;

};

//1、全局函数在类内实现
void test01()
{
    Person <string, int >p("Tom", 20);
    printPerson(p);
}
//2、全局函数在类外实现
void test02()
{
    Person <string, int >p("Jerry", 30);
    printPerson2(p);
}

int main()
{
    //test01();
    test02();
    return 0;
}
