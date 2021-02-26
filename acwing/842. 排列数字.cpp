/*
842. 排列数字

给定一个整数n，将数字1~n排成一排，将会有很多种排列方法。

现在，请你按照字典序将所有的排列方法输出。

输入格式
共一行，包含一个整数n。

输出格式
按字典序输出所有排列方案，每个方案占一行。

数据范围
1≤n≤7
输入样例：
3
输出样例：
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
 */

#include <iostream>
using namespace std;

const int N = 10;

int n;
int path[N];
bool st[N];

void dfs(int u)
{
    //通过u进行判断是否到达叶子节点
    if (u == n)
    {
        for (int i = 0; i < n; i ++) printf("%d ", path[i]);
        puts("");
        return ;
    }
    // 
    for (int i = 1; i <= n; i ++)
        if(!st[i])
        {
            path[u] = i;
            st[i] = true;
            dfs(u + 1);
            //path[u] = 0, 在这里可省略，因为path[u] = i 这里每一次都会覆盖掉
            //path[u] = 0;
            st[i] = false;
        }
}

int main()
{
    cin >> n;
    
    dfs(0);
    
    return 0;
}