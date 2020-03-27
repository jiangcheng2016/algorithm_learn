/*
	输入一个长度为20的整数数组N，将整个数组翻转，使得第一个元素成为倒数第一个元素，第二个元素成为倒数第二个元素，…，倒数第二个元素成为第二个元素，倒数第一个元素成为第一个元素。

	输出翻转后的数组。

	输入格式
	输入包含20个整数，每个数占一行。

	输出格式
	输出新数组中的所有元素，每个元素占一行。

	输出格式为“N[i] = x”，其中i为元素编号（从0开始），x为元素的值。

	数据范围
	?100≤N[i]≤100
	输入样例：
	0
	-5
	...
	63
	23
	输出样例：
	N[0] = 23
	N[1] = 63
	...
	N[18] = -5
	N[19] = 0

*/

#include <iostream>
using namespace std;

const int N = 20;

int main()
{   
    int n[N], temp;
    for (int i = 0; i < N; i ++)
        cin >> n[i];
    for (int i = 0; i < N / 2; i ++)
    {
        int temp = n[i];
        n[i] = n[N - i -1];
        n[N - i - 1] = temp;
    }
    for (int j = 0; j < N; j ++)    printf("N[%d] = %d\n",j, n[j]);
    return 0;
}