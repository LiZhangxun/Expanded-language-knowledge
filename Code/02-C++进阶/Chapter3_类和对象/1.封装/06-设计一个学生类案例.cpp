#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//学生类
class Student
{
    public:
    //类中的属性和行为：成员
    //属性：成员属性 成员变量
    //行为：成员函数 成员方法
    string m_name;
    string m_id;
    void setName(string name)
    {
        m_name = name;
    }
    void setID(string id)
    {
        m_id = id;
    }
    void showStudent()
    {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }
};
int main()
{
    Student stu1;
    stu1.setName("李璋浔");
    stu1.setID("32318311");
    stu1.showStudent();
    return 0;
}
