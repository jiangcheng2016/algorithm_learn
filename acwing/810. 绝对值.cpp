/*
	����һ������x�������дһ��������int abs(int x)�����x�ľ���ֵ��

	�����ʽ
	��һ�У�����һ������x��

	�����ʽ
	��һ�У�����x�ľ���ֵ��

	���ݷ�Χ
	?100��x��100
	����������
	-3
	���������
	3

*/
#include <iostream>
using namespace std;

int abs(int x)
{
    if(x >= 0)  return x;
    else x = -x;
    return x;
}

int main()
{
    int x;
    cin >> x;
    cout << abs(x);
    return 0;
}