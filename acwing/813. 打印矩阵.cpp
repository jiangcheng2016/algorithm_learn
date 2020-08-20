/*
	给定一个row*col的二维数组a，请你编写一个函数，void print2D(int a[][N], int row, int col)，打印数组构成的row行，col列的矩阵。

	注意，每打印完一整行需要输出一个回车。

	输入格式
	第一行包含两个整数row, col。

	接下来row行，每行包含col个整数，表示完整二维数组a。

	输出格式
	共row行，每行col个整数，表示打印出的矩阵。

	数据范围
	1≤row≤100,
	1≤col≤100
	输入样例：
	3 4
	1 3 4 5
	2 6 9 4
	1 4 7 5
	输出样例：
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