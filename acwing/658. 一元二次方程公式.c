/*
	读取三个浮点数a,b,c的值，利用一元二次方程求根公式对方程ax2+bx+c=0进行求解。

	一元二次方程求根公式为：

	x=?b±b2?4ac???????√2a
	如果b2?4ac<0导致方程无解或a=0，则输出“Impossivel calcular”。

	输入格式
	输入三个浮点数a,b,c。

	输出格式
	参照输出格式，输出方程的根，输出结果保留五位小数，如果无解则输出“Impossivel calcular”。
	两个根可以按任意顺序输出，都算正确。

	数据保证不存在只有一个解的情况。

	数据范围
	?1000.0≤a,b,c≤1000.0
	输入样例：
	10.0 20.1 5.1
	输出样例：
	R1 = -0.29788
	R2 = -1.71212

*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, flag, r1, r2;
    cin >> a >> b >> c;
    flag = b * b - 4 * a * c;
    if(flag < 0 || a == 0)
        cout << "Impossivel calcular";
    else
    {
        r1 = (-b + sqrt(flag)) / (2 * a);
        r2 = (-b - sqrt(flag)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
        //printf("R1 = %.5f\nR2 = %.5f",r1,r2);
    }
    return 0;
}