/*
	����һ������X�����1��X֮�䣨����1��X����ȫ��������

	�����ʽ
	һ������X��

	�����ʽ
	�����������������������ÿ����ռһ�С�

	���ݷ�Χ
	1��X��1000
	����������
	8
	���������
	1
	3
	5
	7

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i <= x; i ++)
    {
        if(i % 2 == 1)
            cout << i << endl;
    }
    return 0;
}