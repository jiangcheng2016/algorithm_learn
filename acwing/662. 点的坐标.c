/*

	������������һλС���ĸ�����X,Y��������ʾһ����ĺ������ꡣ

	�����жϸõ�������ϵ�е�λ�á�

	UOJ_1041.png

	�����ʽ
	��һ�У���������������X,Y����ʾ��ĺ������ꡣ

	�����ʽ
	������ڵ�һ���ޣ��������Q1�����ڵڶ����ޣ��������Q2�����Դ����ơ�

	�������ԭ�㴦���������Origem����

	�����������x�����ϣ��������Eixo X������y�����ϣ��������Eixo Y����

	���ݷ�Χ
	?10.0��X,Y��10.0
	��������1��
	4.5 -2.2
	�������1��
	Q4
	��������2��
	0.0 0.0
	�������2��
	Origem

*/

#include <iostream>
using namespace std;

int main()
{
     float x, y;
     cin >> x >> y;
    if(x == 0.0 && y == 0.0)
        cout << "Origem";
    else if(x == 0)
        cout << "Eixo Y";
    else if(y == 0)
        cout << "Eixo X";
    else if(x > 0 && y > 0)
        cout << "Q1";
    else if(x > 0 && y < 0)
        cout << "Q4";
    else if(x < 0 && y > 0)
        cout << "Q2";
    else
        cout << "Q3";
     
    return 0;
}