#include <vector>
#include <string>
#include <iostream>
using namespace std;

//* 减少vector在动态扩展容量时的扩展次数

//**函数原型：**
//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。

void test01()
{
    vector<int> v;

    //预留空间
    v.reserve(100000);//预先给容器分配容量为100000的内存

    int num = 0;//统计重新开辟内存的次数
    int* p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << "num:" << num << endl;
}

int main()
{
    test01();
    return 0;
}
