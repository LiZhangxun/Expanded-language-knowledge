/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Cube
{
private:
    double m_H;
    double m_L;
    double m_W;
    double ss;
    double t;
public:
    double r_z_ss()
    {
        return ss;
    }
    double r_z_t()
    {
        return t;
    }
    void set_m_H_L_w(double h,double l,double w)
    {
        m_H=h;
        m_L=l;
        m_W=w;
    }
    void f_m()
    {
        double s1,s2,s3;
        s1=m_L*m_H;
        s2=m_L*m_W;
        s3=m_H*m_W;
        ss=2*(s1+s2+s3);
        cout<<"正方体的面积为： "<<ss<<endl;
    }
    void f_t()
    {
        t=m_L*m_H*m_W;
        cout<<"正方体的体积为： "<<t<<endl;
    }
    //利用成员函数判断两个立方体是否相等
    bool isSamebyclass(Cube &c2)//利用引用传递,并且利用bool类型函数，只需要传递对方的对象
    {
        if((ss==c2.r_z_ss())&&(t==c2.r_z_t()))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
//利用全局函数判断两个正方体是否相等：
bool isSame(Cube &c1,Cube &c2)//利用引用传递,并且利用bool类型函数,并且要传递两个对象
{
    if((c1.r_z_ss()==c2.r_z_ss())&&(c1.r_z_t()==c2.r_z_t()))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Cube z1;
    z1.set_m_H_L_w(1.0,1.0,1.0);
    z1.f_m();
    z1.f_t();
    Cube z2;
    z2.set_m_H_L_w(1.0,1.0,1.0);
    z2.f_m();
    z2.f_t();

    //bool red=isSame(z1,z2);
    bool redbyclass=z1.isSamebyclass(z2);
    if(redbyclass)
    {
        cout<<"成员函数：z1和z2相等！"<<endl;
    }
    else
    {
        cout<<"z1和z2不相等！"<<endl;
    }
}
*/
