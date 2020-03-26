/*
	医学部一共进行了N场动物实验。

	共有三种小动物可用来实验，分别是青蛙、老鼠和兔子。

	每次实验都会选取其中一种动物来参与实验，选取数量若干。

	现在请你统计一下医学部一共用了多少小动物，每种分别用了多少，每种动物使用数量占总量的百分比分别是多少。

	输入格式
	第一行包含整数N，表示实验次数。

	接下来N行，每行包含一个整数A（表示一次实验使用的小动物的数量）和一个字符T（表示一次实验使用的小动物的类型，’C’表示兔子(coney)，’R’表示老鼠(rat)，’F’表示青蛙(frog)）。

	输出格式
	请你参照输出样例，输出所用动物总数，每种动物的数量，以及每种动物所占百分比。

	注意输出百分比时，保留两位小数。

	数据范围
	1≤N≤100,
	1≤A≤15
	输入样例：
	10
	10 C
	6 R
	15 F
	5 C
	14 R
	9 C
	6 R
	8 F
	5 C
	14 R
	输出样例：
	Total: 92 animals
	Total coneys: 29
	Total rats: 40
	Total frogs: 23
	Percentage of coneys: 31.52 %
	Percentage of rats: 43.48 %
	Percentage of frogs: 25.00 %

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    char k[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i] >> k[i];
    int total = 0, coney = 0, rat = 0, frog = 0;
    for (int j = 0; j < n; j ++)
    {
        total += a[j];
        if(k[j] == 'C')
            coney += a[j];
        else if(k[j] == 'R')
            rat += a[j];
        else
            frog += a[j];
    }
    printf("Total: %d animals\n",total);
    printf("Total coneys: %d\n",coney);
    printf("Total rats: %d\n",rat);
    printf("Total frogs: %d\n",frog);
    printf("Percentage of coneys: %.2f \%\n",coney * 100.0 / total);
    printf("Percentage of rats: %.2f \%\n",rat * 100.0 / total);
    printf("Percentage of frogs: %.2f \%\n",frog * 100.0 / total);
    return 0;
}