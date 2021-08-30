#include<iostream>
#include <string>
using namespace std;

//template<typename T>
//template  ---  声明创建模板
//typename  --- 表面其后面的符号是一种数据类型，可以用class代替
//T    ---   通用的数据类型，名称可以替换，通常为大写字母

//类模板
template<class NameType, class AgeType>//将成员数据类型通用化
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->mName = name;
        this->mAge = age;
    }
    void showPerson()
    {
        cout << "name: " << this->mName << " age: " << this->mAge << endl;
    }
public:
    NameType mName;//将成员数据类型通用化
    AgeType mAge;//将成员数据类型通用化
};

void test01()
{
    // 指定NameType为string类型,AgeType为int类型
    Person<string, int>P1("孙悟空", 999);
    P1.showPerson();
}

int main()
{
    test01();
    return 0;
}
