/*
	ʵ��?int sqrt(int x)?������

	���㲢����?x?��ƽ����������?x �ǷǸ�������

	���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��

	ʾ�� 1:

	����: 4
	���: 2
	ʾ�� 2:

	����: 8
	���: 2
	˵��: 8 ��ƽ������ 2.82842..., 
	?    ���ڷ���������������С�����ֽ�����ȥ��

*/








class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        while(l < r)
        {
            int mid = l + (long long)r + 1 >> 1;
            if(mid <= x / mid ) l = mid;
            else r = mid - 1;
        }
        return l;
    }
};