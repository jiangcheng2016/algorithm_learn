/*输入一个整数n，请你编写一个函数，int fact(int n)，计算并输出n的阶乘。

输入格式
共一行，包含一个整数n。

输出格式
共一行，包含一个整数表示n的阶乘的值。

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
    while (n > 1)
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}