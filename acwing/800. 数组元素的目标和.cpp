/*
800. 数组元素的目标和

给定两个升序排序的有序数组A和B，以及一个目标值x。数组下标从0开始。
请你求出满足A[i] + B[j] = x的数对(i, j)。

数据保证有唯一解。

输入格式
第一行包含三个整数n，m，x，分别表示A的长度，B的长度以及目标值x。

第二行包含n个整数，表示数组A。

第三行包含m个整数，表示数组B。

输出格式
共一行，包含两个整数 i 和 j。

数据范围
数组长度不超过100000。
同一数组内元素各不相同。
1≤数组元素≤109
输入样例：
4 5 6
1 2 4 7
3 4 6 8 9
输出样例：
1 1
 */

#include <iostream>
using namespace std;

int  n, m, x;
const int N = 100010;
int a[N], b[N];

int main()
{
    cin >> n >> m >> x;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int j = 0; j < m; j ++) cin >> b[j];
    
    for (int i = 0, j = m - 1; i < n; i ++)
    {
        while(j >= 0 && a[i] + b[j] > x) j --;
        if(a[i] + b[j] == x)
        {
            cout << i << ' ' << j << endl;
            break;
        }
    }
        
    return 0;
}