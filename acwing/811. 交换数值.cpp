/*
	������������x��y�������дһ��������void swap(int &x, int &y), ����������������ֵ������������x��y��

	�����ʽ
	��һ�У�������������x��y��

	�����ʽ
	��һ�У������������x��y��

	���ݷ�Χ
	1��x,y��100
	����������
	3 5
	���������
	5 3


*/

#include <iostream>
using namespace std;

int swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << ' ' << y << endl;
    return 0;
}