//结构体指针可利用操作符 -> 可以通过结构体指针访问结构体属性
#include <iostream>
using namespace std;

//结构体定义
struct student
{
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};

int main()
{
    struct student stu = { "张三",18,100};

    struct student * p = &stu; //创建结构体指针，使其指向结构体stu

    p->score = 80; //指针通过 -> 操作符可以访问成员

    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
