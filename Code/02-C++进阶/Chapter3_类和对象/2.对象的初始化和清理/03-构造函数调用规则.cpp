#include <iostream>
using namespace std;

//默认情况下，c++编译器至少给一个类添加3个函数:
//1．默认构造函数(无参，函数体为空)
//2．默认析构函数(无参，函数体为空)
//3．默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则如下：
//1.如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数
class Person
{
public:
    //无参（默认）构造函数
    Person()
    {
        cout << "无参构造函数!" << endl;
    }
    //有参构造函数
    Person(int a)
    {
        age = a;
        cout << "有参构造函数!" << endl;
    }
    //拷贝构造函数
    Person(const Person& p)
    {
        age = p.age;
        cout << "拷贝构造函数!" << endl;
    }
    //析构函数
    ~Person()
    {
        cout << "析构函数!" << endl;
    }
public:
    int age;
};

void test01()
{
    Person p1(18);
    //如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
    Person p2(p1);

    cout << "p2的年龄为： " << p2.age << endl;
}

void test02()
{
    //如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
    Person p1; //此时如果用户自己没有提供默认构造，会出错
    Person p2(10); //用户提供的有参
    Person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

    //如果用户提供拷贝构造，编译器不会提供其他构造函数
    Person p4; //此时如果用户自己没有提供默认构造，会出错
    Person p5(10); //此时如果用户自己没有提供有参，会出错
    Person p6(p5); //用户自己提供拷贝构造
}

int main()
{
    test01();
    return 0;
}
