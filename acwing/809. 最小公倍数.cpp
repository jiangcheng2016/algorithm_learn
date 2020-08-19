/*
	输入两个整数a和b，请你编写一个函数，int lcm(int a, int b)，计算并输出a和b的最小公倍数。

	输入格式
	共一行，包含两个整数a和b。

	输出格式
	共一行，包含一个整数，表示a和b的最小公倍数。

	数据范围
	1≤a,b≤1000
	输入样例：
	6 8
	输出样例：
	24

*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}