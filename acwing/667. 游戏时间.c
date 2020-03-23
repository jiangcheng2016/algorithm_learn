/*
	读取两个整数A和B，表示游戏的开始时间和结束时间，以小时为单位。

	然后请你计算游戏的持续时间，已知游戏可以在一天开始并在另一天结束，最长持续时间为24小时。

	如果A与B相等，则视为持续了24小时。

	输入格式
	共一行，包含两个整数A和B。

	输出格式
	输出格式为“O JOGO DUROU X HORA(S)”，其中X为游戏持续时间。

	数据范围
	0≤A,B≤23
	输入样例1：
	16 2
	输出样例1：
	O JOGO DUROU 10 HORA(S)
	输入样例2：
	0 0
	输出样例2：
	O JOGO DUROU 24 HORA(S)
	输入样例3：
	2 16
	输出样例3：
	O JOGO DUROU 14 HORA(S)
  
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int time;
    
    if(a == b)
        time = 24;
    else if(a > b)
        time = 24 - a + b;
    else time = b - a;
    cout << "O JOGO DUROU " << time << " HORA(S)";
    return 0;
}