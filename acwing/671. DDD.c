/*
	����һ��������������±�ȷ����������Ӧ�ĳ������ƣ�
	
	  61	Brasilia

	  71	Salvador

      11	Sao Paulo

	  21	Rio de Janeiro

      32	Juiz de Fora

      19	Campinas
            
      27	Vitoria

      31	Belo Horizonte
	

	����������ֲ����ϱ��У��������DDD nao cadastrado����

	�����ʽ
	��һ�У�����һ��������

	�����ʽ
	�����Ӧ�������ƣ����û�ж�Ӧ�������ƣ��������DDD nao cadastrado����

	����������
	11
	���������
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