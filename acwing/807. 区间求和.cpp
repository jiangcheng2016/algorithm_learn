/*
	������������ l �� r�������дһ��������int sum(int l, int r)�����㲢�������[l, r]�����������ĺ͡�

	�����ʽ
	��һ�У������������� l �� r��

	�����ʽ
	��һ�У�����һ����������ʾ����ĺ͡�

	���ݷ�Χ
	1��l��r��1000
	����������
	3 5
	���������
	12
*/

#include <iostream>
using namespace std;

int sum(int l, int r)
{
    int sum = 0;
    for (int i = l; i <= r; i ++)
        sum += i;
    return sum;
}


int main()
{
    int l, r;
    cin >> l >> r;
    cout << sum(l, r) << endl;
    return 0;
}