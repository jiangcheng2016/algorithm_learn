/*
	����һ������N�����մ�С�����˳���������ȫ��Լ����

	�����ʽ
	һ������N��

	�����ʽ
	���ȫ��Լ����ÿ��Լ��ռһ�С�

	���ݷ�Χ
	1��N��1000
	����������
	6
	���������
	1
	2
	3
	6

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }
    return 0;
}