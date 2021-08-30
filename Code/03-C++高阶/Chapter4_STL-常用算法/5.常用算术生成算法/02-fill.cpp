#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

////fill(iterator beg, iterator end, value);// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值
/////利用fill可以将容器区间内元素填充为指定的值

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{

    std::vector<int> v;
    v.resize(10);
    //填充
    fill(v.begin(), v.end(), 100);

    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}

int main()
{
    test01();
    return 0;
}