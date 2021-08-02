/**
 * 15. 二维数组中的查找
 *在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。

请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

样例
输入数组：

[
  [1,2,8,9]，
  [2,4,9,12]，
  [4,7,10,13]，
  [6,8,11,15]
]

如果输入查找数值为7，则返回true，

如果输入查找数值为5，则返回false。
 * 
 */

/**
 * Java
 */

class Solution {
    public boolean findNumberIn2DArray(int[][] matrix, int target) {
            if(matrix.length == 0) return false;
            int i = 0, j = matrix[0].length - 1;
            while(i < matrix.length && j >= 0)
            {
                int x = matrix[i][j];
                if(x == target) return true;
                if(x > target) j --;
                else i ++;
            }
            return false;

    }
}

/**
 * C ++
 */
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;
        int i = 0, j = matrix[0].size() - 1;
        while(i < matrix.size() && j >= 0)
        {
            int x = matrix[i][j];
            if(x == target) return true;
            if(x > target) j --;
            else i ++;
        }

        return false;
    }
};
