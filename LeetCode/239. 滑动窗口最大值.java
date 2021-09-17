/**
 * 239. 滑动窗口最大值
 *给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。
*
*返回滑动窗口中的最大值。
*
 *
*
*示例 1：
*
*输入：nums = [1,3,-1,-3,5,3,6,7], k = 3
*输出：[3,3,5,5,6,7]
*解释：
*滑动窗口的位置                最大值
*---------------               -----
*[1  3  -1] -3  5  3  6  7       3
* 1 [3  -1  -3] 5  3  6  7       3
* 1  3 [-1  -3  5] 3  6  7       5
* 1  3  -1 [-3  5  3] 6  7       5
* 1  3  -1  -3 [5  3  6] 7       6
* 1  3  -1  -3  5 [3  6  7]      7
*示例 2：
*
*输入：nums = [1], k = 1
*输出：[1]
*示例 3：
*
*输入：nums = [1,-1], k = 1
*输出：[1,-1]
*示例 4：
*
*输入：nums = [9,11], k = 2
*输出：[11]
*示例 5：
*
*输入：nums = [4,-2], k = 2
*输出：[4]
 *
*
*提示：
*
*1 <= nums.length <= 105
*-104 <= nums[i] <= 104
*1 <= k <= nums.length
*
 * 
 */

class MonotonicQueue{
//monotonicQueue,monotonicQueue,monotonicQueue
    LinkedList<Integer> q = new LinkedList<>();

    //push
    public void push(int n)
    {
        //删除前面小于n的
        while(!q.isEmpty() && q.getLast() < n)
        {
            q.pollLast();
        }
        //然后将n插入队尾
        q.addLast(n);
    }
    //pop
    public void pop(int n){
        if(n == q.getFirst())
            q.pollFirst();
    }
    //getmax
    public int getMax()
    {
        return q.getFirst();
    }

}

class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        MonotonicQueue window = new MonotonicQueue();

        ArrayList<Integer> res = new ArrayList();

        for(int i = 0; i < nums.length; i++)
        {
            if(i < k-1)
            {
                window.push(nums[i]);
            }
            else{
                //将下一个放进去
                window.push(nums[i]);
                //获得最大的
                int max = window.getMax();
                res.add(max);
                //删除num[i-k+1];
                window.pop(nums[i - k + 1]);
            }
        }

        int[] ans = new int[res.size()];
        for(int i = 0; i < res.size(); i ++)
            ans[i] = res.get(i);

        return ans;
    }
}