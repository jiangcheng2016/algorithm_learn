/*
	输入N对整数对X,Y，对于每对X,Y，请你求出它们之间（不包括X和Y）的所有奇数的和。

	输入格式
	第一行输入整数N，表示共有N对测试数据。

	接下来N行，每行输入一组整数X和Y。

	输出格式
	每对X,Y输出一个占一行的奇数和。

	数据范围
	1≤N≤100,
	?1000≤X,Y≤1000
	输入样例：
	7
	4 5
	13 10
	6 4
	3 3
	3 5
	3 4
	3 8
	输出样例：
	0
	11
	5
	0
	0
	0
	12
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, y, temp;
    cin >> n;
    while(n --)
    {
        cin >> x >> y;
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        int  count = 0;
        for (int i = x + 1; i < y; i ++)
        {
            if(i % 2 == 1 || i % 2 == -1)
                count += i;
        }
        cout << count << endl;
    }
    return 0;
}