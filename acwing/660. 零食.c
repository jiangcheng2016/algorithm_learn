/*
	某商店出售5种零食，零食编号为1~5。

	5种零食的价目表如下所示：

	零食种类        价格
	零食  1         R$ 4.00
	零食  2         R$ 4.50
	零食  3         R$ 5.00
	零食  4         R$ 2.00
	零食  5         R$ 1.50
	现在给定某种零食的编号和数量，请你计算总价值是多少。

	输入格式
	输入包含两个整数x和y，其中x为零食编号，y为零食数量。

	输出格式
	输出格式为“Total: R$ X”，其中X为总价值，保留两位小数。

	数据范围
	1≤x≤5,
	1≤y≤100
	输入样例：
	3 2
	输出样例：
	Total: R$ 10.00

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    float price;
    switch(x)
    {
        case 1:
            price = y * 4.00;
            break;
        case 2:
            price = y * 4.50;
            break;
        case 3:
            price = y * 5.00;
            break;
        case 4:
            price = y * 2.00;
            break;
        case 5:
            price = y * 1.50;
            break;
        default:
            break;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << price;
    return 0;
}