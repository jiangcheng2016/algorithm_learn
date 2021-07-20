/*
846. 树的重心
给定一颗树，树中包含 n 个结点（编号 1∼n）和 n−1 条无向边。

请你找到树的重心，并输出将重心删除后，剩余各个连通块中点数的最大值。

重心定义：重心是指树中的一个结点，如果将这个点删除后，剩余各个连通块中点数的最大值最小，那么这个节点被称为树的重心。

输入格式
第一行包含整数 n，表示树的结点数。

接下来 n−1 行，每行包含两个整数 a 和 b，表示点 a 和点 b 之间存在一条边。

输出格式
输出一个整数 m，表示将重心删除后，剩余各个连通块中点数的最大值。

数据范围
1≤n≤105
输入样例
9
1 2
1 7
1 4
2 8
2 5
4 3
3 9
4 6
输出样例：
4
 */
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int N = 100010, M = 2*N;

int n;
int e[M], ne[M], h[N], idx;
bool st[N];
int ans = N;

void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx ++;
}

//表示以u为根的子树中点的数量
int dfs(int u)
{
    st[u] = true;   //表示点 u 已经被遍历过了
    
    int sum = 1, res = 0;   //sum代表当前子树的大小, res代表每一个连通块大小的最大值
    for(int i = h[u]; i != -1; i = ne[i])
    {
        int j = e[i];
        if(!st[j])
        {
            int s = dfs(j); //s表示当前子树的大小
            res = max(res, s);
            sum += s;
        }
    }
    res = max(res, n - sum);
    ans = min(res, ans);
    
    return sum;
}

int main()
{
    //idx = 0;
    cin >> n;
    memset(h, -1, sizeof h);
    for (int i = 0; i < n; i ++)
    {
        int a, b;
        cin >> a >> b;
        add(a,b);
        add(b,a);
    }
    
    dfs(1);
    
    cout << ans << endl;
    
    return 0;
}