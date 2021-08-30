#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/////for_each(iterator beg, iterator end, _func);遍历容器
// beg 开始迭代器
// end 结束迭代器
// _func 函数或者函数对象

//普通函数
void print01(int val)
{
    cout << val << " ";
}
//函数对象
class Print02
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

//for_each算法基本用法
void test01()
{
    Print02 p;
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    //遍历算法
    for_each(v.begin(), v.end(), print01);
    cout << endl;

    for_each(v.begin(), v.end(), p);
    cout << endl;

    for_each(v.begin(), v.end(), Print02());
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
