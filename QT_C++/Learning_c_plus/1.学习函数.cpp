#include<iostream>
using namespace std;

int func1(int a,int b=10)
{
    return (a+b);
}
/*
int func2(int a=10,int b)//错误，如果某个位置有了默认参数，从该位置往后都必须有默认参数；
{
    return(a+b);
}
*/
int func2(int a=10,int b=10);//如果函数声明有默认参数，函数实现不能有默认参数；//函数声明和函数实现中只能有一个有默认参数；
//int func2(int a=10,int b)//错误
int func2(int a,int b)
{
    return(a+b);
}

/*
int main()
{
   cout<<func1(10,10)<<endl;
   cout<<func2(10,20)<<endl;
}
*/
