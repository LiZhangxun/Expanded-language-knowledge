#include <iostream>
using namespace std;

/*
    1.this指针指向被调用的成员函数所属的对象
    2.this指针是隐含每一个非静态成员函数内的一种指针
    3.this指针不需要定义，直接使用即可
    4.this指针的用途：
     当形参和成员变量同名时，可用this指针来区分
     在类的非静态成员函数中返回对象本身，可使用return *this
*/

class Person
{
public:

    Person(int age)
    {
        //1、当形参和成员变量同名时，可用this指针来区分
        this->age = age;
    }
    Person(const Person& p) //拷贝构造函数
    {
        cout << "拷贝构造函数!" << endl;
    }
    Person& PersonAddPerson(Person p)//用引用的方式传递
    {
        this->age += p.age;
        //返回对象本身
        return *this;
    }
//    Person PersonAddPerson(Person p)//用值的方式传递会调用拷贝构造函数
//      {
//         this->age += p.age;
//         //返回对象本身
//         return *this;
//      }
    int age=0;
};
void test02(Person &p)
{
   cout<<p.age<<endl;
}
void test01()
{
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    //如果采用引用传递方式，返回的是原来的对象，结果变为40;(编译器不同，可能运行结果不同)
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main()
{
    //test01();
    Person p1(10);
    Person p2(5);
    //test02(p1.PersonAddPerson(p2));
    test01();

    return 0;
}

