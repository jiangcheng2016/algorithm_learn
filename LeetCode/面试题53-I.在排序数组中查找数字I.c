/*

	统计一个数字在排序数组中出现的次数。


	示例 1:

	输入: nums = [5,7,7,8,8,10], target = 8
	输出: 2
	示例?2:

	输入: nums = [5,7,7,8,8,10], target = 6
	输出: 0

	限制：

	0 <= 数组长度 <= 50000

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        int  l = 0, r = nums.size() - 1;
        while( l < r)
        {
            int mid = l + r >> 1;
            if(nums[mid] < target) l = mid + 1;
            else r = mid;
        }
        if(nums[l] != target) return 0;

        int left = l;

        l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r + 1>> 1;
            if(nums[mid] <= target) l = mid;
            else r = mid - 1;
        }
        return r - left + 1;
    }
};