/*
	输入一个整数N，输出N的乘法表，如下：

	1 x N = N      
	2 x N = 2N        
	...       
	10 x N = 10N 
	输入格式
	一个整数N。

	输出格式
	输出N的乘法表，具体形式参照输出样例。

	数据范围
	1<N<1000
	输入样例：
	140
	输出样例：
	1 x 140 = 140
	2 x 140 = 280
	3 x 140 = 420
	4 x 140 = 560
	5 x 140 = 700
	6 x 140 = 840
	7 x 140 = 980
	8 x 140 = 1120
	9 x 140 = 1260
	10 x 140 = 1400

*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    /*(while(i <= 10)
    {
        cout << i << " x " << n << " = " << i * n << endl;
        i ++;
    }*/
    for (; i <= 10; i ++)
        printf("%d x %d = %d\n",i, n, i * n);
    return 0;
}