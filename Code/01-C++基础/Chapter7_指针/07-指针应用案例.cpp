#include <iostream>
using namespace std;

//封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

//冒泡排序函数
void bubbleSort(int * arr, int len)  //int * arr 也可以写为int arr[]
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//打印数组函数
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    //定义数组
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

    //计算数组长度
    int len = sizeof(arr) / sizeof(int);

    //将数组作为指针传入给排序函数 --> 当数组名传入到函数作为参数时，被退化为指向首元素的指针
    bubbleSort(arr, len);

    //将数组作为指针传入给打印函数
    printArray(arr, len);

    return 0;
}