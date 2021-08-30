/*
    1.作用:给变量起别名
    2.语法:数据类型 &别名 = 原名
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;// 变量a的别名为b，即a，b同时指向存储10的这块区域

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;// 给b赋值，相当于修改了10->100

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
