#include <iostream>
#include <string>
using namespace std;

//**函数原型：**
//string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串

//子串
void test01()
{
    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;

    //常用方式
    string email = "hello@sina.com";
    int pos = email.find("@");
    string username = email.substr(0, pos);
    cout << "username: " << username << endl;

}

int main()
{
    test01();
    return 0;
}
