/*
	取四个整数A,B,C,D，并计算(A * B - C * D)的值。

	输入格式
	输入共四行，第一行包含整数A，第二行包含整数B，第三行包含整数C，第四行包含整数D。

	输出格式
	输出格式为“DIFERENCA = X”，其中X为(A * B - C * D)的结果。

	数据范围
	?10000≤A,B,C,D≤10000
	输入样例：
	5
	6
	7
	8
	输出样例：
	DIFERENCA = -26

*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    printf("DIFERENCA = %d",a * b - c * d);
    return 0;
}