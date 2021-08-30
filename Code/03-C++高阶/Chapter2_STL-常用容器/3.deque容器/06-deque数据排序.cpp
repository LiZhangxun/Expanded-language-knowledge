#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

////* 算法:
//* sort(iterator beg, iterator end)  //对beg和end区间内元素进行排序(从小到大排序)

void printDeque(const std::deque<int>& d)
{
    for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    std::deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);
    printDeque(d);

    //调用排序算法,对beg和end区间内元素进行排序(从小到大排序)
    sort(d.begin(), d.end());
    printDeque(d);
}

int main()
{
    test01();
    return 0;
}