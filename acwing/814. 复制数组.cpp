/*
	������������a��b�Լ�һ������size�������дһ��������void copy(int a[], int b[], int size)����a�����е�ǰsize�����֣����Ƶ�b�����С�

	������ɺ����b���顣

	�����ʽ
	��һ�а�������n, m, size���ֱ��ʾa����ĳ��ȣ�b����ĳ����Լ�����size��

	�ڶ��а���n����������ʾ����a��

	�����а���m����������ʾ����b��

	�����ʽ
	��һ�У�����m����������ʾ������ɺ������b��

	���ݷ�Χ
	1��n��m��100,
	1��size��n
	����������
	3 5 2
	1 2 3
	4 5 6 7 8
	���������
	1 2 6 7 8

*/

#include <iostream>
using namespace std;

const int M = 110;
int n, m;
int a[M], b[M];

int s;

void copy(int a[], int b[], int size)
{
    for (int i = 0; i < size; i ++)
        b[i] = a[i];
}

int main()
{
    cin >> n >> m >> s;
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int j = 0; j < m; j ++) cin >> b[j];
    copy(a, b, s);
    for (int i = 0; i < m; i ++) cout << b[i] << ' ';
    return 0;
}