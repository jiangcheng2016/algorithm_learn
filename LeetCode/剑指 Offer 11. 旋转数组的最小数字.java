/**
 * 剑指 Offer 11. 旋转数组的最小数字
 * 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一个旋转，该数组的最小值为1。  
*
*示例 1：
*
*输入：[3,4,5,1,2]
*输出：1
*示例 2：
*
*输入：[2,2,2,0,1]
*输出：0
*
 */

/**
 * Java
 */

class Solution {
    public int minArray(int[] numbers) {
        if(numbers.length == 0) return -1;

        int n = numbers.length - 1;
        while(n > 0 && numbers[n] == numbers[0]) n --;
        if(numbers[n] >= numbers[0]) return numbers[0];

        int l = 0, r = n;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(numbers[mid] < numbers[0]) r = mid;
            else l = mid + 1;
        }
        return numbers[r];
    }
}


/**
 * C++
 */
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty()) return -1;
        int n = nums.size() - 1;
        while(n > 0 && nums[n] == nums[0]) n --;
        
        if(nums[n] >= nums[0]) return nums[0];
        
        int l = 0, r = n;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(nums[mid] < nums[0]) r = mid;
            else l = mid + 1;
        }
        return nums[l];
    }
};