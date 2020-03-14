/*
	����һ�������������е��������� nums����һ��Ŀ��ֵ target���ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ�á�

	����㷨ʱ�临�Ӷȱ�����?O(log n) ����

	��������в�����Ŀ��ֵ������?[-1, -1]��

	ʾ�� 1:

	����: nums = [5,7,7,8,8,10], target = 8
	���: [3,4]
	ʾ��?2:

	����: nums = [5,7,7,8,8,10], target = 6
	���: [-1,-1]

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