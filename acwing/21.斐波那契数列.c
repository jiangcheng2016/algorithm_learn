/*
	����һ������ n ����쳲��������еĵ� n �

	�ٶ���0��ʼ����0��Ϊ0��(n<=39)

	����
	�������� n=5 

	���� 5
*/

class Solution {
public:
    int Fibonacci(int n) {
        int c;
        int a = 0,b = 1;
        while(n --)
        {
            c = a + b;
            a = b,b = c;
        }
        return a;
    }
};