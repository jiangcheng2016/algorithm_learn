/*
	�������������������ҳ������е����ֵ��

	���й�ʽ���ܶ�������������

	max(a,b)=(a+b+abs(a?b))2
	�����ʽ
	����ռһ�У���������������

	�����ʽ
	�����ʽΪ��X eh o maior��������XΪ�������е����ֵ��

	���ݷ�Χ
	1�ܸ���������109
	����������
	7 14 106
	���������
	106 eh o maior

*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c,res;
    cin >> a >> b >> c;
    res = (a + b + abs(a - b)) / 2;
    res = (res + c + abs(res - c)) / 2;
    printf("%d eh o maior",res);
    return 0;
}