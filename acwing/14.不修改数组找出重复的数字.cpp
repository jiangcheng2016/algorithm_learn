/*
	����һ������Ϊ n+1 ������nums�����������е������� 1��n �ķ�Χ�ڣ����� n��1��

	���ҳ�����������һ���ظ��������������޸���������顣

	����
	���� nums = [2, 3, 5, 4, 3, 2, 6, 7]��

	���� 2 �� 3��
	˼���⣺���ֻ��ʹ�� O(1) �Ķ���ռ䣬����ô���أ�

*/

class Solution {
    public int duplicateInArray(int[] nums) {
        
        int numr = -1;
        if(nums.length==0) return -1;
        
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]<1 || nums[i]>=nums.length) return -1;
            for(int j=i+1;j<nums.length;j++)
            {
                if(nums[i]==nums[j]) numr = nums[i];
            }
        }
        return numr;
    }
};

class Solution {
public:
    int duplicateInArray(vector<int>& nums) {
        //����
        int l = 1, r = nums.size() - 1;
        while(l < r)
        {
            int mid = l + r >> 1; //[l, mid] [mid + 1, r]
            int s = 0;
            for(auto x:nums) s += x >= l && x <= mid;
            if(s > mid - l + 1) r = mid;
            else l = mid + 1;
        }
        
        return r;
    }
};