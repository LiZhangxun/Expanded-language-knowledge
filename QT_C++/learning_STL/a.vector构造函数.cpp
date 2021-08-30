//#include <vector>
//#include <string>
//#include <iostream>
//using namespace std;
////vector数据结构和**数组非常相似**，也称为**单端数组**
////vector 相当于一个动态数组
////**函数原型：**

////1.vector<T> v;               		  //采用模板实现类实现，默认构造函数
////2.vector(v.begin(), v.end());       //将v[begin(), end())区间中的元素拷贝给本身。
////3.vector(n, elem);                  //构造函数将n个elem拷贝给本身。
////4.vector(const vector &vec);        //拷贝构造函数。

//void printVector(vector<int>& v)
//{

//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}

//void test01()
//{
//    vector<int> v1; //无参构造
//    for (int i = 0; i < 10; i++)
//    {
//        v1.push_back(i);
//    }
//    printVector(v1);

//    vector<int> v2(v1.begin(), v1.end());
//    printVector(v2);

//    vector<int> v3(10, 100);//10个100
//    printVector(v3);

//    vector<int> v4(v3);//拷贝构造函数
//    printVector(v4);
//}

//int main()
//{
//    test01();
//    return 0;
//}
