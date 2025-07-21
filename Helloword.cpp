//#include <iostream>
#include <string>

#include "pack.h"
//using namespace std;

// 预处理  定义宏
//#define PI 3.14159
//const double PI = 3.14159;

int main()
{

    //cout << "Hello, World!" << endl;

    /* int 4字节 double 8字节(15~16位有效数字) float 4字节(7位有效数字) char 1字节  bool 1字节
     short 2字节 long 4字节 long long 8字节 
     unsigned int 4字节 unsigned long 4字节 unsigned long long 8字节*/
    //cout << "sizeof(int) = " << sizeof(int) << endl;

    /*int a = 0;

    cout << "请输入一个数字：" << endl;

    cin >> a;

    cout << "你输入的数字是：" << a << endl;*/

    //cout << "圆的周长为：" << (double)(2 * PI * 10) << endl;

    /*float a = 0.12345678f;//输出0.1234567 丢失精度

    cout << "a = " << a << endl;*/

    /*char c[] = "ABC DD"; // 字符类型
    cout << sizeof(c) << endl;// sizeof(c)会计算'\0'字符

    string str = "Hello, World!"; // 字符串类型 
    cout << "字符串长度：" << str.length() << endl;//length不会计算'\0'字符*/

    // bool b = false;
    // cout << "b = " << b << endl;

    // float a;
    // cout << "请输入一个数字：" << endl;//输入超过float范围的数字会导致精度丢失
    // cin >> a;
    // cout << "你输入的数字是：" << a << endl;
    
    // float a = 1;
    // float b = 3;

    // float c = a / b; 
    // cout << "c = " << c << endl;

    // int a = 10;
    // cout << "a = " << a++ << endl;// 后缀递增，先输出再加1
    // cout << "a = " << ++a << endl;// 前缀递增，先加1再输出

    // int a = 10;
    // a %= 5;
    // cout << "a = " << a << endl; 

    // bool a = (2==1);
    // cout << "a = " << a << endl; // 输出1，表示true

    // bool a = ~(2!=1);//任何非零整数赋值给 bool 类型，都会被转换为 true，即 1。
    // cout << "a = " << a << endl;

    //三数比较，取最大值
    // int a, b, c; 
    // cin >> a >> b >> c;
    // cout << "max = " << ((((a > b) ? a : b) > c) ? ((a > b) ? a : b) : c) << endl;

    // int a = 30;

    // switch (a)//break; 结束当前 case 的执行; 没有break继续执行下一个 case 的代码
    // {
    // case 10:
    //     /* code */
    //     cout << "a = 10" << endl;
    //     break;
    // case 20:
    //     cout << "a = 20" << endl;
    //     /* code */
    //     break;
    // default:
    //     cout << "default" << endl;
    //     break;
    // }

    // int a = 10, b = 0;
    // while (b < a) // while 循环
    // {
    //     cout << "b = " << b << endl;
    //     b++;
    // }

    // do
    // { 
    //     cout << "b = " << b << endl; // do-while 循环，至少执行一次
    //     b++;
    // } while (b < a);

    // for (int i = 0; i < 10; i++) // for 循环
    // {
    //     cout << "i = " << i << endl;
    // }
    // int r = rand() % 100;
    // int a = 0;
    // cin >> a;

    // while (a != r)
    // {
    //     if (a > r)
    //     {
    //         cout << "太大了" << endl;
    //     }
    //     else
    //     {
    //         cout << "太小了" << endl;
    //     }
    //     cin >> a;
    // }

    //获取一个十进制数字的各个位数 取模10 除于10
    // int a;
    // cin >> a;

    // if(a == 0) 
    // {
    //     cout << "输入的数字为0" << endl;
    // }

    // while (a != 0)
    // {
    //     cout << a % 10 << endl;
    //     a /= 10;
    // }

    // for(int i = 1; i <= 100; i++)     // 1-100
    // {
    //     if(i%10 == 7)
    //     {
    //         cout << i <<"敲桌子" << endl; // 跳过当前循环
    //     } 
    //     else if(i/10 == 7)
    //     {
    //         cout << i <<"敲桌子" << endl; // 跳过当前循环
    //     }
    //     else if(i%7 == 0)
    //     {
    //         cout << i <<"敲桌子" << endl; // 跳过当前循环
    //     }
    //     else
    //     {
    //         continue;;
    //     }
    // }

    // for (int i = 1; i < 10; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << i << "*" << j << "=" << i*j << " ";
    //     }
    //     cout << endl;
    // }
    
    // int a = 10;
    // FLAG:
    // a -= 1;
    // FLAG1:
    // a -= 1;
    // FLAG2:
    // if (a == 0)
    // {
    //      cout << "a = " << a << endl;
    //      goto END;
    // }
    // goto FLAG;
    // END:

    // int arr[5] = { 1, 2, 3, 4, 5 };
    // int max;
    // for(int i = 0; i < 4; i++)
    // {
    //     max = arr[i] > arr[i + 1] ? arr[i] : arr[i + 1];
    // }
    // cout << "max = " << max << endl;

    // int arr[5] = { 1, 2, 3, 4, 5 };

    // for(int i = 0; i < sizeof(arr)/8; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[4 - i];
    //     arr[4 - i] = temp;
    // }
    // cout << "反转后的数组：";
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // //冒泡排序
    // int arr[5] = { 4,2,3,1,5 };
    // int temp;
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // cout << "排序后的数组：";

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
    // cout << *(*(arr+1)+1) << endl;//数组名代表数据头地址，其地址维度与数组维度一致

    // int arr[3][3] = { {100 , 100, 100}, {90, 50, 100}, {60, 70, 80} };
    // string name[3] = { "张三", "李四", "王五" };
    // for(int i = 0; i < 3; i++)
    // {
    //     int arr_sum = 0;
    //     for(int j = 0; j < 3; j++)
    //     {
    //         arr_sum += arr[i][j];
    //     }
    //     cout << name[i] << "同学的总成绩为" << arr_sum <<endl;
    // }

    // int a = 10, b = 20;
    // cout << "a + b = " << add(a, b) << endl; //调用函数

    //传入参数的值不会改变原来的值
    // int a = 10, b = 20;
    // swap(a, b);
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // int a = 10;
    // int * p;
    // p = &a;
    // cout << "a = " << a << endl;
    // cout << "&a = " << &a << endl;
    // cout << "p = " << p << endl;
    // cout << "*p = " << *p << endl;

    

    system("pause");
    return 0;
}
