/*
445. 数字反转
给定一个整数，请将该数各个位上数字反转得到一个新数。

新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零。

输入格式
输入共1行，1个整数N。

输出格式
输出共1行，1个整数表示反转后的新数。

数据范围
|N|≤109
输入样例：
123
输出样例：
321
输入样例：
-380
输出样例：
-83
 */


#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    reverse(str.begin(), str.end());
    
    if(str.back() == '-'){
        cout << '-';
        str.pop_back();
    }
    
    int k = 0;
    while(k + 1 < str.size() && str[k] == '0') k ++;
    
    while(k < str.size()) cout << str[k ++];
    return 0;

}