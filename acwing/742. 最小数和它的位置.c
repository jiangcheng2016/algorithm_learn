/*
	����һ������N��һ������ΪN����������X��

	�����ҵ���������С��Ԫ�أ����������ֵ���±ꡣ

	ע�⣬����ж����Сֵ���򷵻��±���С���Ǹ���

	�����ʽ
	��һ�а�������N��

	�ڶ��а���N���ÿո����������X[i]��

	�����ʽ
	��һ�������Minimum value: x��������xΪ����Ԫ����Сֵ��

	�ڶ��������Position: y��������yΪ��СֵԪ�ص��±꣨�±��0��ʼ��������

	���ݷ�Χ
	1<N��1000,
	?1000��X[i]��1000
	����������
	10
	1 2 3 4 -5 6 7 8 9 10
	���������
	Minimum value: -5
	Position: 4


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    int min = a[0], pos = 0;
    for (int j = 1; j < n; j ++)
        if(min > a[j])
        {
            min = a[j];
            pos = j;
        }
    cout << "Minimum value: " << min << endl;
    cout << "Position: " << pos;
    return 0;
}