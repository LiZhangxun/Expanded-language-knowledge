/*
| **数据类型** | **占用空间** | **有效数字范围** |
| float        | 4字节        | 7位有效数字      |
| double       | 8字节        | 15～16位有效数字 |
*/

#include <iostream>
using namespace std;

int main()
{
    //单精度float
    //如果不加f,编译器默认它为double型,然后再根据数据前面定义的类型进行转换,即double->float,导致精度丢失.
    float f1 = 3.14f;
    //双精度double
    double d1 = 3.14;

    //默认情况下输出一个小数,会显示出6位有效数字.
    cout << f1 << endl;
    cout << d1<< endl;

    //统计float和double所占内存空间
    cout << "float  sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;

    //科学计数法
    float f2 = 3e2; // 3 * 10 ^ 2
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2;  // 3 * 10 ^ -2
    cout << "f3 = " << f3 << endl;

    return 0;
}
