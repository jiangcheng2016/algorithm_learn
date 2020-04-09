/*
	给定你一个长度为n的整数数列。

	请你使用归并排序对这个数列按照从小到大进行排序。

	并将排好序的数列按顺序输出。

	输入格式
	输入共两行，第一行包含整数 n。

	第二行包含 n 个整数（所有整数均在1~109范围内），表示整个数列。

	输出格式
	输出共一行，包含 n 个整数，表示排好序的数列。

	数据范围
	1≤n≤100000
	输入样例：
	5
	3 1 2 4 5
	输出样例：
	1 2 3 4 5
*/

#include <iostream>
using namespace std;

const int N = 1000010;

int q[N], temp[N];
int n;

void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;
    
    int mid = l + r >> 1;   //mid = (l + r) / 2
    
    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
        if (q[i] < q[j])    temp[k ++ ] = q[i ++ ];
        else    temp[k ++ ] = q[j ++ ];
    while (i <= mid) temp[k ++ ] = q[i ++];
    while (j <= r) temp[k ++ ] = q[j ++ ];
    
    for (int i = l, j = 0; i <= r; i ++, j ++)  q[i] = temp[j];
    
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)    scanf("%d", &q[i]);
    
    merge_sort(q, 0, n - 1);
    
    for (int i = 0; i < n; i ++)    printf("%d ", q[i]);
    return 0;
}