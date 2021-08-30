/*  字符型变量用于显示单个字符
    语法:char 变量名 = 'a';
        注意1: 在显示字符型变量时，用单引号将字符括起来，不要用双引号
        注意2: 单引号内只能有一个字符，不可以是字符串
        注意3: C和C++中字符型变量只占用1个字节
        注意4: 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
*/
/* 数字0对应ASCII码为48
 * 字母A对应ASCII码为65
 * 字母a对应ASCII码为97
*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    //ch = "abcde"; //错误，不可以用双引号
    //ch = 'abcde'; //错误，单引号内只能引用一个字符

    cout << (int)ch << endl;  //查看字符a对应的ASCII码
    ch = 97; //可以直接用ASCII给字符型变量赋值
    cout << ch << endl;

    return 0;
}