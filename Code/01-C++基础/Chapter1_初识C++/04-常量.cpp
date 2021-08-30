/* C++中常量的作用:用于记录程序中不可更改的数据
 * 1.使用#define修饰:
 *      #define 常量名 常量值  (通常在文件上方定义,表示一个常量)
 * 2.使用const修饰:
 *      const 数据类型 常量名 = 常量值   (通常在变量定义前加关键字const,表示一个常量)
 * */
#include <iostream>

/*定义宏常量*/
#define day 7

int main()
{
    /*定义一个const常量*/
    const int a = 10;
    std::cout << "Hello, World!" << a << day << std::endl;
    return 0;
}