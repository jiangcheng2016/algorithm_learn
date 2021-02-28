/*
面试题 08.12. 八皇后

设计一种算法，打印 N 皇后在 N × N 棋盘上的各种摆法，其中每个皇后都不同行、不同列，也不在对角线上。这里的“对角线”指的是所有的对角线，不只是平分整个棋盘的那两条对角线。

注意：本题相对原题做了扩展

示例:

 输入：4
 输出：[[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
 解释: 4 皇后问题存在如下两个不同的解法。
[
 [".Q..",  // 解法 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // 解法 2
  "Q...",
  "...Q",
  ".Q.."]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/eight-queens-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

 */

class Solution {
public:

    int n;
    vector<vector<string>> ans;
    vector<bool> col, dg, udg;
    vector<string> path;
    vector<vector<string>> solveNQueens(int _n) {
        n = _n;
        col = vector<bool>(n);
        dg = udg = vector<bool>(n*2);
        path = vector<string>(n, string(n,'.'));

        dfs(0);

        return ans;

    }

    void dfs(int u)
    {
        if( u == n){
            ans.push_back(path);
            return ;
        }

        for (int i = 0; i < n; i ++)
        {
            if(!col[i] && !dg[u + i]  && !udg[n - u + i])
            {
                path[u][i] = 'Q';
                col[i] = dg[u + i] = udg[n - u + i] = true;
                dfs(u + 1);
                path[u][i] = '.';
                col[i] = dg[u + i] = udg[n - u + i] = false;
            }
        }
    }
};