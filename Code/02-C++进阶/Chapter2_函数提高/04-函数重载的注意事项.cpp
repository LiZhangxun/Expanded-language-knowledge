
#include <iostream>
using namespace std;

//函数重载注意事项
//1、引用作为重载条件
void func(int &a)
{
    cout << "func (int &a) 调用 " << endl;
}

void func(const int &a)
{
    cout << "func (const int &a) 调用 " << endl;
}


//2、函数重载碰到函数默认参数 --> 这种情况需要避免
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a)
{
    cout << "func2(int a) 调用" << endl;
}


int main()
{
    int a = 10;

    func(a); //调用无const,a相当于变量,允许修改
    func(10);//调用有const,因为10相当于常量,不允许修改

    //碰到默认参数产生歧义，需要避免
    //func2(10);

    return 0;
}
