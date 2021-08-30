#include <list>
#include <iostream>
using namespace std;

////函数原型:
//* list& operator=(const list &lst);   //重载等号操作符
//* assign(beg, end);                   //将[beg, end)区间中的数据拷贝赋值给本身。
//* assign(n, elem);                    //将n个elem拷贝赋值给本身。
//* swap(lst);                          //将lst与本身的元素互换。

void printList(const list<int>& L)
{
    for (std::list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//赋值和交换
void test01()
{
    //赋初始值
    std::list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    printList(L1);

    //重载等号操作符
    std::list<int>L2;
    L2 = L1;
    printList(L2);

    //将[beg, end)区间中的数据拷贝赋值给本身
    std::list<int>L3;
    L3.assign(L2.begin(), L2.end());
    printList(L3);

    //将n个elem拷贝赋值给本身
    std::list<int>L4;
    L4.assign(10, 100);
    printList(L4);

}

//交换
void test02()
{
    std::list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    std::list<int>L2;
    L2.assign(10, 100);

    cout << "交换前： " << endl;
    printList(L1);
    printList(L2);
    cout << endl;

    //交换L1 与 L2
    L1.swap(L2);
    cout << "交换后： " << endl;
    printList(L1);
    printList(L2);

}

int main()
{
    //test01();
    test02();
    return 0;
}