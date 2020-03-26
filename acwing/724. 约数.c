/*
	输入一个整数N，按照从小到大的顺序输出它的全部约数。

	输入格式
	一个整数N。

	输出格式
	输出全部约数，每个约数占一行。

	数据范围
	1≤N≤1000
	输入样例：
	6
	输出样例：
	1
	2
	3
	6

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }
    return 0;
}