/*

  ����һ������Ϊn������a��һ������size�������дһ������, void print(int a[], int size), ��ӡ����a�е�ǰsize������

	�����ʽ
	��һ�а�����������n��size��

	�ڶ��а���n������a[i]����ʾ�������顣

	�����ʽ
	��һ�У�����size����������ʾ�����ǰsize������

	���ݷ�Χ
	1��n��1000,
	1��size��n,

	����������
	5 3
	1 2 3 4 5
	���������
	1 2 3

*/

#include <iostream>
using namespace std;

const int N = 1010;
int a[N];
int n;
int s;

void print(int a[], int size)
{
    for (int i = 0; i < size; i ++)
        cout << a[i] << ' ';
}

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i ++)    cin >> a[i];
    print(a, s);
    return 0;
}