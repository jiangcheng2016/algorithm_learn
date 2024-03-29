/**
 * 503. 下一个更大元素 II
 * 给定一个循环数组（最后一个元素的下一个元素是数组的第一个元素），输出每个元素的下一个更大元素。数字 x 的下一个更大的元素是按数组遍历顺序，这个数字之后的第一个比它更大的数，这意味着你应该循环地搜索它的下一个更大的数。如果不存在，则输出 -1。
*
*示例 1:
*
*输入: [1,2,1]
*输出: [2,-1,2]
*解释: 第一个 1 的下一个更大的数是 2；
*数字 2 找不到下一个更大的数； 
*第二个 1 的下一个最大的数需要循环搜索，结果也是 2。
*
 */

class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int[] res = new int[nums.length];
        Stack<Integer> s = new Stack<>();
        
        int[] nums1 = new int[nums.length*2];

        for(int i = 0; i < nums1.length; i ++)
            nums1[i] = nums[i % nums.length];

        for(int i = nums.length * 2 - 1;i >= 0; i --)
        {
            while(!s.isEmpty() && s.peek() <= nums[i%nums.length])
                s.pop();
            res[i%nums.length] = s.isEmpty() ? -1:s.peek();
            s.push(nums[i%nums.length]);
        }

        return res;
    }
}