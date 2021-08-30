#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

//算术生成算法属于小型算法，使用时包含的头文件为 #include <numeric>

////accumulate(iterator beg, iterator end, value);// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值 --> 起始的累加值

void test01()
{
    std::vector<int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }

    int total = accumulate(v.begin(), v.end(), 0);

    cout << "total = " << total << endl;
}

int main()
{
    test01();
    return 0;
}