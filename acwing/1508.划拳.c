/*
	小王和小明在吃饭的时候玩起了划拳游戏。

	游戏规则是，每一轮两个人同时说出一个数（只能是 5,10,15,20 中的一个），若两人说出的数一样，则两人均不计分，否则说出数字更大的人获得两人说出的数差值这么多的分数。

	但有一个例外，如果一个人说的 20，但另一个说的是 5 或 10，则说 20 的这个人不得分，另一个人得 10 分。

	游戏共进行 k 轮，求最后两人各自得分。

	输入格式
	第一行一个整数 k，表示游戏进行的轮数。

	接下来 k 行，每行两个整数分别表示这一轮小王和小明说的数。

	输出格式
	一行输出两个整数以空格分开。

	分别为小王和小明的得分。

	数据范围
	0≤k≤100
	每人说的数一定是 5,10,15,20 中的一个

	输入样例：
	2
	10 15
	20 10
	输出样例：
	0 15

*/

#include <iostream>
using namespace std;

int main ()
{
    int k, w, m, count_w = 0, count_m = 0;
    cin >> k;
    
    for (int i = 0; i < k; i ++)
    {
        cin >> w >> m;
        if (w == 20)
        {
            if (m == 5 || m == 10)
                count_m += 10;
            else
            {
                if (w >= m)
                    count_w += (w - m);
                else
                    count_m += (m - w);
            }
        }
        else if (m == 20)
        {
            if (w == 5 || w == 10)
                count_w += 10;
            else
            {
                if (w >= m)
                    count_w += (w - m);
                else
                    count_m += (m - w);
            }
        }
        else
        {
                if (w >= m)
                    count_w += (w - m);
                else
                    count_m += (m - w);
        }
    }
    cout << count_w << ' ' << count_m << endl;
    return 0;
}