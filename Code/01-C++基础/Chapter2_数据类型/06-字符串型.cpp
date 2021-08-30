// 1.C风格字符串: char 变量名[] = "字符串值"
// 2.C++风格字符串: string 变量名 = "字符串值" --> 需要引用头文件#include<string>

#include <iostream>
#include<string> // 需要引用头文件才能使用string进行字符串定义
using namespace std;

int main()
{
    // C风格字符串
    char str1[] = "hello world";
    cout << str1 << endl;

    // C++风格字符串
    string str = "hello world";
    cout << str << endl;
}