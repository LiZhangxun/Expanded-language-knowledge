#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

////sort(iterator beg, iterator end, _Pred);//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg开始迭代器
// end结束迭代器
// _Pred谓词

class Person{
public:
    Person(int age, string name){
        this->my_age = age;
        this->my_name = name;
    }
public:
    int my_age;
    string my_name;
};

//一元谓词
class Greater01{
public:
    bool operator()(Person& p1, Person& p2)
    {
        return p1.my_age > p2.my_age;
    }
};

void myPrint(int val)
{
    cout << val << " ";
}
void myPrint2(Person& p)
{
    cout << p.my_age <<" ";
}

void test01()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    //sort默认从小到大排序
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;

    //从大到小排序(使用内置算术仿函数)
    sort(v.begin(), v.end(), greater<int>());
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

void test02()
{
    std::vector<Person> v2;
    Person p1(20,"lzx");
    Person p2(18,"ll");
    Person p3(30,"ll1");
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);

    //自定义数据类型排序
    sort(v2.begin(),v2.end(),Greater01());
    for_each(v2.begin(), v2.end(), myPrint2);
    cout << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}