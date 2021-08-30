#include <iostream>
#include <string>
using namespace std;

//总结： 前置递增返回引用，后置递增返回值
//后置递增返回值是因为如果返回引用，引用的是一个局部变量,会出错，但是如果是值传递，也会出错（和前置的那种错误一样)
//如果用”值传递“的方式，虽然功能仍然正确(表面正确，实质上错误，因为调用的是拷贝构造函数，操作对象已经变了），
//但由于return语句要把*this拷贝到保存返回值的外部存储单元之中，增加了不必要的开销，会降低赋值函数的效率。

class MyInteger
{

    //声明友元类，使其可以访问私有成员
    friend ostream& operator<<(ostream& out, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }
    //前置++
    MyInteger& operator++()//返回引用是为了对同一个数据进行操作,带引用的运行结果减少一次拷贝构造和析构!!!!!!
    //如果（MyInteger operator++），则当代码中使用的是++（++a）时，a的值只操作了一次，不符合现实
    {
        //先++
        m_Num++;
        //再将自身返回
        return *this;
    }
    //后置++,用int作为占位参数，用于区分前置和后置(必须是int-->编译器指定)
    MyInteger operator++(int)//如果返回引用MyInteger& operator++(int)，则会返回局部变量temp的引用，非法；
    {
        //先返回
        MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
        m_Num++;
        return temp;
    }
private:
    int m_Num;
};
//重载左移运算符
ostream& operator<<(ostream& out, MyInteger myint)
{
    out << myint.m_Num;
    return out;
}
//前置++ 先++ 再返回
void test01()
{
    MyInteger myInt;
    cout << ++(++myInt) << endl; //myInt.operator++() -> ++myInt
    cout << myInt << endl;
}
//后置++ 先返回 再++
void test02()
{
    MyInteger myInt;
    cout << (myInt++)++ << endl; //myInt.operator++(int) -> myInt++
    cout << myInt << endl;
}
int main()
{

    //test01();
    test02();
    return 0;
}
