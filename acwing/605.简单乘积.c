/*
	读取两个整数值。

	在此之后，计算它们的乘积并将结果存储在名为PROD的变量中。

	输出结果如下例所示。

	输入格式
	共两行，每行包含一个整数。

	输出格式
	输出格式为“PROD = X”，其中X为乘积结果。

	数据范围
	输入的两个整数的绝对值均不超过10000。

	输入样例：
	3
	9
	输出样例：
	PROD = 27
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    printf("PROD = %d",a * b);
    return 0;
}