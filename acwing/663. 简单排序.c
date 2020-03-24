/*
	读取三个整数并按升序对它们进行排序。

	输入格式
	共一行，包含三个整数。

	输出格式
	首先，将三个整数按升序顺序输出，每行输出一个整数。

	然后，输出一个空行。

	紧接着，将三个整数按原输入顺序输出，每行输出一个整数。

	数据范围
	?100≤输入整数≤100
	输入样例：
	7 21 -14
	输出样例：
	-14
	7
	21

	7
	21
	-14

*/

#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], temp;
    for (int i = 0; i < 3; i ++)
    {   cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i ++)
        for (int j = i + 1; j < 3; j ++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    for (int i = 0; i < 3; i ++)
        cout << a[i] << endl;
    cout << endl;
    for (int j = 0; j < 3; j ++)
        cout << b[j] << endl;
    
    return 0;
}