#include <vector>
#include <iostream>
using namespace std;

//* 判断是否为空  --- empty
//* 返回元素个数  --- size
//* 返回容器容量  --- capacity 永远>=size
//* 重新指定大小  --- resize
//* 如果容器变短，则末尾超出容器长度的元素将自动被删除.

//**函数原型：**

//1.empty();                //判断容器是否为空
//2.capacity();             //容器的容量
//3.size();                 //返回容器中元素的个数
//4.resize(int num);        //重新指定容器的长度为num，若容器变长，则以默认值0填充新位置。
//5.resize(int num, elem);  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

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
    //创建容器v1
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //判断v1是否为空
    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的容量 = " << v1.capacity() << endl;
        cout << "v1的大小 = " << v1.size() << endl;
    }

    //resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
    v1.resize(15,10);//这里指定用10填充
    printVector(v1);

    //resize 重新指定大小 ，若指定的更小，超出部分元素被删除
    v1.resize(5);
    printVector(v1);
}

int main()
{
    test01();
    return 0;
}

