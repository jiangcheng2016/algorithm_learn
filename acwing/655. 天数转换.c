/*
	��ȡ��Ӧ��һ���˵����䣨����Ϊ��λ��������ֵ����ת��Ϊ�꣬�º��ձ�ʾ��ʽ������ꡢ�¡��շֱ��Ӧ��ano(s)��, ��mes(es)��, ��dia(s)����

	ע�⣺Ϊ�˷�����㣬����ȫ��365�죬ÿ��30�졣 ���ݱ�֤���������12���ºͼ�������������360,363��364��

	�����ʽ
	����һ������N��

	�����ʽ
	����������������ת�����������

	���ݷ�Χ
	1��N��1000000
	����������
	400
	���������
	1 ano(s)
	1 mes(es)
	5 dia(s)

*/

#include <iostream> 
using namespace std;

int main()
{
    int day;
    cin >> day;
    int ano, mes, dia;
    ano = day / 365;
    mes = (day % 365) / 30;
    dia = day - ano * 365 - mes * 30;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;
}