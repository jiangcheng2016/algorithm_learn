/**
 * 剑指 Offer 12. 矩阵中的路径
 * 给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。
*
*单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。
*
*
*例如，在下面的 3×4 的矩阵中包含单词 "ABCCED"（单词中的字母已标出）。
*
*
*
* 
*
*示例 1：
*
*输入：board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
*输出：true
*示例 2：
*
*输入：board = [["a","b"],["c","d"]], word = "abcd"
*输出：false
 *
*
*提示：
*
*1 <= board.length <= 200
*1 <= board[i].length <= 200
*board 和 word 仅由大小写英文字母组成
*
 */

/**
 * Java
 */

class Solution {
    public boolean exist(char[][] board, String word) {
        char[] str = word.toCharArray();
        //System.out.println(str[0]);
        for(int i = 0; i < board.length; i ++)
            for(int j = 0; j < board[i].length; j ++)
                if(dfs(board, str, 0, i, j))
                    return true;
        return false;
    }

    public boolean dfs(char[][] board, char[] str, int u,  int x, int y){
        if(board[x][y] != str[u]) return false;
        if(u == str.length - 1) return true;

        int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
        char t = board[x][y];
        board[x][y] = '*';

        for (int i = 0; i < 4; i ++)
        {
            int a = x + dx[i], b = y + dy[i];
            if(a >= 0 && a < board.length && b >= 0 && b < board[a].length)
            {
                if(dfs(board, str, u + 1, a, b)) return true;
            }
        }
        //恢复现场
        board[x][y] = t;
        return false;
        
    }
}

/**
 * 
 */