/**
 * 496. 下一个更大元素 I
 * 给你两个 没有重复元素 的数组 nums1 和 nums2 ，其中nums1 是 nums2 的子集。
 *
 *请你找出 nums1 中每个元素在 nums2 中的下一个比其大的值。
 *
 *nums1 中数字 x 的下一个更大元素是指 x 在 nums2 中对应位置的右边的第一个比 x 大的元素。如果不存在，对应位置输出 -1 。
 *
 *
 *示例 1:
 *
 *输入: nums1 = [4,1,2], nums2 = [1,3,4,2].
 *输出: [-1,3,-1]
 *解释:
 *
 * 
 *  对于 num1 中的数字 4 ，你无法在第二个数组中找到下一个更大的数字，因此输出 -1 。
 *  对于 num1 中的数字 1 ，第二个数组中数字1右边的下一个较大数字是 3 。
 *对于 num1 中的数字 2 ，第二个数组中没有下一个更大的数字，因此输出 -1 。
 *示例 2:
 *
 *输入: nums1 = [2,4], nums2 = [1,2,3,4].
 *输出: [3,-1]
 *解释:
   *  对于 num1 中的数字 2 ，第二个数组中的下一个较大数字是 3 。
  *   对于 num1 中的数字 4 ，第二个数组中没有下一个更大的数字，因此输出 -1 。
 * 
 *
 *提示：
 *
 *1 <= nums1.length <= nums2.length <= 1000
 *0 <= nums1[i], nums2[i] <= 104
 *nums1和nums2中所有整数 互不相同
 *nums1 中的所有整数同样出现在 nums2 中
 *
 */


//暴力解法

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {

        int[] res = new int[nums1.length];

        Stack<Integer> s = new Stack<>();

        for(int i = 0; i < nums1.length; i ++)
        {
            int j = 0;
            for(;j < nums2.length; j ++)
            {
                if(nums1[i] == nums2[j])
                    break;
            }

            res[i] = -1;

            for(int k = j; k < nums2.length; k ++)
            {
                if(nums2[k] > nums2[j])
                {
                    res[i] = nums2[k];
                    break;
                }
            }
        }

        return res;

    }
}

//单调栈解法
//
//
class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        //首先用单调栈计算num2中每一个值对应的结果 存到map中
        Map<Integer,Integer> map = new HashMap<>();
        Stack<Integer> s = new Stack<>();

        for(int i = nums2.length - 1; i >= 0; i --)
        {
            while(!s.isEmpty() && s.peek() < nums2[i])
                s.pop();
            
            int res = s.isEmpty() ? -1:s.peek();
            map.put(nums2[i],res); 
            s.push(nums2[i]);
        }

        int[] ans = new int[nums1.length];
        for(int i = 0; i < nums1.length; i ++)
        {
            ans[i] = map.get(nums1[i]);
        }

        return ans;
    }
}