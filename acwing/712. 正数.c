/*
	����6�����֣�����Ҫô��������Ҫô�Ǹ�����

	����ͳ�Ʋ���������ĸ�����

	�����ʽ
	�������֣�ÿ��ռһ�С�

	�����ʽ
	�����ʽΪ��x positive numbers��������xΪ�����ĸ�����

	���ݷ�Χ
	�������ֵľ���ֵ������100��

	����������
	7
	-5
	6
	-3.4
	4.6
	12
	���������
	4 positive numbers

*/

#include <iostream>
using namespace std;

int main()
{
    float a[6], count = 0;
    for (int i = 0; i < 6; i ++)
        cin >> a[i];
    for (int j = 0; j < 6; j ++)
        if(a[j] > 0)
            count ++;
    cout << count << " positive numbers";
    return 0;
}