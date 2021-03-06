/*
	
	 输入两个整数a和b，请你编写一个函数，int gcd(int a, int b), 计算并输出a和b的最大公约数。

	输入格式
	共一行，包含两个整数a和b。

	输出格式
	共一行，包含一个整数，表示a和b的最大公约数。

	数据范围
	1≤a,b≤1000
	输入样例：
	12 16
	输出样例：
	4
*/

//辗转相除法(非递归)

#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r;
    do
    {
        r = a % b;
        a = b;
        if(r!= 0)
            b = r;
    }while(r != 0);
    
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

//递归
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}