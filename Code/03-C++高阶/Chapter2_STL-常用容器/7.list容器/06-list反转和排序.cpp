#include <list>
#include <iostream>
using namespace std;

////函数原型:
//* reverse();                  //反转链表
//* sort();                     //链表排序 --> 默认的排序规则:从小到大
//* sort(自定义函数);             //链表排序 --> 按照自定义函数指定规则


void printList(const std::list<int>& L)
{
    for (std::list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//函数里面必须告诉怎么排序
bool myCompare(int val1 , int val2)
{
    return val1 > val2;
}

//反转和排序
void test01()
{
    std::list<int> L;
    L.push_back(90);
    L.push_back(30);
    L.push_back(20);
    L.push_back(70);
    printList(L);

    //反转容器的元素
    L.reverse();
    printList(L);

    //排序
    //sort(L.begin(),L.end());//错误,所有不支持随机访问迭代器的容器,不可以用标准算法(即algorithm里的算法)
    L.sort(); //默认的排序规则 从小到大
    printList(L);

    L.sort(myCompare); //指定规则，从大到小
    printList(L);
}

int main()
{
    test01();
    return 0;
}