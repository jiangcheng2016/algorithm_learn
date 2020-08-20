/*
	输入两个整数x和y，请你编写一个函数，void swap(int &x, int &y), 交换两个整数的数值并输出交换后的x和y。

	输入格式
	共一行，包含两个整数x和y。

	输出格式
	共一行，包含交换后的x和y。

	数据范围
	1≤x,y≤100
	输入样例：
	3 5
	输出样例：
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