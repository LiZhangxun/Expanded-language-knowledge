#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

////transform(iterator beg1, iterator end1, iterator beg2, _func);搬运容器到另一个容器中
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象
////搬运的目标容器必须要提前开辟空间，否则无法正常搬运

//常用遍历算法:transform
class TransForm
{
public:
    int operator()(int val)
    {
        return val;
    }

};

class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    std::vector<int>v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    std::vector<int>vTarget; //目标容器

    vTarget.resize(v.size()); // 目标容器需要提前开辟空间

    transform(v.begin(), v.end(), vTarget.begin(), TransForm());

    for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main()
{
    test01();
    return 0;
}