
//do{ 循环语句 } while(循环条件);
//与while的区别在于:do...while会先执行一次循环语句,再判断循环条件

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    do
    {
        cout << num << endl; // 输出0-10
        num++;
    } while (num < 10);
}

