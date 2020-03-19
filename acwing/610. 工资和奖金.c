/*

	请你编写一个程序，给定你一个销售人员的名字，底薪以及月销售额。

	请你计算他的月收入是多少。

	已知月收入等于底薪加15%的月销售额。

	所有数据保留两位小数。

	输入格式
	输入第一行包含一个由大写字母构成的长度不超过10的字符串，表示销售人员的名字。

	第二行包含一个浮点数，表示该人员的底薪。

	第三行包含一个浮点数，表示该人员的月销售额。

	输出格式
	输出格式为“TOTAL = R$ X”，X为该人员月收入。

	数据范围
	0≤底薪，月销售额≤10000.00
	输入样例：
	JOAO
	500.00
	1230.30
	输出样例：
	TOTAL = R$ 684.54

*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string name;
    double salary,sales;
    cin >> name >> salary >> sales;
    printf("TOTAL = R$ %.2f",salary + sales * 0.15);
    
    return 0;
}