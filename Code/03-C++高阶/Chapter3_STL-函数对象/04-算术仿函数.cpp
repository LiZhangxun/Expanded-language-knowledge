#include <iostream>
#include <functional>
using namespace std;

////使用内建函数对象时,需要引入头文件 #include <functional>
////仿函数原型:
//* template<class T> T plus<T>                   //加法仿函数
//* template<class T> T minus<T>                  //减法仿函数
//* template<class T> T multiplies<T>             //乘法仿函数
//* template<class T> T divides<T>                //除法仿函数
//* template<class T> T modulus<T>                //取模仿函数
//* template<class T> T negate<T>                 //取反仿函数
////其中negate是一元运算，其他都是二元运算

//negate
void test01()
{
    std::negate<int> n;
    cout << n(50) << endl;
}

//plus
void test02()
{
    std::plus<int> p;
    cout << p(10, 20) << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}