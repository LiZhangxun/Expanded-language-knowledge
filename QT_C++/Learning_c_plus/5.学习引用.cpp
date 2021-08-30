#include<iostream>
using namespace std;
void show(const int &val)//加上const 防止val（b）值被改变；
{
    //val=100;
    cout<<"val=  "<<val<<endl;
}
//引用的本质是指针常量：一个不能改变指向的指针变量；
/*
int main()
{
    int a=10;
    //int c=30;
    int &b=a;//给a取别名b；引用必须初始化，必须指定是谁的别名（且不可更改）；
    //引用的本质是指针常量；
    //int * const b=&a;(指针变量b的指向不能改变）；
    cout<<"a的值为： "<<a<<endl;
    cout<<"b的值为： "<<b<<endl;
    //编译无法通过int &b=c;
    b=20;//把b当成a操作；//对b操作就是对a操作（相当于编译器将b变为*b,使得将a的值变为20；
    cout<<"a的值为： "<<a<<endl;
    cout<<"b的值为： "<<b<<endl;
    show(b);
}
*/
