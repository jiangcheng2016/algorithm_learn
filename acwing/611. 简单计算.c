/*
	������������Ʒ�Ĳ�Ʒ��ţ���Ʒ�����Լ���Ʒ���ۡ�

	��������������ֲ�Ʒһ����Ҫ���Ѷ���Ǯ��

	�����ʽ
	���빲���С�

	ÿ�а������������Լ�һ������������ʾ����һ����Ʒ�Ĳ�Ʒ��ţ���Ʒ�����Լ���Ʒ���ۡ�

	�����ʽ
	�����ʽΪ��VALOR A PAGAR: R$ X��������XΪ��Ʒ�ܼ�ֵ��������λС����

	���ݷ�Χ
	1�ܲ�Ʒ���,��Ʒ������10000,
	1.00�ܲ�Ʒ���ۡ�10000.00
	����������
	12 1 5.30
	16 2 5.10
	���������
	VALOR A PAGAR: R$ 15.50

*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, quantity1, quantity2;
    double price1, price2;
    cin >> num1 >> quantity1 >> price1;
    cin >> num2 >> quantity2 >> price2;
    printf("VALOR A PAGAR: R$ %.2f",quantity1 * price1 + quantity2 * price2);
    return 0;
}