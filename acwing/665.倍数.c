/*
	��ȡ����������ֵ��A��B���� �������һ������һ�������������������Sao Multiplos�������������Nao sao Multiplos����

	�����ʽ
	��һ�У���������A��B��

	�����ʽ
	����Ŀ��������������

	���ݷ�Χ
	0<A,B<100
	����������
	6 24
	���������
	Sao Multiplos

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a % b == 0 || b % a == 0)
        cout << "Sao Multiplos";
    else 
        cout << "Nao sao Multiplos";
    return 0;
}