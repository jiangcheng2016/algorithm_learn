/*
	��������������x��y�������дһ��������double add(double x, double y)�����㲢���x��y�ĺ͡�

	�����ʽ
	��һ�У���������������x��y��

	�����ʽ
	��һ�У�����һ������������ʾ�������ĺͣ��������2λС����

	���ݷ�Χ
	?1000��x,y��1000
	����������
	1.11 2.22
	���������
	3.33

*/

#include <iostream>
#include <iomanip>
using namespace std;

double add(double x, double y)
{
    return x + y;
}

int main()
{
    double x, y;
    cin >> x >> y;
    
    cout << fixed << setprecision(2) << add(x, y) << endl;
    return 0;
}