/*
	输入若干个整数对M,N，对于每个数对，输出以这两个数为最大值和最小值的公差为1的等差数列。

	注意，当输入整数对中，任意一个数为0或负整数时，立即停止输入，且该组数对无需作任何处理。

	输入格式
	输入共若干行，每行包含两个整数。

	最后一行的两个整数中，至少有一个是非正整数。

	输出格式
	对于每组需作处理的数对，输出一个结果，每个结果占一行。

	结果包含从最小值到最大值的数字序列以及数字序列各数字之和。

	具体格式请参照输出样例。

	数据范围
	M,N≤100
	输入样例：
	2 5
	6 3
	5 0
	输出样例：
	2 3 4 5 Sum=14
	3 4 5 6 Sum=18
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    while(n > 0 && m > 0)
    {
        int sum = 0;
        int temp;
        if(n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }
        for (int i = n; i <= m; i ++)
        {   
            cout << i << ' ';
            sum += i;
        }
        cout << "Sum=" << sum << endl;
        cin >> n >> m;
    }
    return 0;
}