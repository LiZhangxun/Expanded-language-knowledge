//1.所谓值传递,就是函数调用时实参将数值传入给形参
//2.值传递时,如果形参的值发生改变,并不会影响实参的值

#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
    cout << "函数中交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "函数中交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //return ; 当函数声明为void类型时候，不需要返回值，可以不写return
}

int main()
{
    int a = 10;
    int b = 20;

    //值传递时,如果形参的值发生改变,并不会影响实参的值
    swap(a, b);

    cout << "main中的 a = " << a << endl;
    cout << "main中的 b = " << b << endl;

    return 0;
}