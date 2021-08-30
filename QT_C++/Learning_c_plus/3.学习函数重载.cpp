#include<iostream>
using namespace std;
/*函数重载满足条件：
1.同一个作用域下；
2.函数名称相同；
3.函数参数类型不同，或者个数不同，或者顺序不同；
*/
/*
int f1(int c)
{
    cout<<"f1的调用"<<1<<endl;
}
int f1(int a,int b)
{
    cout<<"f1的调用"<<2<<endl;
}
*/

/*函数重载的注意事项：
1.引用作为重载的条件；
void func(int &a)
{
    cout<<"func(int &a)调用"<<endl;
}
void func(const int &a)
{
    cout<<"func(const int &a)调用"<<endl;
}
*/
/*函数重载的注意事项：
2.函数重载碰到默认参数；
*/

/*
void fc2(int a,int b=10)
{
    cout<<"调用fc2(int a,int b=10)"<<endl;
}
void fc2(int a)
{
    cout<<"调用fc2(int a)"<<endl;
}
*/

int main()
{
    /*
    f1(1);
    f1(1,2);
    */
    /*注意事项1
    int a=10;
    func(a);//调用无const函数；
    func(10);//调用有const函数；
    */
    /*注意事项2
    fc2(10);//不知道到底进哪个fc2，哪个都能进(出现二义性）；
    */

    return 0;
}
