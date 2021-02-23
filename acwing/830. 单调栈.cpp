/*
830. 单调栈
给定一个长度为N的整数数列，输出每个数左边第一个比它小的数，如果不存在则输出-1。

输入格式
第一行包含整数N，表示数列长度。

第二行包含N个整数，表示整数数列。

输出格式
共一行，包含N个整数，其中第i个数表示第i个数的左边第一个比它小的数，如果不存在则输出-1。

数据范围
1≤N≤105
1≤数列中元素≤109
输入样例：
5
3 4 2 7 5
输出样例：
-1 3 -1 2 2
 */

#include <iostream>
using namespace std;

const int N = 100010;

int n;
int stk[N], tt;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++)
    {
        int x;
        cin >> x;
        while(tt && stk[tt] >= x)tt --;
        if(tt) cout << stk[tt] << ' ';
        else cout << -1 << ' ';
        stk[ ++ tt] = x;
    }
    
    
    return 0;
}