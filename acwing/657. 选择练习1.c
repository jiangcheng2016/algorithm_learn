/*
	读取4个整数值A，B，C和D.

	如果四个整数同时满足以下条件：

	B大于C
	D大于A。
	C和D的总和大于A和B的总和。
	C和D是正值。
	A是偶数。
	则输出“Valores aceitos”，否则，输出“Valores nao aceitos”。

	输入格式
	输入占一行，包含四个整数A,B,C,D。

	输出格式
	如果输入数值满足题目条件则输出“Valores aceitos”，否则输出“Valores nao aceitos”。

	数据范围
	?100≤A,B,C,D≤100
	输入样例：
	5 6 7 8
	输出样例：
	Valores nao aceitos

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0)
        cout << "Valores aceitos";
    else
        cout << "Valores nao aceitos";
    return 0;
}