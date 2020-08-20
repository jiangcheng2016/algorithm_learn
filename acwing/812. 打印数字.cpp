/*

  输入一个长度为n的数组a和一个整数size，请你编写一个函数, void print(int a[], int size), 打印数组a中的前size个数。

	输入格式
	第一行包含两个整数n和size。

	第二行包含n个整数a[i]，表示整个数组。

	输出格式
	共一行，包含size个整数，表示数组的前size个数。

	数据范围
	1≤n≤1000,
	1≤size≤n,

	输入样例：
	5 3
	1 2 3 4 5
	输出样例：
	1 2 3

*/

#include <iostream>
using namespace std;

const int N = 1010;
int a[N];
int n;
int s;

void print(int a[], int size)
{
    for (int i = 0; i < size; i ++)
        cout << a[i] << ' ';
}

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i ++)    cin >> a[i];
    print(a, s);
    return 0;
}