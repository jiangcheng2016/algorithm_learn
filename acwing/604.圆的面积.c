/*
	计算圆的面积的公式定义为A=πR2。

	请利用这个公式计算所给圆的面积。

	π的取值为3.14159。

	输入格式
	输入包含一个浮点数，为圆的半径R。

	输出格式
	输出格式为“A=X”，其中X为圆的面积，用浮点数表示，保留四位小数。

	数据范围
	0<R<10000.00
	输入样例：
	2.00
	输出样例：
	A=12.5664
*/

#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14159;
    double r;
    cin >> r;
    printf("A=%.4lf",r * r * pi);
    return 0;
}