#include "pack.h"

//定义函数
int add(int a, int b)
{
    return a + b;
}

//交换两个整数的值
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside functiona a = " << a << endl;
    cout << "Inside functionb b = " << b << endl;
}