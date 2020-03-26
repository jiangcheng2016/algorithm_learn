/*
	读入两个整数值A和N，计算从A开始的N个连续整数的和。

	注意，如果读入的N为0或负数，则继续读取数字直至读入N值为正整数为止。

	输入格式
	共一行，包含整数A和若干个整数N。

	输出格式
	一个整数，表示从A开始的N个连续整数的和。

	数据范围
	1≤A≤100,
	?100≤N≤100
	输入样例1：
	3 2
	输出样例1：
	7
	输入样例2：
	3 -1 0 -2 2
	输出样例2：
	7

*/

#include <iostream>
using namespace std;

int main()
{
    int a, n, sum = 0;
    cin >> a >> n;
    while(n < 0 || n == 0)
        cin >> n;
    for (int i = 0; i < n; i ++)
    {
        sum += a;
        a ++;
    }
    cout << sum;
    return 0;
}