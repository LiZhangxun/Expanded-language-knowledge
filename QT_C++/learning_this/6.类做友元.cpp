/*
#include <iostream>
#include <string>
using namespace std;


class Building;//防止编译器报错
class goodGay
{
public:

    goodGay();
    void visit();//参观函数，访问building中的属性

private:
    Building *building;
};
class Building
{
    //告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
    friend class goodGay;//友元类

public:
    Building();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom;//卧室
};

Building::Building()//在类外声明构造函数
{
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

goodGay::goodGay()
{
    building = new Building;//在堆区创建一个对象，并用内部的building指针指向new返回值
}

void goodGay::visit()
{
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test01()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test01();
    return 0;
}
*/
