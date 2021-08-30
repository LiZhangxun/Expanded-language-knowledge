#include <vector>
#include <iostream>
using namespace std;

//**函数原型：**
//1.vector& operator=(const vector &vec);       //重载等号操作符
//2.assign(beg, end);                           //将[beg, end)区间中的数据拷贝赋值给本身 --> 左闭右开区间
//3.assign(n, elem);                            //将n个elem拷贝赋值给本身

void printVector(std::vector<int>& v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//赋值操作
void test01()
{
    std::vector<int> v1; //无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //直接等号赋值（重载了=号）
    std::vector<int>v2;
    v2 = v1;
    printVector(v2);

    //将[beg, end)区间中的数据拷贝赋值给本身
    std::vector<int>v3;
    v3.assign(v1.begin(), v1.end());
    printVector(v3);

    //将n个elem拷贝赋值给本身
    std::vector<int>v4;
    v4.assign(10, 100);
    printVector(v4);
}

int main()
{
    test01();
    return 0;
}
