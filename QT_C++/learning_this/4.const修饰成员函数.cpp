/*
#include <iostream>
using namespace std;
//1.常函数：

//成员函数后加const后我们称为这个函数为常函数
//常函数内不可以修改成员属性
//成员属性声明时加<关键字mutable>后，在常函数中依然可以修改

//2.常对象：

//声明对象前加const称该对象为常对象
//常对象只能调用常函数(常-常)

class Person
{
public:
    Person()
    {
        m_A = 0;
        m_B = 0;
    }
    //this指针的本质是一个指针常量，指针的指向不可修改,如果不外加const条件，指针指向的值可以改变;
    //如果想让指针指向的值也不可以修改，需要声明常函数
    void ShowPerson() const   //相当于const Type* const pointer;
    {
        //this = NULL; //不能修改指针的指向 Person* const this;
        //this->mA = 100; //但是this指针指向的对象的数据是可以修改的

        //const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
        this->m_B = 100;
    }

    void MyFunc() const //在成员函数后加const，相当于修饰this指针，使其无法改变所指向的值
    {
        //mA = 10000;//常函数里面不允许修改值（mutable除外）
    }
    void func()//常函数
    {

    }

public:
    int m_A;
    mutable int m_B; //加上mutable使其变为 可修改 可变的
};


//const修饰对象  常对象
void test01()
{
    const Person person; //常量对象
    cout << person.m_A << endl;
    //person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
    person.m_B = 100; //但是常对象可以修改mutable修饰成员变量

    //常对象访问成员函数
    person.MyFunc(); //常对象只能调用const的函数
    //person.func();//常对象无法调用普通函数；

}

int main()
{
    test01();
    return 0;
}
*/
