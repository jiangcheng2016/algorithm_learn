/*
	给定你一个球体的半径R，请你计算球体的体积。

	计算球体的公式为V=(4/3)?π?R3。

	π取3.14159。

	注意：有些语言中(4/3)无法得到1.3333…，建议在公式中使用(4/3.0)。

	输入格式
	输入一个整数R。

	输出格式
	输出格式为“VOLUME = X”，其中X为球体的体积，结果保留三位小数。

	数据范围
	1≤R≤2000
	输入样例：
	3
	输出样例：
	VOLUME = 113.097

*/

#include <iostream> 
using namespace std;
#define pi 3.14159
int main()
{
    int r;
    cin >> r;
    printf("VOLUME = %.3f",(4 / 3.0) * pi * r * r * r);
    return 0;
}
