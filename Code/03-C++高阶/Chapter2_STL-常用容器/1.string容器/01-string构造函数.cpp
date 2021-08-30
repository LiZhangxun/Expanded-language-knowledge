#include <iostream>
#include <string>
using namespace std;

////**本质：
// string是C++风格的字符串，而string本质上是一个类

////**string和char * 区别：
// char * 是一个指针
// string是一个类，类内部封装了char\*，管理这个字符串，是一个char*型的容器。

////**特点：**
//string 类内部封装了很多成员方法
//例如：查找find，拷贝copy，删除delete 替换replace，插入insert
//string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

////构造函数原型：
// string();         			    //创建一个空的字符串 例如: string str;
// string(const char* s);	        //使用字符串s初始化
// string(const string& str);        //使用一个string对象初始化另一个string对象
// string(int n, char c);            //使用n个字符c初始化


//string构造
void test01()
{
    string s1; //创建空字符串，调用无参构造函数
    cout << "str1 = " << s1 << endl;

    const char* str = "hello world"; //str是字符串指针，指向一个字符串
    string s2(str); //把c_string转换成了string -> 相当于string s2("hello world");
    cout << "str2 = " << s2 << endl;

    string s3(s2); //调用拷贝构造函数
    cout << "str3 = " << s3 << endl;

    string s4(10, 'a');//使用n个字符a初始化
    cout << "str4 = " << s4 << endl;
}

int main()
{
    test01();
    return 0;
}
