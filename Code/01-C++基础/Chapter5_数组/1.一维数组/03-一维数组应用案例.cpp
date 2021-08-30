/*
    冒泡排序法:
        1. 比较相邻的元素.如果第一个比第二个大,就交换他们两个.
        2. 对每一对相邻元素做同样的工作,执行完毕后,找到第一个最大值.
        3. 重复以上的步骤,每次比较次数-1,直到不需要比较
    选择排序法:
        1.首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置.
        2.再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾.
        3.重复第二步，直到所有元素均排序完毕.
*/

#include <iostream>
using namespace std;
int main()
{
    // 将数组 { 4,2,8,0,5,7,1,3,9,6 } 进行升序排序
    int arr[] = {4,2,8,0,5,7,1,3,9,6};

    //计算数组长度N
    int N = sizeof(arr) / sizeof(arr[0]);

    //中间变量temp
    int temp = 0;

    // N个数,每轮比N-1次就可以比出最大(最小)的元素放在结尾
    for (int i = 0; i < N-1; ++i)
    {
        for (int j = 0; j < N-1-i; ++j)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // 输出排序好的元素
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    // 选择排序法,再将刚刚的N个数完成降序
    for (int i = 0; i < N; ++i)
    {
        //记录值最大元素的索引
        int maxindex = i;

        for (int j = i+1; j < N; ++j)
        {
            //如果当前元素比最大的还大,则更新索引maxindex.
            if (arr[j] > arr[maxindex])
            {
                maxindex = j;
            }
        }
        //如果索引变了,则换位置
        if (maxindex != i)
        {
            temp = arr[i];
            arr[i] = arr[maxindex];
            arr[maxindex] = temp;
        }
    }
    // 输出排序好的元素
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

}