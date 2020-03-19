/*
	给定一个汽车行驶的总路程（km）和消耗的油量（l），请你求出汽车每消耗1升汽油可行驶多少公里路程。

	输入格式
	输入共两行，第一行包含整数X，表示行驶总路程。

	第二行包含保留一位小数的浮点数Y，表示消耗的油量。

	输出格式
	输出格式为“M km/l”，其中M为计算结果，保留三位小数。

	数据范围
	1≤X,Y≤109
	输入样例：
	500
	35.0
	输出样例：
	14.286 km/l
*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cin >> x >> y;
    printf("%.3f km/l",x / y);
    return 0;
}