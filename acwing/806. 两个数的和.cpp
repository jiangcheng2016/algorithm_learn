/*
	输入两个浮点数x和y，请你编写一个函数，double add(double x, double y)，计算并输出x与y的和。

	输入格式
	共一行，包含两个浮点数x和y。

	输出格式
	共一行，包含一个浮点数，表示两个数的和，结果保留2位小数。

	数据范围
	?1000≤x,y≤1000
	输入样例：
	1.11 2.22
	输出样例：
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