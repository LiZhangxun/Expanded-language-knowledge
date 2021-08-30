//作用:用于从键盘获取数据
//关键字:cin
//语法:cin >> 变量 --> 将输入的值赋值给cin>>后的变量

#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int main()
{
    //整型输入
    int a = 0;
    cout << "请输入整型变量：" << endl;
    cin >> a;
    cout << a << endl;

    //浮点型输入
    double d = 0;
    cout << "请输入浮点型变量：" << endl;
    cin >> d;
    cout << d << endl;

    //字符型输入
    char ch = 0;
    cout << "请输入字符型变量：" << endl;
    cin >> ch;
    cout << ch << endl;

    //字符串型输入
    string str;
    cout << "请输入字符串型变量：" << endl;
    cin >> str;
    cout << str << endl;

    //布尔类型输入
    bool flag = true;
    cout << "请输入布尔型变量：" << endl;
    cin >> flag;
    cout << flag << endl;

    // system("pause")-->Windows下这样用,并引用头文件#include <cstdlib>
    // pause() --> Linux下这样用,不过必须手动停止程序,并引用头文件#include <unistd.h>
    //这样就可以看清楚输出的结果，
    //pause会输出"press any key to continue. . ."
    //pause();
    system("read -p 'Press Enter to continue...' var");
    return 0;
}