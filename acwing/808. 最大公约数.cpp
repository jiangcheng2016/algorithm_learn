/*
	
	 ������������a��b�������дһ��������int gcd(int a, int b), ���㲢���a��b�����Լ����

	�����ʽ
	��һ�У�������������a��b��

	�����ʽ
	��һ�У�����һ����������ʾa��b�����Լ����

	���ݷ�Χ
	1��a,b��1000
	����������
	12 16
	���������
	4
*/

//շת�����(�ǵݹ�)

#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r;
    do
    {
        r = a % b;
        a = b;
        if(r!= 0)
            b = r;
    }while(r != 0);
    
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

//�ݹ�
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}