/*
	ȡ�ĸ�����A,B,C,D��������(A * B - C * D)��ֵ��

	�����ʽ
	���빲���У���һ�а�������A���ڶ��а�������B�������а�������C�������а�������D��

	�����ʽ
	�����ʽΪ��DIFERENCA = X��������XΪ(A * B - C * D)�Ľ����

	���ݷ�Χ
	?10000��A,B,C,D��10000
	����������
	5
	6
	7
	8
	���������
	DIFERENCA = -26

*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    printf("DIFERENCA = %d",a * b - c * d);
    return 0;
}