#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//点和圆关系判断：
//点到圆心的距离：3种情况（圆上，圆外，圆内）
//圆心坐标：x1,y1;点的坐标：x2,y2;
//点到圆心的距离和半径做对比；

class Point
{
public:
    //设置x，和y；
    void set_x_y(int a,int b)
    {
        m_x=a;
        m_y=b;
    }
    //读取点坐标
    int red_x()
    {
        return m_x;
    }
    int red_y()
    {
        return m_y;
    }
private:
    //点的坐标;
    int m_x;
    int m_y;
};
class Circle
{
public:
    //设置圆心坐标
    void set_m_c(int a,int b)
    {
        m_Center.set_x_y(a,b);
    }
    //设置半径
    void set_r(double r)
    {
        m_r=r;
    }
    //读取半径
    double red_r()
    {
        return m_r;
    }
    //读取圆心坐标
    int red_c_x()
    {
       return( m_Center.red_x());
    }
    int red_c_y()
    {
       return( m_Center.red_y());
    }
private:
    double m_r;
    //圆心坐标
    Point m_Center;//圆心坐标；利用另一个类的对象作为本类中的成员存在；
};
//全局函数判断点和圆的关系
void isincircle(Circle &c,Point & p)
{
    if(((c.red_c_x()-p.red_x())*(c.red_c_x()-p.red_x())+(c.red_c_y()-p.red_y())*(c.red_c_y()-p.red_y()))==(c.red_r()*c.red_r()))
    {
        cout<<"点在圆上"<<endl;
    }
    else if(((c.red_c_x()-p.red_x())*(c.red_c_x()-p.red_x())+(c.red_c_y()-p.red_y())*(c.red_c_y()-p.red_y()))<(c.red_r()*c.red_r()))
    {
        cout<<"点在圆内"<<endl;
    }
    else
    {
        cout<<"点在圆外"<<endl;
    }
}
int main()
{
    Circle c;
    c.set_r(1.0);
    c.set_m_c(0,0);
    Point p;
    p.set_x_y(2,0);
    isincircle(c,p);
    return 0;
}
