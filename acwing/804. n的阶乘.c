/*
	����һ������n�������дһ��������int fact(int n)�����㲢���n�Ľ׳ˡ�

	�����ʽ
	��һ�У�����һ������n��

	�����ʽ
	��һ�У�����һ��������ʾn�Ľ׳˵�ֵ��

	���ݷ�Χ
	1��n��10
	����������
	3
	���������
	6
*/

#include <iostream>
using namespace std;

int res;
int fact(int n)
{  
    if(n > 0)
        res = n * fact(n - 1);
    else
        res = 1;
    return res;
}

int main()
{
    int n ; 
    cin >> n;
    cout << fact(n);
    return 0;
}