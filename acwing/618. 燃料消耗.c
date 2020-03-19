/*

	一辆汽车每行驶12公里需要消耗1升汽油，现在告诉你该汽车的行驶速度S（km/h）和行驶时间T（h），请你计算该车在行驶过程中一共消耗了多少升汽油。

	输入格式
	输入共两行，第一行包含一个整数T，表示行驶时间（h）。

	第二行包含一个整数S，表示行驶速度（km/h）。

	输出格式
	输出行驶期间的总油耗，结果保留三位小数。

	数据范围
	1≤T,S≤109
	输入样例：
	10
	85
	输出样例：
	70.833

  */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,s;
    cin >> t >> s;
    cout << fixed << setprecision(3) << s * t / 12.0 ;
    //printf("%.3f",s * t / 12.0 );
    return 0;
}