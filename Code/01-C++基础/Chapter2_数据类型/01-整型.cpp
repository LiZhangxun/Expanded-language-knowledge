/* C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法给变量分配内存.
| **数据类型**        | **占用空间**                                     |       取值范围     |
| short(短整型)       | 2字节                                           | (-2^15 ~ 2^15-1) |
| int(整型)           | 4字节                                           | (-2^31 ~ 2^31-1) |
| long(长整形)        | Windows为4字节，Linux为4字节(32位)，8字节(64位)     | (-2^31 ~ 2^31-1) |
| long long(长长整形) | 8字节                                            | (-2^63 ~ 2^63-1) |
 * */

//整型类型数据所占内存大小: short < int <= long <= long long

#include <iostream>
using namespace std;

int main()
{
    int a = 10;//整型变量
    cout << "Hello, World!" << endl;
    return 0;
}
