/*
	给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

	你的算法时间复杂度必须是?O(log n) 级别。

	如果数组中不存在目标值，返回?[-1, -1]。

	示例 1:

	输入: nums = [5,7,7,8,8,10], target = 8
	输出: [3,4]
	示例?2:

	输入: nums = [5,7,7,8,8,10], target = 6
	输出: [-1,-1]

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1};
        vector<int> resn;
        if(nums.empty()) return res;
        int l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(nums[mid] < target) l = mid + 1;
            else r = mid;
        }
        if(nums[l] != target) return res;
        int left = l;

        l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r + 1 >> 1;
            if(nums[mid] <= target) l = mid;
            else r = mid - 1;
        }
        resn.push_back(left);
        resn.push_back(r);
        res.swap(resn);
        return res;
    }
};

/**
 * java
 * 
 */
class Solution {
    public int[] searchRange(int[] nums, int target) {

        int[] res = new int[]{-1, -1};
        if(nums.length == 0) return res;

        //System.out.println(res[0] + "," +res[1]);

        int l = 0;
        int r = nums.length - 1;
        while(l < r)
        {
            int mid = l + r >> 1;

            if(nums[mid] >= target) r = mid;
            else l = mid + 1;
        }

       // System.out.println("nums[l]:" + nums[l] + ",l:" + l);

        if(target == nums[l]) res[0] = l;
        else return res; 

        l = 0;r = nums.length - 1;
        while(l < r)
        {
            int mid = l + r + 1>> 1;
            if(nums[mid] <= target) l = mid;
            else r = mid - 1;
        }

        if(target == nums[l]) res[1] = l;

        return res;

    }
}