/*
	给定一个整数，请根据下表确定并输出其对应的城市名称：
	
	  61	Brasilia

	  71	Salvador

      11	Sao Paulo

	  21	Rio de Janeiro

      32	Juiz de Fora

      19	Campinas
            
      27	Vitoria

      31	Belo Horizonte
	

	如果输入数字不在上表中，则输出“DDD nao cadastrado”。

	输入格式
	共一行，包含一个整数。

	输出格式
	输出对应城市名称，如果没有对应城市名称，则输出“DDD nao cadastrado”。

	输入样例：
	11
	输出样例：
	Sao Paulo

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch(n)
    {
        case 61:
            cout << "Brasilia";
            break;
        case 71:
            cout << "Salvador";
            break;
        case 11: 
            cout << "Sao Paulo";
            break;
        case 21:
            cout << "Rio de Janeiro";
            break;
        case 32:
            cout << "Juiz de Fora";
            break;
        case 19:
            cout << "Campinas";
            break;
        case 27:
            cout << "Vitoria";
            break;
        case 31:
            cout << "Belo Horizonte";
            break;
        default:
            cout << "DDD nao cadastrado";
    }
    return 0;
}