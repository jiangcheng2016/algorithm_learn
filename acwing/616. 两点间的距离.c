/*
	给定两个点P1和P2，其中P1的坐标为(x1,y1)，P2的坐标为(x2,y2)，请你计算两点间的距离是多少。

	输入格式
	输入共两行，每行包含两个双精度浮点数xi,yi，表示其中一个点的坐标。

	输入数值均保留一位小数。

	输出格式
	输出你的结果，保留四位小数。

	数据范围
	?109≤xi,yi≤109
	输入样例：
	1.0 7.0
	5.0 9.0
	输出样例：
	4.4721

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    printf("%.4f",sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    return 0;
}