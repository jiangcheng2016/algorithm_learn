/*
	在这个问题中，你需要读取一个整数值并将其分解为多张钞票的和，每种面值的钞票可以使用多张，并要求所用的钞票数量尽可能少。

	请你输出读取值和钞票清单。

	钞票的可能面值有100,50,20,10,5,2,1。

	输入格式
	输入一个整数N。

	输出格式
	参照输出样例，输出读取数值以及每种面值的钞票的需求数量。

	数据范围
	0<N<1000000
	输入样例：
	576
	输出样例：
	576
	5 nota(s) de R$ 100,00
	1 nota(s) de R$ 50,00
	1 nota(s) de R$ 20,00
	0 nota(s) de R$ 10,00
	1 nota(s) de R$ 5,00
	0 nota(s) de R$ 2,00
	1 nota(s) de R$ 1,00

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c1, c2, c3, c4, c5, c6, c7;
    cout << n << endl;
    c1 = n / 100;
    n = n % 100;
    c2 = n / 50;
    n = n % 50;
    c3 = n / 20;
    n %= 20;
    c4 = n / 10;
    n %= 10;
    c5 = n / 5;
    n %= 5;
    c6 = n / 2;
    c7 = n % 2;
    
    cout << c1 << ' ' << "nota(s) de R$ 100,00" << endl;
    cout << c2 << ' ' << "nota(s) de R$ 50,00" << endl;
    cout << c3 << ' ' << "nota(s) de R$ 20,00" << endl;
    cout << c4 << ' ' << "nota(s) de R$ 10,00" << endl;
    cout << c5 << ' ' << "nota(s) de R$ 5,00" << endl;
    cout << c6 << ' ' << "nota(s) de R$ 2,00" << endl;
    cout << c7 << ' ' << "nota(s) de R$ 1,00" << endl;
    return 0;
}