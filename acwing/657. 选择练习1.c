/*
	��ȡ4������ֵA��B��C��D.

	����ĸ�����ͬʱ��������������

	B����C
	D����A��
	C��D���ܺʹ���A��B���ܺ͡�
	C��D����ֵ��
	A��ż����
	�������Valores aceitos�������������Valores nao aceitos����

	�����ʽ
	����ռһ�У������ĸ�����A,B,C,D��

	�����ʽ
	���������ֵ������Ŀ�����������Valores aceitos�������������Valores nao aceitos����

	���ݷ�Χ
	?100��A,B,C,D��100
	����������
	5 6 7 8
	���������
	Valores nao aceitos

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0)
        cout << "Valores aceitos";
    else
        cout << "Valores nao aceitos";
    return 0;
}