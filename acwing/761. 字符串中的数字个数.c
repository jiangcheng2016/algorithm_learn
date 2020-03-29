/*
	输入一行字符，长度不超过100，请你统计一下其中的数字字符的个数。

	输入格式
	输入一行字符。注意其中可能包含空格。

	输出格式
	输出一个整数，表示字数字字符的个数。

	输入样例：
	I am 18 years old this year.
	输出样例：
	2

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int count = 0;
    /*char ch;
    
    while(cin >> ch)
    {
        if(ch >= '0' && ch <= '9')
            count ++;
    }*/
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i ++)
        if(str[i] >= '0' && str[i] <= '9')
            count ++;
    cout << count;
    return 0;
}