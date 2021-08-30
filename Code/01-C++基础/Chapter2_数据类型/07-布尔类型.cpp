/*作用：布尔数据类型代表真或假的值
bool类型只有两个值：
    true  --- 真,本质是1 -->只要非0值,都是真.
    false --- 假,本质是0
bool类型占1个字节*/

#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    cout << flag << endl; // 1

    flag = false;
    cout << flag << endl; // 0

    cout << "size of bool = " << sizeof(bool) << endl; //1
}