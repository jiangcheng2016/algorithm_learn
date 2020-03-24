/*
	读取四个整数A,B,C,D，用来表示游戏的开始时间和结束时间。

	其中A和B为开始时刻的小时和分钟数，C和D为结束时刻的小时和分钟数。

	请你计算游戏的持续时间。

	比赛最短持续1分钟，最长持续24小时。

	输入格式
	共一行，包含四个整数A,B,C,D。

	输出格式
	输出格式为“O JOGO DUROU X HORA(S) E Y MINUTO(S)”，表示游戏共持续了X小时Y分钟。

	数据范围
	0≤A,C≤23,
	0≤B,D≤59
	输入样例1：
	7 8 9 10
	输出样例1：
	O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
	输入样例2：
	7 7 7 7
	输出样例2：
	O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
	输入样例3：
	7 10 8 9
	输出样例3：
	O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, h, m;
    cin >> a >> b >> c >> d;
    if(a == c && b == d)
        h = 24, m = 0;
    else if(d >= b)
    {
        if(a < c)
            h = 24 - a + c;
        h = c - a;
        m = d - b;
    }
    else 
    {
        m = d + 60 - b;
        c -= 1;
        if(a > c)
            h = 24 - a + c;
        else
            h = c - a;
    }
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)";
    return 0;
}