/*
	给定一个长度为 n+1 的数组nums，数组中所有的数均在 1～n 的范围内，其中 n≥1。

	请找出数组中任意一个重复的数，但不能修改输入的数组。

	样例
	给定 nums = [2, 3, 5, 4, 3, 2, 6, 7]。

	返回 2 或 3。
	思考题：如果只能使用 O(1) 的额外空间，该怎么做呢？

*/

class Solution {
    public int duplicateInArray(int[] nums) {
        
        int numr = -1;
        if(nums.length==0) return -1;
        
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]<1 || nums[i]>=nums.length) return -1;
            for(int j=i+1;j<nums.length;j++)
            {
                if(nums[i]==nums[j]) numr = nums[i];
            }
        }
        return numr;
    }
};

class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
        //二分
        int l = 1, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r >> 1; //[l, mid] [mid + 1, r]
            int s = 0;
            for(auto x:nums) s += x >= l && x <= mid;
            if(s > mid - l + 1) r = mid;
            else l = mid + 1;
        }
        
        return r;
    }
};