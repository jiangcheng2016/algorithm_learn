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

/**
 * java
 * 
 */
class Solution {
    public int[] searchRange(int[] nums, int target) {

        int[] res = new int[]{-1, -1};
        if(nums.length == 0) return res;

        //System.out.println(res[0] + "," +res[1]);

        int l = 0;
        int r = nums.length - 1;
        while(l < r)
        {
            int mid = l + r >> 1;

            if(nums[mid] >= target) r = mid;
            else l = mid + 1;
        }

       // System.out.println("nums[l]:" + nums[l] + ",l:" + l);

        if(target == nums[l]) res[0] = l;
        else return res; 

        l = 0;r = nums.length - 1;
        while(l < r)
        {
            int mid = l + r + 1>> 1;
            if(nums[mid] <= target) l = mid;
            else r = mid - 1;
        }

        if(target == nums[l]) res[1] = l;

        return res;

    }
}