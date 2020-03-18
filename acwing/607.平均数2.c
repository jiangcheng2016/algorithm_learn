/*
	读取三个浮点数A，B和C的值，对应于三个学生的成绩。

	请你计算学生的平均分，其中A的成绩的权重为2，B的成绩的权重为3，C的成绩的权值为5。

	成绩的取值范围在0到10之间，且均保留一位小数。

	输入格式
	输入共三行，每行包含一个浮点数，第一行表示A，第二行表示B，第三行表示C。

	输出格式
	输出格式为“MEDIA = X”，其中X为平均分，结果保留一位小数。

	数据范围
	0≤A,B,C≤10.0,

	输入样例：
	5.0
	6.0
	7.0
	输出样例：
	MEDIA = 6.3

*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c, ave;
    cin >> a >> b >> c;
    ave = (a * 2 + b * 3 + c * 5 ) / 10;
    printf("MEDIA = %.1f",ave);
    return 0;
}