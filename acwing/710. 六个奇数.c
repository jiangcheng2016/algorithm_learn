/*

	读取一个整数X，输出X之后的6个奇数，如果X也是奇数，那么它也算作6个奇数之一。

	输入格式
	一个整数X。

	输出格式
	所有满足条件的奇数，每个占一行。

	数据范围
	1≤X≤100
	输入样例：
	9
	输出样例：
	9
	11
	13
	15
	17
	19
*/

#include <iostream>
using namespace std;

int main()
{
    int x, n = 0;
    cin >> x;
    
    for (int i = x; i < 101; i ++)
    {
        if(i % 2 == 1)
        {
            cout << i << endl;
            n ++;
        }
        if(n == 6)
            break;
    }  
    return 0;
}