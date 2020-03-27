/*
	输入一个整数N和一个长度为N的整数数组X。

	请你找到数组中最小的元素，并输出它的值和下标。

	注意，如果有多个最小值，则返回下标最小的那个。

	输入格式
	第一行包含整数N。

	第二行包含N个用空格隔开的整数X[i]。

	输出格式
	第一行输出“Minimum value: x”，其中x为数组元素最小值。

	第二行输出“Position: y”，其中y为最小值元素的下标（下标从0开始计数）。

	数据范围
	1<N≤1000,
	?1000≤X[i]≤1000
	输入样例：
	10
	1 2 3 4 -5 6 7 8 9 10
	输出样例：
	Minimum value: -5
	Position: 4


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    int min = a[0], pos = 0;
    for (int j = 1; j < n; j ++)
        if(min > a[j])
        {
            min = a[j];
            pos = j;
        }
    cout << "Minimum value: " << min << endl;
    cout << "Position: " << pos;
    return 0;
}