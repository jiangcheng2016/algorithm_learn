/*
	给定一行长度不超过100的字符串，请你求出它的具体长度。

	输入格式
	输入一行，表示一个字符串。注意字符串中可能包含空格。

	输出格式
	输出一个整数，表示它的长度。

	输入样例：
	I love Beijing.
	输出样例：
	15

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    //cout << str.length();
    cout << str.size();
    return 0;
}