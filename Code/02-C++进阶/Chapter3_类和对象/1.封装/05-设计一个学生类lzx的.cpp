#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student
{
    public:
        string name;
        string aa;
         void show()
         {
             cout<<"学生的姓名是： "<<name<<endl;
             cout<<"学生的学号是:  "<<aa<<endl;
         }
};
int main()
{
    Student lzx;
    lzx.name="LZX";
    lzx.aa="32318311";
    lzx.show();
    return 0;
}
