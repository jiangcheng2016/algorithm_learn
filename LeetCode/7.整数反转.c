/*
	����һ�� 32 λ���з�������������Ҫ�����������ÿλ�ϵ����ֽ��з�ת��

	ʾ��?1:

	����: 123
	���: 321
	?ʾ�� 2:

	����: -123
	���: -321
	ʾ�� 3:

	����: 120
	���: 21
	ע��:

	�������ǵĻ���ֻ�ܴ洢���� 32 λ���з���������������ֵ��ΧΪ?[?231,? 231?? 1]�������������裬�����ת�����������ô�ͷ��� 0��

*/


class Solution {
public:
    int reverse(int x) {
        long re_x = 0;
        int temp;
        while(x != 0)
        {
            temp = x % 10;
            re_x = re_x * 10 + temp; 
            if(re_x > INT_MAX || re_x < INT_MIN)
                return 0;
            //if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            //if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            x = x / 10;
        }
        return re_x;
    }
};