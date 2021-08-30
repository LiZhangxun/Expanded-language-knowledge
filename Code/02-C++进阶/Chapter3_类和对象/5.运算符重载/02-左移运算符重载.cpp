#include <iostream>
#include <string>
using namespace std;

//总结：重载左移运算符配合友元可以实现输出自定义数据类型
class Person
{
    //声明友元类ostream,使它可以访问私有内容
    friend ostream& operator<<(ostream& out, Person& p);

public:
    //带参构造函数
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数实现不了,最后会变成 p << cout，不是我们想要的效果
/*    void operator<<(Person& p)
    {

    }*/

private:
    int m_A;
    int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个,所以只能定义返回类型为ostream对象的引用
ostream &operator<<(ostream& out, Person& p)
{
    //这里名字最好别用cout,因为引用的本身就是起别名,这里就是引用cout,否则会和c++库内置的有冲突
    out << "a:" << p.m_A << " b:" << p.m_B;
    return out;//返回一个ostream对象的引用;
}

void test()
{

    Person p1(10, 20);
    //本质为: operator<<(cout,p)->简化为cout<<p
    cout << p1 <<endl<<"hello world" << endl; //链式编程
}

int main()
{
    test();
    return 0;
}
