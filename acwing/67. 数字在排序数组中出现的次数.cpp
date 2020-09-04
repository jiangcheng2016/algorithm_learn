/*
    统计一个数字在排序数组中出现的次数。

    例如输入排序数组[1, 2, 3, 3, 3, 3, 4, 5]和数字3，由于3在这个数组中出现了4次，因此输出4。

    样例
    输入：[1, 2, 3, 3, 3, 3, 4, 5] ,  3

    输出：4


*/
class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i ++)
        {
            if(nums[i] == k)
                count ++;
        }
        return count;
    }
};


// // 二分方法

class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        if(nums.empty()) return 0;
        int l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(nums[mid] < k) l = mid + 1;
            else r = mid;
        }
        if(nums[l] != k) return 0;
        int left = l;

        l = 0, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r + 1 >> 1;
            if(nums[mid] <= k) l = mid;
            else r = mid - 1;
        }
        return r - left + 1;
    }
};
