/*
    1.第一种
    if(条件){}

    2.第二种
    if(条件){}
    else{}

    3.第三种
    if(条件){}
    else if(条件){}
*/

#include <iostream>

using namespace std;

int main()
{
    int score = 0;

    cout << "请输入考试分数：" << endl;

    cin >> score;

    if (score > 600)
    {
        cout << "我考上了一本大学" << endl;
    }
    else if (score > 500)
    {
        cout << "我考上了二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "我考上了三本大学" << endl;
    }
    else
    {
        cout << "我未考上本科" << endl;
    }

    return 0;
}

