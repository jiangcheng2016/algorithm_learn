/*
	Given a collection of distinct integers, return all possible permutations.

	Example:

	Input: [1,2,3]
	Output:
	[
	  [1,2,3],
	  [1,3,2],
	  [2,1,3],
	  [2,3,1],
	  [3,1,2],
	  [3,2,1]
	]


*/

class Solution {
public:

    int n;
    vector<bool> st;
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        st = vector<bool>(n);
        dfs(nums, 0);
        return ans;
    }

    void dfs(vector<int>& nums, int u)
    {
        if (n == u)
        {
            ans.push_back(path);
            return;
        }

        for (int i = 0; i < n; i ++)
            if (!st[i])
            {
                st[i] = true;
                path.push_back(nums[i]);
                dfs(nums, u + 1);
                path.pop_back();
                st[i] = false;
            }
    }
};