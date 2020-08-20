/*
	����һ��row*col�Ķ�ά����a�������дһ��������void print2D(int a[][N], int row, int col)����ӡ���鹹�ɵ�row�У�col�еľ���

	ע�⣬ÿ��ӡ��һ������Ҫ���һ���س���

	�����ʽ
	��һ�а�����������row, col��

	������row�У�ÿ�а���col����������ʾ������ά����a��

	�����ʽ
	��row�У�ÿ��col����������ʾ��ӡ���ľ���

	���ݷ�Χ
	1��row��100,
	1��col��100
	����������
	3 4
	1 3 4 5
	2 6 9 4
	1 4 7 5
	���������
	1 3 4 5
	2 6 9 4
	1 4 7 5
*/

#include <iostream>
using namespace std;

const int M = 110, N = 110;
int a[M][N];
int row, col;

void print2D(int a[][N], int row, int col)
{
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i ++)
        for (int j = 0; j < col; j ++)
            cin >> a[i][j];
    print2D(a, row, col);
    return 0;
}