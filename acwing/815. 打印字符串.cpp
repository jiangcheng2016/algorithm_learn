/*
		
	����һ���ַ����������дһ��������void print(char str[]), ������ַ�����ӡ������

	�����ʽ
	��һ�У�����һ���ַ�����

	�����ʽ
	��һ�У���ʾ��ӡ�����ַ�����

	���ݷ�Χ
	1���ַ������ȡ�100
	����������
	I love AcWing.
	���������
	I love AcWing.

*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 110;

void print(char str[])
{
    for (int i = 0; str[i]; i ++)
        cout << str[i];
}

int main()
{
    char str[N];
    fgets(str, N, stdin);
    print(str);
}