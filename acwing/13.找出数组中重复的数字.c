/*

	����һ������Ϊ n ���������� nums�����������е����ֶ��� 0��n?1 �ķ�Χ�ڡ�

	������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�

	���ҳ�����������һ���ظ������֡�

	ע�⣺���ĳЩ���ֲ��� 0��n?1 �ķ�Χ�ڣ��������в������ظ����֣��򷵻� -1��

	����
	���� nums = [2, 3, 5, 4, 3, 2, 6, 7]��

	���� 2 �� 3��

*/


class Solution {
    public int duplicateInArray(int[] nums) {
        int num_r=-1;
        if(nums.length == 0) return -1;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]<0 || nums[i]>=nums.length) return -1;
            
            int num=nums[i];
            for(int j=i+1;j<nums.length;j++)
            {
              if(num==nums[j])
                num_r = num;
            }
            
        }
        
        return num_r;
    }
}