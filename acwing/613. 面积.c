/*
	��������������A��B��C��

	Ȼ�󣬼�������ͼ�ε������

	a���ױ�ΪA����ΪC�������Ρ�
	b���뾶C��Բ����pi = 3.14159��
	c���ױ�ΪA��B����ΪC�����Ρ�
	d���߳�ΪB�������Ρ�
	e���߳�ΪA��B�ĳ����Ρ�

	�����ʽ
	���빲һ�У�������������һλС���ĸ�����A��B��C��

	�����ʽ
	��������У���ʽ������ʾ��

	��һ�У���ʽΪ��TRIANGULO: X��������XΪ���������������

	�ڶ��У���ʽΪ��CIRCULO: X��������XΪ����Բ�������

	�����У���ʽΪ��TRAPEZIO: X��������XΪ�������������

	�����У���ʽΪ��QUADRADO: X��������XΪ���������������

	�����У���ʽΪ��RETANGULO: X��������XΪ���󳤷��������

	���д𰸱�����λС����

	���ݷ�Χ
	0��A,B,C��10000.0
	����������
	3.0 4.0 5.2
	���������
	TRIANGULO: 7.800
	CIRCULO: 84.949
	TRAPEZIO: 18.200
	QUADRADO: 16.000
	RETANGULO: 12.000

*/

#include <iostream>
using namespace std;

#define pi 3.14159

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    
    printf("TRIANGULO: %.3f\n",a * c * (1 / 2.0));
    printf("CIRCULO: %.3f\n",pi * c * c);
    printf("TRAPEZIO: %.3f\n",(a + b) * c * (1 / 2.0));
    printf("QUADRADO: %.3f\n",b * b);
    printf("RETANGULO: %.3f",a * b);
    
    return 0;
}