/*
    给定一个长度为n的数组a和一个整数size，请你编写一个函数，void reverse(int a[], int size)，实现将数组a中的前size个数翻转。

    输出翻转后的数组a。

    输入格式
    第一行包含两个整数n和size。

    第二行包含n个整数，表示数组a。

    输出格式
    共一行，包含n个整数，表示翻转后的数组a。

    数据范围
    1≤size≤n≤1000
    输入样例：
    5 3
    1 2 3 4 5
    输出样例：
    3 2 1 4 5

*/

#include <iostream>
using namespace std;

const int N = 1010;
int n, s;
int a[N];

void reverse(int a[], int size)
{
    for (int i = 0, j = size - 1; i < (size / 2); i ++, j --)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i ++) cin >> a[i];
    reverse(a, s);
    for (int i = 0; i < n; i ++) cout << a[i] << ' ';
    return 0;
}
