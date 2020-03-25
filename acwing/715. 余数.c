/*
	输入一个整数N，请按顺序输出1到10000之间（不包括1和10000）的所有除以N余2的数字。

	输入格式
	一个整数N。

	输出格式
	输出所有满足条件的数字，从小到大每行输出一个。

	数据范围
	2<N<10000
	输入样例：
	13
	输出样例：
	2
	15
	28
	41
	...

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < 10000; i ++)
        if(i % n == 2)
            cout << i << endl;
    return 0;
}