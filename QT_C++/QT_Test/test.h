#ifndef TEST_H
#define TEST_H
using namespace std;

class Stock
{
private:
    //char company[30];
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char* co, int n = 0, double pr = 0.0);
    ~Stock();
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show()const;//不允许修改调用对象；
    const Stock& topval(const Stock& s)const;

};

#endif
