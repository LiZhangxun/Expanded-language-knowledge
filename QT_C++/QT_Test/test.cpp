#include <iostream>
#include <string>
#include <cstring>
#include "test.h"

using namespace std;
Stock::Stock()
{
    cout << "default constructor!";
    shares = 0;
    share_val = 0.0;
    //std::strcpy(company, "name");
    company = "name";
}
Stock::Stock(const char* co, int n, double pr)
{
    shares = n;
    company = co;
    share_val = pr;
    set_tot();
}
Stock::~Stock()
{

}
void Stock::buy(int num, double price)
{
    double n;
    n=shares * share_val;
    cout << n;
}
const Stock& Stock::topval(const Stock& s)const
{
    if (s.total_val > total_val)
    {
        return(s);
    }
    else
        return *this;
}
void Stock::show()const
{
    cout << "company:  " << company<<endl;
    cout << "share_val:  " << share_val<<endl;
}
