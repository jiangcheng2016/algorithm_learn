/*
	给定100个整数，请你找出其中最大的数字，以及它的输入位置（位置从1开始）。

	输入格式
	共100行，每行包含一个整数。

	输出格式
	第一行输出最大的数字。

	第二行输出该数字的输入位置。

	数据范围
	1≤输入数字≤50000,
	保证输入数字互不相同。

	输入样例：
	22229
	48558
	24992
	4755
	11923
	...
	20213
	输出样例：
	48558
	2

*/
#include <iostream>
using namespace std;

int main()
{
    int a[100], loa, max;
    for (int i = 0; i < 100; i ++)
        cin >> a[i];
    max = a[0];
    loa = 0;
    for (int j = 1; j < 100; j ++)
    {
        if(max < a[j])
        {
            max = a[j];
            loa = j;
        }
    }
    cout << max << endl << loa + 1;
    return 0;
}