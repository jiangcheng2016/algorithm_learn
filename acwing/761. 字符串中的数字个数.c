/*
	����һ���ַ������Ȳ�����100������ͳ��һ�����е������ַ��ĸ�����

	�����ʽ
	����һ���ַ���ע�����п��ܰ����ո�

	�����ʽ
	���һ����������ʾ�������ַ��ĸ�����

	����������
	I am 18 years old this year.
	���������
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