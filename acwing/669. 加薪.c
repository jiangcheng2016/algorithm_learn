/*
	ABC��˾������Ա����н����н���������ʾ��

		нˮ                ��н����
	0 - 400.00                15%
	400.01 - 800.00           12%
	800.01 - 1200.00          10%
	1200.01 - 2000.00         7%
	���� 2000.00              4%
	��ȡԱ���Ĺ��ʣ����㲢���Ա�����¹��ʣ��Լ�Ա�����ӵ��������н���ȡ�

	�����ʽ
	��һ�У�����һ��������λС���ĸ�������

	�����ʽ
	�����ʽ������ʾ��

	��һ�������Novo salario: X����X��ʾԱ���¹��ʣ�������λС����

	�ڶ��������Reajuste ganho: Y����Y��ʾԱ�����ӵľ���������ֵ��������λС����

	�����������Em percentual: Z����Z��ʾ��н���ȣ�ע���ðٷֱȱ�ʾ��

	���ݷ�Χ
	0��ԭ���ʡ�2500.00
	����������
	400.00
	���������
	Novo salario: 460.00
	Reajuste ganho: 60.00
	Em percentual: 15 %

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float sal, sal_new,diff;
    string increase;
    cin >> sal;
    if(sal > 0 && sal <= 400.00)
    {
        sal_new = sal + sal * 0.15;
        increase = "15 %";
        diff = sal_new - sal;
    }
    else if(sal > 400.00 && sal < 800.00)
    {
        sal_new = sal + sal * 0.12;
        increase = "12 %";
        diff = sal_new - sal;
    }
    else if(sal > 800.00 && sal < 1200.00)
    {
        sal_new = sal + sal * 0.10;
        increase = "10 %";
        diff = sal_new - sal;
    }
    else if(sal > 1200.00 && sal < 2000.00)
    {
        sal_new = sal + sal * 0.07;
        increase = "7 %";
        diff = sal_new - sal;
    }
    else if(sal > 2000.00)
    {
        sal_new = sal + sal * 0.04;
        increase = "4 %";
        diff = sal_new - sal;
    }
    cout << "Novo salario: " << fixed << setprecision(2) << sal_new << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << diff << endl;
    cout << "Em percentual: " << increase;
    
    return 0;
}