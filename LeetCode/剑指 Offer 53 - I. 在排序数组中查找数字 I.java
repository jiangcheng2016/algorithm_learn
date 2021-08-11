/**
 * 剑指 Offer 53 - I. 在排序数组中查找数字 I
 * 统计一个数字在排序数组中出现的次数。
 *
  *
 *
 *示例 1:
 *
 *输入: nums = [5,7,7,8,8,10], target = 8
 *输出: 2
 *示例 2:
 *
 *输入: nums = [5,7,7,8,8,10], target = 6
 *输出: 0
  *
 *
 *提示：
 *
 *0 <= nums.length <= 105
 *-109 <= nums[i] <= 109
 *nums 是一个非递减数组
 *-109 <= target <= 109
 */


class Solution {
    public int search(int[] nums, int target) {
      
      if(nums.length == 0) return 0;

      int l = 0;
      int r = nums.length - 1;
      while(l < r ){
          int mid = l + r >> 1;
          if(nums[mid] < target) l = mid + 1;
          else r = mid;
      }

      if(nums[l] != target) return 0;

      int left = l;

      l = 0;
      r = nums.length - 1;
      while(l < r){
          int mid = l + r + 1>> 1;
          if(nums[mid] <= target) l = mid;
          else r = mid - 1;

      }
      
      return r - left + 1;
      

    }
}