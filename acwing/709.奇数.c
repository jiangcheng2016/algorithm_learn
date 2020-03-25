/*
	输入一个整数X，输出1到X之间（包括1和X）的全部奇数。

	输入格式
	一个整数X。

	输出格式
	输出所有满足条件的奇数，每个数占一行。

	数据范围
	1≤X≤1000
	输入样例：
	8
	输出样例：
	1
	3
	5
	7

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i <= x; i ++)
    {
        if(i % 2 == 1)
            cout << i << endl;
    }
    return 0;
}