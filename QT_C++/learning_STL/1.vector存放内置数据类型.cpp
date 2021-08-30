//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;

////STL大体分为六大组件，分别是:**容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器**
//1. 容器：各种数据结构，如vector、list、deque、set、map等,用来存放数据。
//2. 算法：各种常用的算法，如sort、find、copy、for_each等
//3. 迭代器：扮演了容器与算法之间的胶合剂。
//4. 仿函数：行为类似函数，可作为算法的某种策略。
//5. 适配器：一种用来修饰容器或者仿函数或迭代器接口的东西。
//6. 空间配置器：负责空间的配置与管理。

////**容器：**置物之所也
//STL**容器**就是将运用**最广泛的一些数据结构**实现出来
//常用的数据结构：数组, 链表,树, 栈, 队列, 集合, 映射表 等
//这些容器分为**序列式容器**和**关联式容器**两种:
//**序列式容器**:强调值的排序，序列式容器中的每个元素均有固定的位置。
//​**关联式容器**:二叉树结构，各元素之间没有严格的物理上的顺序关系
////**算法：**问题之解法也
//有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法(Algorithms)
//算法分为:**质变算法**和**非质变算法**。
//质变算法：是指运算过程中会更改区间内的元素的内容。例如拷贝，替换，删除等等
//非质变算法：是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等
////**迭代器：**容器和算法之间粘合剂
//提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式。
//每个容器都有自己专属的迭代器
//迭代器使用非常类似于指针，初学阶段我们可以先理解迭代器为指针

////容器：     vector
////算法：     for_each
////迭代器： vector<int>::iterator

//void MyPrint(int val)
//{
//    cout << val << endl;
//}

//void test01()
//{

//    //创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
//    vector<int> v;
//    //向容器中放数据
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//    v.push_back(40);

//    //每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
//    //v.begin()起始迭代器，这个迭代器指向容器中第一个数据
//    //v.end()结束迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
//    //vector<int>::iterator 拿到vector<int>这种容器的迭代器类型

//    vector<int>::iterator pBegin = v.begin();
//    vector<int>::iterator pEnd = v.end();

//    //第一种遍历方式：
//    while (pBegin != pEnd)//把迭代器当指针用
//    {
//        cout << *pBegin << endl;
//        pBegin++;
//    }
//    cout << endl;
//    //第二种遍历方式：
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << endl;
//    }
//    cout << endl;
//    //第三种遍历方式：
//    //使用STL提供标准遍历算法"for_each",标准算法头文件<algorithm>
//    for_each(v.begin(), v.end(), MyPrint);//MyPrint作为回调函数
//    cout << endl;
//}

//int main()
//{
//    test01();
//    return 0;
//}
