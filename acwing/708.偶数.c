/*
	��дһ���������1��100֮�䣨����1��100����ȫ��ż����

	�����ʽ
	�����롣

	�����ʽ
	���ȫ��ż����ÿ��ż��ռһ�С�

	��������
	No input
	�������
	2
	4
	6
	...
	100

*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i ++)
    {
        if(i % 2 == 0)
            cout << i << endl;
    }
    return 0;
}