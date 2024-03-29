/*
843. n-皇后问题

n-皇后问题是指将 n 个皇后放在 n∗n 的国际象棋棋盘上，使得皇后不能相互攻击到，即任意两个皇后都不能处于同一行、同一列或同一斜线上。

1_597ec77c49-8-queens.png

现在给定整数n，请你输出所有的满足条件的棋子摆法。

输入格式
共一行，包含整数n。

输出格式
每个解决方案占n行，每行输出一个长度为n的字符串，用来表示完整的棋盘状态。

其中”.”表示某一个位置的方格状态为空，”Q”表示某一个位置的方格上摆着皇后。

每个方案输出完成后，输出一个空行。

注意：行末不能有多余空格。

输出方案的顺序任意，只要不重复且没有遗漏即可。

数据范围
1≤n≤9
输入样例：
4
输出样例：
.Q..
...Q
Q...
..Q.

..Q.
Q...
...Q
.Q..

 */

#include <iostream>

using namespace std;

const int N = 20;

int n;
char path[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u)
{
    if(u == n)
    {
        for (int i = 0; i < n; i ++) puts(path[i]);
        puts("");
        return;
    }
    
    for (int i = 0; i < n; i ++)
        if (!col[i] && !dg[u + i] && !udg[n - u + i])
        {
            path[u][i] = 'Q';
            col[i] = dg[u + i] = udg[n - u + i] = true;
            dfs(u + 1);
            //恢复现场
            path[u][i] = '.';
            col[i] = dg[u + i] = udg[n - u + i] = false;
        }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i ++)
        for (int j = 0; j < n; j ++)
            path[i][j] = '.';
            
    dfs(0);
    
    return 0;
}

/**
 * 第二种方法：遍历每一个格子
 */

#include <iostream>
using namespace std;

const int N = 20;

char g[N][N];
bool row[N], col[N], dg[N], udg[N];
int n;

void dfs(int x, int y, int s)
{
    if(y == n) y = 0, x ++;
    
    if(x == n)
    {
        if(s == n)
        {
            for (int i = 0; i < n; i ++) puts(g[i]);
            puts("");
        }
        return;
    }
    
    //放皇后
    dfs(x,y + 1, s);
    
    //不放皇后
    if(!row[x] && !col[y] && !udg[x + y] && !dg[x - y + n])
    {
        g[x][y] = 'Q';
        row[x] = col[y] = udg[x + y] = dg[x - y + n] = true;
        dfs(x, y + 1, s + 1);
        row[x] = col[y] = udg[x + y] = dg[x - y + n] = false;
        g[x][y] = '.';
    }
}

int main()
{
    cin >> n;
    for (int i =0; i < n; i ++ )
        for (int j = 0;j < n; j ++)
            g[i][j] = '.';
    dfs(0,0,0);
    
    return 0;
}