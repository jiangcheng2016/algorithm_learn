/*
	��ȡ��������A��B����ʾ��Ϸ�Ŀ�ʼʱ��ͽ���ʱ�䣬��СʱΪ��λ��

	Ȼ�����������Ϸ�ĳ���ʱ�䣬��֪��Ϸ������һ�쿪ʼ������һ������������ʱ��Ϊ24Сʱ��

	���A��B��ȣ�����Ϊ������24Сʱ��

	�����ʽ
	��һ�У�������������A��B��

	�����ʽ
	�����ʽΪ��O JOGO DUROU X HORA(S)��������XΪ��Ϸ����ʱ�䡣

	���ݷ�Χ
	0��A,B��23
	��������1��
	16 2
	�������1��
	O JOGO DUROU 10 HORA(S)
	��������2��
	0 0
	�������2��
	O JOGO DUROU 24 HORA(S)
	��������3��
	2 16
	�������3��
	O JOGO DUROU 14 HORA(S)
  
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int time;
    
    if(a == b)
        time = 24;
    else if(a > b)
        time = 24 - a + b;
    else time = b - a;
    cout << "O JOGO DUROU " << time << " HORA(S)";
    return 0;
}