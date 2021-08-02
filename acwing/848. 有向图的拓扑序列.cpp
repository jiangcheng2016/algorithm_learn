/*
848. 有向图的拓扑序列

给定一个 n 个点 m 条边的有向图，点的编号是 1 到 n，图中可能存在重边和自环。

请输出任意一个该有向图的拓扑序列，如果拓扑序列不存在，则输出 −1。

若一个由图中所有点构成的序列 A 满足：对于图中的每条边 (x,y)，x 在 A 中都出现在 y 之前，则称 A 是该图的一个拓扑序列。

输入格式
第一行包含两个整数 n 和 m。

接下来 m 行，每行包含两个整数 x 和 y，表示存在一条从点 x 到点 y 的有向边 (x,y)。

输出格式
共一行，如果存在拓扑序列，则输出任意一个合法的拓扑序列即可。

否则输出 −1。

数据范围
1≤n,m≤105
输入样例：
3 3
1 2
2 3
1 3
输出样例：
1 2 3
 */

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 100010;

int n, m;
int h[N], e[N], ne[N], idx;
//用数组模式
int q[N], d[N]; //q代表队列，d代表入度

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx ++;
}

bool topSort()
{
    int hh = 0, tt = -1;
    
    for(int i = 1; i <= n; i ++)
        if(!d[i])
            q[++ tt] = i;
            
    while(hh <= tt)
    {
        int t = q[hh ++];
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            d[j] --;
            if(d[j] == 0)
                q[++ tt] = j;
        }
    }
    
    //所有点都入队了，说明拓扑序列存在；否则不存在拓扑序列
    return tt == n - 1;
    
}

int main()
{
    memset(h, -1, sizeof h);
    
    cin >> n >> m;
    for (int i = 0 ; i < m; i ++)
    {
        int a, b; 
        cin >> a >> b;
        add(a, b);
        d[b] ++;
    }
    
    if(topSort())
    {
        for (int i = 0; i < n; i ++)
            cout << q[i] << " ";
    }
    else
    {
        cout << "-1" << endl;
    }
    
    return 0;
    
}