﻿
/*
给定两个正整数，计算它们的和。

输入格式
共两行，每行包含一个整数。

输出格式
共一行，包含所求的和。

数据范围
1≤整数长度≤100000
输入样例：
12
23
输出样例：
35


*/
#include<iostream>
#include<vector>

using namespace std;

const int N = 1e6 + 10;

vector<int> add(vector<int> &A, vector<int> &B)
{
    vector<int> C;

    int t = 0;

    for (int i = 0; i < A.size() || i < B.size(); i ++)
    {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if (t) C.push_back(t);
    return C;
}


int main()
{
    string a, b;
    cin >> a >> b;

    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i --) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i --) B.push_back(b[i] - '0');

    auto C = add(A,B);

    for (int i = C.size() - 1; i >= 0; i --) printf("%d", C[i]);
    return 0;

}

/**
 * java
 */
import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String args[]) throws Exception{
       // Scanner sc = new Scanner(System.in);
       BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        
        //BigInteger a = sc.nextBigInteger();
        //BigInteger b = sc.nextBigInteger();
        BigInteger a = new BigInteger(reader.readLine());
        BigInteger b = new BigInteger(reader.readLine());
        
        System.out.println(a.add(b));
        reader.close();
    }
}