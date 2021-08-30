#include <iostream>
#include <deque>
using namespace std;

//      * 函数原型:
////    * at(int idx);          //返回索引idx所指的数据
////    * operator[];           //返回索引idx所指的数据
////    * front();              //返回容器中第一个数据元素
////    * back();               //返回容器中最后一个数据元素

void printDeque(const std::deque<int>& d)
{
    for(std::deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//数据存取
void test01()
{
    //元素存放
    std::deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(100);
    d.push_front(200);

    //元素输出　--> []
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    //元素输出　--> at()
    for (int i = 0; i < d.size(); i++)
    {
        cout << d.at(i) << " ";
    }
    cout << endl;

    //获取首元素
    cout << "front:" << d.front() << endl;

    //获取尾元素
    cout << "back:" << d.back() << endl;

}

int main()
{
    test01();
    return 0;
}







