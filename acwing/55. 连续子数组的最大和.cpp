/*
55. 连续子数组的最大和
输入一个 非空 整型数组，数组里的数可能为正，也可能为负。

数组中一个或连续的多个整数组成一个子数组。

求所有子数组的和的最大值。

要求时间复杂度为 O(n)。

样例
输入：[1, -2, 3, 10, -4, 7, 2, -5]

输出：18
 */

/**
 * c++
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, s = 0;
        for (auto x:nums)
        {
            if(s <= 0) s = 0;
            s += x;
            res = max(s, res);
        }
        return res;
    }
};

/**
 * java
 */
class Solution {
    public int maxSubArray(int[] nums) {
        int res = Integer.MIN_VALUE, s = 0;
        for(int x : nums)
        {
            if(s < 0) s = 0;
            s += x;
            if(s > res) res = s;
        }
        return res;
    }
}