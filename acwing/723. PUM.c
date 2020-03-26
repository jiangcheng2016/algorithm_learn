/*
	输入两个整数N和M，构造一个N行M列的数字矩阵，矩阵中的数字从第一行到最后一行，按从左到右的顺序依次为1,2,3,…,N*M。

	矩阵构造完成后，将每行的最后一个数字变为PUM。

	输出最终矩阵。

	输入格式
	共一行，包含两个整数N和M。

	输出格式
	输出最终矩阵，具体形式参照输出样例。

	数据范围
	1≤N,M≤20
	输入样例：
	7 4
	输出样例：
	1 2 3 PUM
	5 6 7 PUM
	9 10 11 PUM
	13 14 15 PUM
	17 18 19 PUM
	21 22 23 PUM
	25 26 27 PUM

*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n * m; i ++)
    {
        if(i % m == 0)
        {
            cout << "PUM" << endl;
        }
        else
            cout << i << ' ';
    }
    return 0;
}