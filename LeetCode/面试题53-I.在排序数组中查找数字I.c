/*

	ͳ��һ�����������������г��ֵĴ�����


	ʾ�� 1:

	����: nums = [5,7,7,8,8,10], target = 8
	���: 2
	ʾ��?2:

	����: nums = [5,7,7,8,8,10], target = 6
	���: 0

	���ƣ�

	0 <= ���鳤�� <= 50000

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