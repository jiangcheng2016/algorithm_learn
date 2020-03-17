/*
	����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֡�

	����
	���룺
	[
	  [1, 2, 3, 4],
	  [5, 6, 7, 8],
	  [9,10,11,12]
	]

	�����[1,2,3,4,8,12,11,10,9,5,6,7]
*/

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        int n = matrix.size();
        if(!n) return res;
        int m = matrix[0].size();
        vector<vector<bool>> st(n, vector<bool> (m, false));
        
        //int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
        int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
        int x = 0, y = 0, d = 0;
        
        for (int i = 0; i < n * m; i ++)
        {
            res.push_back(matrix[x][y]);
            st[x][y] = true;
            int a = x + dx[d], b = y + dy[d];
            if(a < 0 || a >= n || b < 0 || b >= m || st[a][b])
            {
                d = (d + 1) % 4;
                a = x + dx[d], b = y + dy[d];
            }
            x = a, y = b;
        }
        
        return res;
        
    }
};