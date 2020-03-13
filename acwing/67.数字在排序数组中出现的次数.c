/*
	ͳ��һ�����������������г��ֵĴ�����

	����������������[1, 2, 3, 3, 3, 3, 4, 5]������3������3����������г�����4�Σ�������4��

	����
	���룺[1, 2, 3, 3, 3, 3, 4, 5] ,  3

	�����4
*/

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
            else r = mid -1;
        }
        return r - left + 1;
        
    }
};