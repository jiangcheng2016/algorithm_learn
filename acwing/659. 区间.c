/*
	����һ���������������жϸ��������������ĸ����䣺[0,25], (25,50], (50,75], (75,100]��

	�����������ֵС��0�����100������������Fora de intervalo������ʾ������Χ��

	������(a,b):��ʵ��a��ʵ��b֮�������ʵ������������a��b��

	������[a,b]����ʵ��a��ʵ��b֮�������ʵ��������a��b��

	�����ʽ
	����һ����������

	�����ʽ
	�ж�������ֵλ���ĸ����䣬����ʽ��Intervalo x�����������xΪ���䷶Χ[0,25],(25,50],(50,75],(75,100]�е�һ����

	�����ֵλ����������֮�⣬�������Fora de intervalo����

	����������
	25.01
	���������
	Intervalo (25,50]

*/


#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if(n < 0 || n > 100)
        cout << "Fora de intervalo";
    else if(n >= 0 && n <= 25)
        cout << "Intervalo [0,25]";
    else if(n > 25 && n <= 50)
        cout << "Intervalo (25,50]";
    else if(n > 50 && n <= 75)
        cout << "Intervalo (50,75]";
    else
        cout << "Intervalo (75,100]";
    return 0;
}