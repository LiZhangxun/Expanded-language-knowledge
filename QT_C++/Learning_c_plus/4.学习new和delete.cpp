#include <iostream>
#define pai 3.14
using namespace std;
int* func()
{
    //在堆区创建整型数据；
    int*p=new int(10);//将动态创建的地址返回一个指针；
    return p;
    delete p;
}
void test()
{
    //创建一个10整型数据元素的数组；
    int*arr=new int[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=i+100;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete[]arr;//释放数组的时候加上中括号；
}
void print()
{
    int *p=func();
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;//内存已经被释放，再次访问就是非法操作
}
/*
int main()
{
    test();
    print();
    return 0;
}
*/
