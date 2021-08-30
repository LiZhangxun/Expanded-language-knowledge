#include <vector>
#include <string>
#include <iostream>
using namespace std;

//容器嵌套容器
void test01()
{

    std::vector< std::vector<int> >  v;//v是大容器

    std::vector<int> v1;//v1是小容器
    std::vector<int> v2;//v2是小容器
    std::vector<int> v3;//v3是小容器
    std::vector<int> v4;//v4是小容器

    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }

    //将容器元素插入到vector v中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //通过大容器v把所有数据遍历
    for (std::vector<std::vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        //*it 相当于容器，看<>里面的是<vector<int>>
        for (std::vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
        {
            cout << *vit << " ";
        }
        cout << endl;
    }

}

int main()
{
    test01();
    return 0;
}
