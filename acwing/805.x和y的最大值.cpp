/*
	������������x��y�������дһ��������int max(int x, int y)�����㲢���x��y�����ֵ��

	�����ʽ
	��һ�У�������������x��y��

	�����ʽ
	��һ�У�����һ����������ʾ�������нϴ���Ǹ�����

	���ݷ�Χ
	?100��x,y��100
	����������
	3 6
	���������
	6
*/

#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else 
        return y;
}

int main()
{
    int x, y;
    cin >> x >> y;
    
    cout << max(x, y) << endl;
    return 0;
}