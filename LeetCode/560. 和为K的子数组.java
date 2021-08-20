/**
 * 560. 和为K的子数组
 *
 *
 * 给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。
*
*示例 1 :
*
*输入:nums = [1,1,1], k = 2
*输出: 2 , [1,1] 与 [1,1] 为两种不同的情况。
*说明 :
*
*数组的长度为 [1, 20,000]。
*数组中元素的范围是 [-1000, 1000] ，且整数 k 的范围是 [-1e7, 1e7]。
*
 */


class Solution {
    public int subarraySum(int[] nums, int k) {
        if(nums.length == 0) return 0;
        int n = nums.length;

        Map<Integer,Integer> hash = new HashMap<>();

        
        hash.put(0,1);
        int count = 0;
        int preSum = 0;
        for(int i = 0; i < n; i ++){
            preSum += nums[i];

            if(hash.containsKey(preSum - k)){
                count += hash.get(preSum - k);
            }

            hash.put(preSum,hash.getOrDefault(preSum, 0) + 1);
        }


        
        //暴力法
        int[] preSum = new int[n + 1];
        for(int i = 1; i <= n; i ++)
            preSum[i] = preSum[i-1] + nums[i-1];

        int count = 0;
        for(int i = 0; i < n; i ++)
            for(int j = i; j < n; j ++)
                if(preSum[j + 1] - preSum[i] == k)
                    count ++;

        return count;
    }
}