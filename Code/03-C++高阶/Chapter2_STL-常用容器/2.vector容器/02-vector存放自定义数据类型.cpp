#include <vector>
#include <string>
#include <iostream>
using namespace std;

//自定义数据类型
class Person
{
public:
    Person(string name, int age)
    {
        mName = name;
        mAge = age;
    }
public:
    string mName;
    int mAge;
};

//存放对象
void test01()
{

    //存放一个Person类的数据类型
    std::vector<Person> v;

    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    //尾插放入vector容器
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //这里*it是person的对象类型，例如p1,p2....，看<Person>里面的数据类型是Person
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl;//可以把*it当做一个对象
        cout << "Name:" << it->mName << " Age:" << it->mAge << endl; //可以把it当做指针
    }
}


//放对象指针
void test02()
{

    std::vector<Person*> v;//放对象指针

    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    //存放数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    //<Person *>里面的类型为Person *,所以*it也是Person *类型
    for (std::vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "Name:" << (*it)->mName << " Age:" << (*it)->mAge << endl; //可以把*it当做对象的指针
    }
}


int main()
{
    test01();
    test02();
    return 0;
}
