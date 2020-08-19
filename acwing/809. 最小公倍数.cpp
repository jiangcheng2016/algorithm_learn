/*
	������������a��b�������дһ��������int lcm(int a, int b)�����㲢���a��b����С��������

	�����ʽ
	��һ�У�������������a��b��

	�����ʽ
	��һ�У�����һ����������ʾa��b����С��������

	���ݷ�Χ
	1��a,b��1000
	����������
	6 8
	���������
	24

*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}