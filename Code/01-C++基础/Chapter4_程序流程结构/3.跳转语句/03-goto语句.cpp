/*
    语法:goto 标记
    如果标记的名称存在,执行到goto语句时,会跳转到标记的位置
    在程序中不建议使用goto语句,以免造成程序流程混乱
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "1" << endl;

    goto FLAG;

    // 以下代码不执行
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;

    FLAG:
        cout << "5" << endl;
}

