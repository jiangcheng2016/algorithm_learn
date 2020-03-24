/*

	给定你三个葡萄牙语单词，这些词将根据下表从左到右定义一个动物。

	请你确定并输出这个动物的名称。

	UOJ_1049_b.png

	输入格式
	根据上表，输入包含三个单词，每行一个，用以识别动物，单词由小写字母构成。

	输出格式
	输出识别出的动物的名称。

	输入样例：
	vertebrado
	mamifero
	onivoro
	输出样例：
	homem

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    if(str1 == "vertebrado")
    {
        if(str2 == "ave")
        {
            if(str3 == "carnivoro")
                cout << "aguia";
            else 
                cout << "pomba";
        }
        else
        {
            if(str3 == "onivoro")
                cout << "homem";
            else
                cout << "vaca";
        }
    }
    else
    {
        if(str2 == "inseto")
        {
            if(str3 == "hematofago")
                cout << "pulga";
            else 
                cout << "lagarta";
        }
        else
        {
            if(str3 == "hematofago")
                cout << "sanguessuga";
            else 
                cout << "minhoca";
        }
    }
    
    return 0;
}