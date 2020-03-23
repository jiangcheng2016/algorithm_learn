/*
	给定一个浮点数，请你判断该数字属于以下哪个区间：[0,25], (25,50], (50,75], (75,100]。

	如果给定的数值小于0或大于100，则程序输出“Fora de intervalo”，表示超出范围。

	开区间(a,b):在实数a和实数b之间的所有实数，但不包含a和b。

	闭区间[a,b]：在实数a和实数b之间的所有实数，包含a和b。

	输入格式
	输入一个浮点数。

	输出格式
	判断输入数值位于哪个区间，按格式“Intervalo x”输出，其中x为区间范围[0,25],(25,50],(50,75],(75,100]中的一个。

	如果数值位于所有区间之外，则输出“Fora de intervalo”。

	输入样例：
	25.01
	输出样例：
	Intervalo (25,50]

*/


#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if(n < 0 || n > 100)
        cout << "Fora de intervalo";
    else if(n >= 0 && n <= 25)
        cout << "Intervalo [0,25]";
    else if(n > 25 && n <= 50)
        cout << "Intervalo (25,50]";
    else if(n > 50 && n <= 75)
        cout << "Intervalo (50,75]";
    else
        cout << "Intervalo (75,100]";
    return 0;
}