#include <iostream>
#include <deque>
using namespace std;

////      **函数原型:
//        * deque& operator=(const deque &deq);          //重载等号操作符
//        * assign(beg, end);                            //将[beg, end)区间中的数据拷贝赋值给本身
//        * assign(n, elem);                             //将n个elem拷贝赋值给本身

void printDeque(const std::deque<int>& d)
{
    for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//赋值操作
void test01()
{
    std::deque<int> d1;
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    //重载等号操作符
    std::deque<int>d2;
    d2 = d1;
    printDeque(d2);

    //将[beg, end)区间中的数据拷贝赋值给本身
    std::deque<int>d3;
    d3.assign(d1.begin(), d1.end());
    printDeque(d3);

    //将n个elem拷贝赋值给本身
    std::deque<int>d4;
    d4.assign(10, 100);
    printDeque(d4);

}

int main()
{
    test01();
    return 0;
}