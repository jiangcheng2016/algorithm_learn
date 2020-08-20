/*
	给定两个数组a和b以及一个整数size，请你编写一个函数，void copy(int a[], int b[], int size)，将a数组中的前size个数字，复制到b数组中。

	复制完成后，输出b数组。

	输入格式
	第一行包含整数n, m, size，分别表示a数组的长度，b数组的长度以及整数size。

	第二行包含n个整数，表示数组a。

	第三行包含m个整数，表示数组b。

	输出格式
	共一行，包含m个整数，表示复制完成后的数组b。

	数据范围
	1≤n≤m≤100,
	1≤size≤n
	输入样例：
	3 5 2
	1 2 3
	4 5 6 7 8
	输出样例：
	1 2 6 7 8

*/

#include <iostream>
using namespace std;

const int M = 110;
int n, m;
int a[M], b[M];

int s;

void copy(int a[], int b[], int size)
{
    for (int i = 0; i < size; i ++)
        b[i] = a[i];
}

int main()
{
    cin >> n >> m >> s;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int j = 0; j < m; j ++) cin >> b[j];
    copy(a, b, s);
    for (int i = 0; i < m; i ++) cout << b[i] << ' ';
    return 0;
}