/*
	ĳ�̵����5����ʳ����ʳ���Ϊ1~5��

	5����ʳ�ļ�Ŀ��������ʾ��

	��ʳ����        �۸�
	��ʳ  1         R$ 4.00
	��ʳ  2         R$ 4.50
	��ʳ  3         R$ 5.00
	��ʳ  4         R$ 2.00
	��ʳ  5         R$ 1.50
	���ڸ���ĳ����ʳ�ı�ź���������������ܼ�ֵ�Ƕ��١�

	�����ʽ
	���������������x��y������xΪ��ʳ��ţ�yΪ��ʳ������

	�����ʽ
	�����ʽΪ��Total: R$ X��������XΪ�ܼ�ֵ��������λС����

	���ݷ�Χ
	1��x��5,
	1��y��100
	����������
	3 2
	���������
	Total: R$ 10.00

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    float price;
    switch(x)
    {
        case 1:
            price = y * 4.00;
            break;
        case 2:
            price = y * 4.50;
            break;
        case 3:
            price = y * 5.00;
            break;
        case 4:
            price = y * 2.00;
            break;
        case 5:
            price = y * 1.50;
            break;
        default:
            break;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << price;
    return 0;
}