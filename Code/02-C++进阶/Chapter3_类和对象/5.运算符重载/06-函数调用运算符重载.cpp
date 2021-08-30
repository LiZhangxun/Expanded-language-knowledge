#include <iostream>
#include <string>
using namespace std;

//函数调用运算符()也可以重载
//由于重载后使用的方式非常像函数的调用,因此称为 --> 仿函数
//仿函数没有固定写法，非常灵活

class MyPrint
{
public:
    //重载()运算符,参数为string类型
    void operator()(string text)
    {
        cout << text << endl;
    }

};
void test01()
{
    //重载的()操作符 也称为仿函数
    MyPrint myFunc;

    //相当于输出"hello world",看起来很像函数调用.
    myFunc("hello world");
}


class MyAdd
{
public:
    //重载()运算符，做加法运算.
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

void test02()
{
    MyAdd add;
    //看起来也像函数调用
    int ret = add(10, 10); // -> add.operator()(10,10);
    cout << "ret = " << ret << endl;

    //匿名函数对象调用 -> 类名() -> 执行完后,立即销毁
    cout << "MyAdd()(100,100) = " << MyAdd()(100, 100) << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}

