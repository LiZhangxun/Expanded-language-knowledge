#include <set>
#include <iostream>
using namespace std;

////set/multiset容器:
//    所有元素都会在插入时自动被排序
//    set容器插入数据时用insert
////set/multiset容器的本质:
//    set/multiset属于关联式容器,底层结构是用二叉树实现
////set和multiset区别:
//    1.set不允许容器中有重复的元素
//    2.multiset允许容器中有重复的元素
////构造:
//* set<T> st;                        //默认构造函数
//* set(const set &st);               //拷贝构造函数
////赋值:
//* set& operator=(const set &st);    //重载等号操作符

void printSet(std::set<int> & s)
{
    for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//构造和赋值
void test01()
{
    //插入数据用insert
    std::set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);

    //拷贝构造
    std::set<int>s2(s1);
    printSet(s2);

    //=号赋值
    std::set<int>s3;
    s3 = s2;
    printSet(s3);
}

int main()
{
    test01();
    return 0;
}