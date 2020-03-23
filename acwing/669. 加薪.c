/*
	ABC公司决定给员工加薪，加薪情况如下所示：

		薪水                涨薪幅度
	0 - 400.00                15%
	400.01 - 800.00           12%
	800.01 - 1200.00          10%
	1200.01 - 2000.00         7%
	超过 2000.00              4%
	读取员工的工资，计算并输出员工的新工资，以及员工增加的收入和涨薪幅度。

	输入格式
	共一行，包含一个保留两位小数的浮点数。

	输出格式
	输出格式如下所示：

	第一行输出”Novo salario: X”，X表示员工新工资，保留两位小数。

	第二行输出”Reajuste ganho: Y”，Y表示员工增加的具体收入数值，保留两位小数。

	第三行输出”Em percentual: Z”，Z表示涨薪幅度，注意用百分比表示。

	数据范围
	0≤原工资≤2500.00
	输入样例：
	400.00
	输出样例：
	Novo salario: 460.00
	Reajuste ganho: 60.00
	Em percentual: 15 %

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float sal, sal_new,diff;
    string increase;
    cin >> sal;
    if(sal > 0 && sal <= 400.00)
    {
        sal_new = sal + sal * 0.15;
        increase = "15 %";
        diff = sal_new - sal;
    }
    else if(sal > 400.00 && sal < 800.00)
    {
        sal_new = sal + sal * 0.12;
        increase = "12 %";
        diff = sal_new - sal;
    }
    else if(sal > 800.00 && sal < 1200.00)
    {
        sal_new = sal + sal * 0.10;
        increase = "10 %";
        diff = sal_new - sal;
    }
    else if(sal > 1200.00 && sal < 2000.00)
    {
        sal_new = sal + sal * 0.07;
        increase = "7 %";
        diff = sal_new - sal;
    }
    else if(sal > 2000.00)
    {
        sal_new = sal + sal * 0.04;
        increase = "4 %";
        diff = sal_new - sal;
    }
    cout << "Novo salario: " << fixed << setprecision(2) << sal_new << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << diff << endl;
    cout << "Em percentual: " << increase;
    
    return 0;
}