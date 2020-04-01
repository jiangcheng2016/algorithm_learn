/*
	输入一个整数n，请你编写一个函数，int fact(int n)，计算并输出n的阶乘。

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

int res;
int fact(int n)
{  
    if(n > 0)
        res = n * fact(n - 1);
    else
        res = 1;
    return res;
}

int main()
{
    int n ; 
    cin >> n;
    cout << fact(n);
    return 0;
}