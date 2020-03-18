/*
	读取两个浮点数A和B的值，对应于两个学生的成绩。

	请你计算学生的平均分，其中A的成绩的权重为3.5，B的成绩的权重为7.5。

	成绩的取值范围在0到10之间，且均保留一位小数。

	输入格式
	输入占两行，每行包含一个浮点数，第一行表示A，第二行表示B。

	输出格式
	输出格式为“MEDIA = X”，其中X为平均分，结果保留五位小数。

	数据范围
	0≤A,B≤10.0
	输入样例：
	5.0
	7.1
	输出样例：
	MEDIA = 6.43182
*/

#include <iostream>
using namespace std;
int main()
{
    float a, b;
    double ave;
    cin >> a >> b;
    ave = (a * 3.5 + b * 7.5) / 11;
    printf("MEDIA = %.5lf",ave);
    return 0;
}