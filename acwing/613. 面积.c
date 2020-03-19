/*
	给定三个浮点数A，B和C。

	然后，计算如下图形的面积：

	a）底边为A，高为C的三角形。
	b）半径C的圆。（pi = 3.14159）
	c）底边为A和B，高为C的梯形。
	d）边长为B的正方形。
	e）边长为A和B的长方形。

	输入格式
	输入共一行，包含三个保留一位小数的浮点数A，B，C。

	输出格式
	输出共五行，形式如下所示：

	第一行，格式为“TRIANGULO: X”，其中X为所求三角形面积。

	第二行，格式为“CIRCULO: X”，其中X为所求圆形面积。

	第三行，格式为“TRAPEZIO: X”，其中X为所求梯形面积。

	第四行，格式为“QUADRADO: X”，其中X为所求正方形面积。

	第五行，格式为“RETANGULO: X”，其中X为所求长方形面积。

	所有答案保留三位小数。

	数据范围
	0≤A,B,C≤10000.0
	输入样例：
	3.0 4.0 5.2
	输出样例：
	TRIANGULO: 7.800
	CIRCULO: 84.949
	TRAPEZIO: 18.200
	QUADRADO: 16.000
	RETANGULO: 12.000

*/

#include <iostream>
using namespace std;

#define pi 3.14159

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    
    printf("TRIANGULO: %.3f\n",a * c * (1 / 2.0));
    printf("CIRCULO: %.3f\n",pi * c * c);
    printf("TRAPEZIO: %.3f\n",(a + b) * c * (1 / 2.0));
    printf("QUADRADO: %.3f\n",b * b);
    printf("RETANGULO: %.3f",a * b);
    
    return 0;
}