#include<iostream>
#include<string>
#include<cstring>
#include"test.h"
using namespace std;
int main()
{
    //using std::ios_base;
    Stock lzx("yes", 10, 10.0);
    Stock lzx2("yes", 20, 10.0);
    Stock top;
    top = lzx.topval(lzx2);
    top.buy(0,0.0);
    top.show();
}
