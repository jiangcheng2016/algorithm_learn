/*	
	读取一个保留两位小数的浮点数值，表示一个公民的工资。

	在公民缴纳个人所得税时，不同收入部分需要缴税的税率也是不同的。

	请根据下表确定该公民需要缴纳的个人所得税是多少。


	Salary								Taxes
									
	from 0.00 to R$ 2,000.00			Wihtout taxes
	from R$ 2,000.01 to R$ 3,000.00		8%
	from R$ 3,000.01 to R$ 4500.00		18%
	more than R$ 4500.00				28%


	输入格式
	共一行，包含一个浮点数。

	输出格式
	如果公民需要缴税，则输出所需缴纳的税额。输出格式为“R$ X”，其中X为个税的金额，保留两位小数。

	如果公民不需要缴税，则输出“Isento”。

	数据范围
	0≤公民工资≤5000
	输入样例1：
	3002.00
	输出样例1：
	R$ 80.36
	输入样例2：
	1700.00
	输出样例2：
	Isento
	输入样例3：
	4520.00
	输出样例3：
	R$ 355.60
	样例解释
	对于样例1，0~2000.00部分不用缴税，2000.01~3000.00部分按8%的税率缴税，
	共计1000 * 8% = 80，3000.01~3002.00部分按18%的税率缴税，共计2 * 18% = 0.36，合计80.36。

	对于样例2，公民收入未超过2000，所以输出Isento。

	对于样例3，0~2000.00部分不用缴税，2000.01~3000.00部分按8%的税率缴税，
	共计1000 * 8% = 80，3000.01~4500.00部分按18%的税率缴税，
	共计1500 * 18% = 270，4500.01~4520部分按28%的税率缴税，共计20 * 28% = 5.60，合计355.60

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x, taxes;
    cin >> x;
    
    if(x <= 2000)
    {   cout << "Isento";
        return 0;
    }
    else if(x > 2000 && x <= 3000)
        taxes = (x - 2000 ) * 0.08;
    else if(x > 3000 && x < 4500)
        taxes = 1000 * 0.08 + (x - 3000) * 0.18;
    else
        taxes =  1000 * 0.08 + 1500 * 0.18 + (x - 4500) * 0.28;
    cout << "R$ " << fixed << setprecision(2) << taxes;
    return 0;
}