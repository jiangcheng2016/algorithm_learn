/*

	�����������������ﵥ�ʣ���Щ�ʽ������±�����Ҷ���һ�����

	����ȷ������������������ơ�

	UOJ_1049_b.png

	�����ʽ
	�����ϱ���������������ʣ�ÿ��һ��������ʶ���������Сд��ĸ���ɡ�

	�����ʽ
	���ʶ����Ķ�������ơ�

	����������
	vertebrado
	mamifero
	onivoro
	���������
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