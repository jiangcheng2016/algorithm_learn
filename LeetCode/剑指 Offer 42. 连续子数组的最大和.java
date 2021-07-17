/*
剑指 Offer 42. 连续子数组的最大和
输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。

要求时间复杂度为O(n)。

 

示例1:

输入: nums = [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
 

提示：

1 <= arr.length <= 10^5
-100 <= arr[i] <= 100

 */
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

/**
 * C++
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, s = 0;
        for (auto x : nums)
        {
            if(s < 0) s = 0;
            s += x;
            res = max(s,res);
        }
        return res;
    }
};