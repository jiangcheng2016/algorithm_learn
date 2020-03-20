/*
	读取对应于一个人的年龄（以天为单位）的整数值，并转化为年，月和日表示方式输出，年、月、日分别对应“ano(s)”, “mes(es)”, “dia(s)”。

	注意：为了方便计算，假设全年365天，每月30天。 数据保证，不会出现12个月和几天的情况，例如360,363或364。

	输入格式
	输入一个整数N。

	输出格式
	参照输出样例，输出转换后的天数表达。

	数据范围
	1≤N≤1000000
	输入样例：
	400
	输出样例：
	1 ano(s)
	1 mes(es)
	5 dia(s)

*/

#include <iostream> 
using namespace std;

int main()
{
    int day;
    cin >> day;
    int ano, mes, dia;
    ano = day / 365;
    mes = (day % 365) / 30;
    dia = day - ano * 365 - mes * 30;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;
}