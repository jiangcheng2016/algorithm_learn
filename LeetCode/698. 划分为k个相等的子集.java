/*
698. 划分为k个相等的子集
给定一个整数数组  nums 和一个正整数 k，找出是否有可能把这个数组分成 k 个非空子集，其总和都相等。

示例 1：

输入： nums = [4, 3, 2, 3, 5, 2, 1], k = 4
输出： True
说明： 有可能将其分成 4 个子集（5），（1,4），（2,3），（2,3）等于总和。
 

提示：

1 <= k <= len(nums) <= 16
0 < nums[i] < 10000


 */

class Solution {
    public boolean canPartitionKSubsets(int[] nums, int k) {
        if(k > nums.length) return false;

        int sum = 0;
        for(int x:nums) sum += x;

        if(sum % k != 0) return false;

        int target = sum / k;

        boolean[] used = new boolean[nums.length];

        return dfs(k,0,nums,0,used,target);

    }

    public boolean dfs(int k, int bucket, int[] nums, int start, boolean[] used, int target)
    {
        if(k == 0)
        {
            return true;
        }
        if(bucket == target)
            return dfs(k-1,0,nums,0,used,target);
        for(int i = start; i < nums.length; i++)
        {
            if(used[i])
                continue;
            if(bucket + nums[i] > target)
                continue;

            bucket += nums[i];
            used[i] = true;
            if(dfs(k,bucket,nums,i+1,used,target))
                return true;
            bucket -= nums[i];
            used[i] = false;
        }

        return false;
    }
}