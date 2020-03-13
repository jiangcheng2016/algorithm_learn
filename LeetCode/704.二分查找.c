/*
	��һ��?n?��Ԫ������ģ�������������?nums ��һ��Ŀ��ֵ?target ?��дһ����������?nums?�е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��


	ʾ�� 1:

	����: nums = [-1,0,3,5,9,12], target = 9
	���: 4
	����: 9 ������ nums �в����±�Ϊ 4
	ʾ��?2:

	����: nums = [-1,0,3,5,9,12], target = 2
	���: -1
	����: 2 ������ nums ����˷��� -1
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while(l < r)
        {
            int mid = l + r >> 1;
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) l = mid + 1;
            else r = mid;
        }
        return -1;
    }
};