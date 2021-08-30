#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分
//实现步骤:
////1. 创建五名选手，放到vector中
////2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
////3. sort算法对deque容器中分数排序，去除最高和最低分
////4. deque容器遍历一遍，累加总分
////5. 获取平均分

//选手类
class Person
{
public:

    Person(string name, int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }

    string m_Name; //姓名
    int m_Score;  //平均分
};

//创建选手
void createPerson(std::vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        //创建选手名字
        string name = "选手";
        name += nameSeed[i];//选手A,选手B....

        //初始平均分为0
        int score = 0;

        Person p(name, score);

        //将创建的person对象 放入到容器中
        v.push_back(p);
    }
}

//打分
void setScore(std::vector<Person>& v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        //将评委的分数 放入到deque容器中
        std::deque<int>d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;  // 60 ~ 100
            d.push_back(score);
        }

        //排序
        sort(d.begin(), d.end());

        //去除最高和最低分
        d.pop_back();//去除最高分
        d.pop_front();//去除最低分

        //取平均分
        int sum = 0;
        for (std::deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            sum += *dit; //累加每个评委的分数
        }

        int avg = sum / d.size();

        //将平均分 赋值给选手身上
        it->m_Score = avg;
    }

}

//显示分数
void showScore(std::vector<Person>&v)
{
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
    }
}


int main()
{
    //1.创建5名选手
    std::vector<Person>v;  //存放选手容器
    createPerson(v);

    //2、给5名选手打分
    setScore(v);

    //3、显示最后得分
    showScore(v);

    return 0;
}