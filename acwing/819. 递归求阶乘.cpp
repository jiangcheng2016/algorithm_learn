/*
    请使用递归的方式求n的阶乘。

    输入格式
    共一行，包含一个整数n。

    输出格式
    共一行，包含一个整数，表示n的阶乘的值。

    数据范围
    1≤n≤10
    输入样例：
    3
    输出样例：
    6

*/

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1) n = 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
