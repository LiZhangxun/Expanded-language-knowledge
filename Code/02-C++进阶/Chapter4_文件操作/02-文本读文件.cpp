//读文件步骤如下：
//1. 包含头文件
//   \#include <fstream\>
//2. 创建流对象
//   ifstream ifs;
//3. 打开文件并判断文件是否打开成功
//   ifs.open("文件路径",打开方式);
//4. 读数据
//   四种方式读取
//5. 关闭文件
//   ifs.close();

//总结：
//- 读文件可以利用 ifstream  ，或者fstream类
//- 利用is_open函数可以判断文件是否打开成功
//- close 关闭文件

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void test01()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

    //第一种方式
    //char buf[1024] = { 0 };
    //while (ifs >> buf)//读到文件尾了就退出
    //{
    //	cout << buf << endl;
    //}

    //第二种
    //char buf[1024] = { 0 };
    //while (ifs.getline(buf,sizeof(buf)))
    //{
    //	cout << buf << endl;
    //}

    //第三种
    //string buf;
    //while (getline(ifs, buf))
    //{
    //	cout << buf << endl;
    //}

    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }

    ifs.close();


}

int main()
{
    test01();
    return 0;
}
