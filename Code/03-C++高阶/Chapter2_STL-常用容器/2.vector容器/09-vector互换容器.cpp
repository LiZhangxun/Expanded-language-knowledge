#include <vector>
#include <iostream>
using namespace std;

//**函数原型：**
//swap(vec);  // 将vec与本身的元素互换
//总结：swap可以使两个容器互换，可以达到实用的收缩内存效果

void printVector(std::vector<int>& v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    //创建vector容器v1
    std::vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //创建vector容器v2
    std::vector<int>v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    //互换容器
    cout << "互换后" << endl;
    v1.swap(v2);//v1 和 v2 互换
    printVector(v1);
    printVector(v2);
}

void test02()
{
    std::vector<int> v;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
    }

    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;

    v.resize(3);

    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;

    //收缩内存
    std::vector<int>(v).swap(v); //通过vector的拷贝构造函数创建一个匿名对象,再调用swap函数,等效于下面这两行代码
//    std::vector<int>v2(v);
//    v2.swap(v);

    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}
