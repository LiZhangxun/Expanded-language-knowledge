#include <list>
#include <iostream>
using namespace std;

////list容器功能:将数据进行链式存储
//链表(list)是一种物理存储单元上非连续的存储结构,数据元素的逻辑顺序是通过链表中的指针链接实现的
////链表的组成:链表由一系列结点组成
////结点的组成:一个是存储数据元素的数据域,另一个是存储下一个结点地址的指针域
//STL中的链表是一个双向循环链表
//List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。

////函数原型:
//* list<T> lst;                                //list采用采用模板类实现,对象的默认构造形式：
//* list(beg,end);                              //构造函数将[beg, end)区间中的元素拷贝给本身。
//* list(n,elem);                               //构造函数将n个elem拷贝给本身。
//* list(const list &lst);                      //拷贝构造函数。

void printList(const std::list<int>& L)
{
    for (std::list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    //默认构造函数
    std::list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    printList(L1);

    //构造函数将[beg, end)区间中的元素拷贝给本身
    list<int>L2(L1.begin(),L1.end());
    printList(L2);

    //拷贝构造函数
    list<int>L3(L2);
    printList(L3);

    //构造函数将n个elem拷贝给本身
    list<int>L4(10, 1000);
    printList(L4);
}

int main()
{
    test01();
    return 0;
}