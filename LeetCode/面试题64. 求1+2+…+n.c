/*
	�� 1+2+...+n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����

	?

	ʾ�� 1��

	����: n = 3
	���:?6
	ʾ�� 2��

	����: n = 9
	���:?45
	?

	���ƣ�

	1 <= n?<= 10000

*/

class Solution {
public:
    int sumNums(int n) {
        int res = n;
        n > 0 && (res += sumNums(n - 1));
        return res;
    }
};