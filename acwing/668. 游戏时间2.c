/*
	��ȡ�ĸ�����A,B,C,D��������ʾ��Ϸ�Ŀ�ʼʱ��ͽ���ʱ�䡣

	����A��BΪ��ʼʱ�̵�Сʱ�ͷ�������C��DΪ����ʱ�̵�Сʱ�ͷ�������

	���������Ϸ�ĳ���ʱ�䡣

	������̳���1���ӣ������24Сʱ��

	�����ʽ
	��һ�У������ĸ�����A,B,C,D��

	�����ʽ
	�����ʽΪ��O JOGO DUROU X HORA(S) E Y MINUTO(S)������ʾ��Ϸ��������XСʱY���ӡ�

	���ݷ�Χ
	0��A,C��23,
	0��B,D��59
	��������1��
	7 8 9 10
	�������1��
	O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
	��������2��
	7 7 7 7
	�������2��
	O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
	��������3��
	7 10 8 9
	�������3��
	O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, h, m;
    cin >> a >> b >> c >> d;
    if(a == c && b == d)
        h = 24, m = 0;
    else if(d >= b)
    {
        if(a < c)
            h = 24 - a + c;
        h = c - a;
        m = d - b;
    }
    else 
    {
        m = d + 60 - b;
        c -= 1;
        if(a > c)
            h = 24 - a + c;
        else
            h = c - a;
    }
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)";
    return 0;
}