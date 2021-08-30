#include <iostream>
#include <vector>
#include <algorithm> //for_each算法需要包括此头文件
using namespace std;

//STL大体分为六大组件，分别是:容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
//1. 容器：各种数据结构，如vector、list、deque、set、map等,用来存放数据。
//2. 算法：各种常用的算法，如sort、find、copy、for_each等
//3. 迭代器：扮演了容器与算法之间的胶合剂。
//4. 仿函数：行为类似函数，可作为算法的某种策略。
//5. 适配器：一种用来修饰容器或者仿函数或迭代器接口的东西。
//6. 空间配置器：负责空间的配置与管理。

//容器：     vector
//算法：     for_each
//迭代器： vector<int>::iterator

void MyPrint(int val)
{
    cout << val << endl;
}

void test01()
{

    //创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
    std::vector<int> v; //相当于一个类模板,数据类型为int
    //向容器中放数据(尾插)
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

/*
        每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素.
        v.begin()起始迭代器，这个迭代器指向容器中第一个数据
        v.end()结束迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
        vector<int>::iterator就是拿到vector<int>这种容器的迭代器类型
*/
    //第一种遍历方式:
    std::vector<int>::iterator pBegin = v.begin(); //指向第一个数据
    std::vector<int>::iterator pEnd = v.end();  //指向最后一个数据
    while (pBegin != pEnd)//把迭代器当指针用
    {
        cout << *pBegin << endl;
        pBegin++;
    }
    cout << endl;

    //第二种遍历方式:for循环遍历
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

    //第三种遍历方式:for_each标准算法
    //使用STL提供标准遍历算法"for_each",标准算法头文件<algorithm>
    for_each(v.begin(), v.end(), MyPrint);//MyPrint作为回调函数,在遍历期间一直调用(可以转到定义部分查看)
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
