//#include <iostream>
//#include <string>
//using namespace std;

////c++编译器至少给一个类添加4个函数
////1. 默认构造函数(无参，函数体为空)
////2. 默认析构函数(无参，函数体为空)
////3. 默认拷贝构造函数，对属性进行值拷贝
////4. 赋值运算符 operator=, 对属性进行值拷贝
////如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

//class Person
//{
//public:

//    Person(int age)
//    {
//        //将年龄数据开辟到堆区
//        m_Age = new int(age);
//    }

//    //重载赋值运算符
//    Person& operator=(Person &p)
//    {
//        if (m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = NULL;
//        }
//        //编译器提供的代码是浅拷贝,会使得堆区内存重复释放
//        //m_Age = p.m_Age;

//        //提供深拷贝 解决浅拷贝的问题
//        m_Age = new int(*p.m_Age);

//        //返回自身的引用，不返回值，防止调用拷贝构造函数；
//        return *this;
//    }
//    ~Person()
//    {
//        if (m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = NULL;
//        }
//    }
//    //年龄的指针
//    int *m_Age;

//};


//void test01()
//{
//    Person p1(18);

//    Person p2(20);

//    Person p3(30);

//    p3 = p2 = p1; //赋值操作->相当于p3.operator(p2.operator(p1));

//    cout << "p1的年龄为：" << *p1.m_Age << endl;

//    cout << "p2的年龄为：" << *p2.m_Age << endl;

//    cout << "p3的年龄为：" << *p3.m_Age << endl;
//}

//int main()
//{

//    test01();

////    int a = 10;
////    int b = 20;
////    int c = 30;

////    c = b = a;
////    cout << "a = " << a << endl;
////    cout << "b = " << b << endl;
////    cout << "c = " << c << endl;


//    return 0;
//}

