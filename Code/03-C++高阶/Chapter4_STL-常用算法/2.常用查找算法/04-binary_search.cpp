#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

////二分查找 --> 二分查找法查找效率很高，值得注意的是查找的容器中元素必须的有序序列
////bool binary_search(iterator beg, iterator end, value);//查找指定的元素,查到返回true,否则false
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素
// 注意: 在无序序列中不可用

void test01()
{
    std::vector<int>v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    //二分查找
    bool ret = binary_search(v.begin(), v.end(),2);
    if (ret)
    {
        cout << "找到了" << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}

int main()
{
    test01();
    return 0;
}