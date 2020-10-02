﻿/*
给定两个正整数A和B，请你计算A * B的值。

输入格式
共两行，第一行包含整数A，第二行包含整数B。

输出格式
共一行，包含A * B的值。

数据范围
1≤A的长度≤100000,
0≤B≤10000
输入样例：
2
3
输出样例：
6

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> mul(vector<int> &A, int b)
{
    vector<int> C;
    int t = 0;
    for (int i = 0; i < A.size() || t; i ++)
    {
        if (i < A.size()) t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();

    return C;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');

    auto C = mul(A, b);

    for (int i = C.size() - 1; i >= 0; i --) printf("%d", C[i]);

    return 0;

}
