/*
    请使用递归的方式求斐波那契数列的第n项。

    斐波那契数列：1,1,2,3,5…，这个数列从第3项开始，每一项都等于前两项之和

    输入格式
    共一行，包含整数n

    输出格式
    共一行，包含一个整数，表示斐波那契数列的第n项。

    数据范围
    1≤n≤30
    输入样例：
    4
    输出样例：
    3

*/

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1 || n == 2) n = 1;
    else
        n = sum(n - 1) + sum(n - 2);
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
