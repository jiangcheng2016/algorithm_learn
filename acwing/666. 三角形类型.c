/*
	��ȡ��ʾ�����������ߵ�3����������A��B��C�������������У�ʹA��������������һ�ߡ�

	���������������������ȷ�����ǿ�����ɵ����������ͣ�

	���A��B+C����˵�������߲��ܹ��������Σ��������NAO FORMA TRIANGULO
	����˵�������߿��Թ��������Σ�Ȼ��������������
	���A2=B2+C2���������TRIANGULO RETANGULO
	���A2>B2+C2���������TRIANGULO OBTUSANGULO
	���A2<B2+C2���������TRIANGULO ACUTANGULO
	��������߳��ȶ���ͬ���������TRIANGULO EQUILATERO
	���ֻ�������߳�����ͬ���������߳��Ȳ�ͬ���������TRIANGULO ISOSCELES
	�����ʽ
	��һ�У���������������A,B,C��

	�����ʽ
	���A,B,C��ɵ������ε����͡�

	ע�⣬���������������㲻ֹһ������������½������������ƣ�����Ŀ����˳�������ÿ�����һ����

	���ݷ�Χ
	0<A,B,C<10.0
	����������
	7.0 5.0 7.0
	���������
	TRIANGULO ACUTANGULO
	TRIANGULO ISOSCELES

*/

#include <iostream>
using namespace std;

#define N 3

int main()
{
    float len_side[N];
    for (int i = 0; i < N; i ++)
        cin >> len_side[i];
    float temp;
    for (int i = 0; i < N; i ++)
    {
        for(int j = i + 1; j < N; j ++)
        {
            if(len_side[i] < len_side[j])
            {
                temp = len_side[i];
                len_side[i] = len_side[j];
                len_side[j] = temp;
            }
        }
    }
    float a = len_side[0], b = len_side[1], c = len_side[2];
    if(a >= b + c)
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if(a * a == b * b + c * c)
            cout << "TRIANGULO RETANGULO" << endl;
        if(a * a > b * b + c * c)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if(a * a < b * b + c * c)
            cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && b == c)
            cout << "TRIANGULO EQUILATERO" << endl;
        if((a == b && b != c) || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    
    return 0;
}