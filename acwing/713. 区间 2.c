/*
	读取N个整数X1,X2,…,XN，判断这N个整数中有多少个在[10,20]的范围内，有多少个在范围外。

	输入格式
	第一行包含整数N，表示共有N个整数需要进行判断。

	接下来N行，每行包含一个整数Xi。

	输出格式
	第一行输出“x in”，其中x为在范围内的整数的数量。

	第二行输出“y out”，其中y为在范围外的整数的数量。

	数据范围
	N≤10000,
	?107<Xi<107
	输入样例：
	4
	14
	123
	10
	-25
	输出样例：
	2 in
	2 out

*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++)
    {   cin >> a[i];
        if(a[i] >= 10 && a[i] <= 20)
            count ++;
    }
    cout << count << " in" << endl;
    cout << n - count << " out";
    return 0;
}