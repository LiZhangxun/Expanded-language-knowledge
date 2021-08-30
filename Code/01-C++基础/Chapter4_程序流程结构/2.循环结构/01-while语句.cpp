//语法: while(循环条件){ 循环语句 }

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl; // 输出0-9
        num++;
    }
}

