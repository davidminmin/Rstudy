#include <iostream>
#include <string>
using namespace std;

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
    
    float a = 1;
    float b = 3;

    float c = a / b; 
    cout << "c = " << c << endl;

    system("pause");
    return 0;
}