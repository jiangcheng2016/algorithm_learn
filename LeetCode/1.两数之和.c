/*
	����һ���������� nums?��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ����?����?���������������ǵ������±ꡣ

	����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�

	ʾ��:

	���� nums = [2, 7, 11, 15], target = 9

	��Ϊ nums[0] + nums[1] = 2 + 7 = 9
	���Է��� [0, 1]

*/

//�ⷨһ����������ʱ�临�ӶȽϸ�
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0;i < nums.size();i ++)
            for(int j = i + 1;j < nums.size();j ++)
            {
                if(target == nums[i] + nums[j])
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        return res;
    }
};