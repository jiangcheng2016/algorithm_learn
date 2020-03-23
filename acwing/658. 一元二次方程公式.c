/*
	��ȡ����������a,b,c��ֵ������һԪ���η��������ʽ�Է���ax2+bx+c=0������⡣

	һԪ���η��������ʽΪ��

	x=?b��b2?4ac???????��2a
	���b2?4ac<0���·����޽��a=0���������Impossivel calcular����

	�����ʽ
	��������������a,b,c��

	�����ʽ
	���������ʽ��������̵ĸ���������������λС��������޽��������Impossivel calcular����
	���������԰�����˳�������������ȷ��

	���ݱ�֤������ֻ��һ����������

	���ݷ�Χ
	?1000.0��a,b,c��1000.0
	����������
	10.0 20.1 5.1
	���������
	R1 = -0.29788
	R2 = -1.71212

*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, flag, r1, r2;
    cin >> a >> b >> c;
    flag = b * b - 4 * a * c;
    if(flag < 0 || a == 0)
        cout << "Impossivel calcular";
    else
    {
        r1 = (-b + sqrt(flag)) / (2 * a);
        r2 = (-b - sqrt(flag)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
        //printf("R1 = %.5f\nR2 = %.5f",r1,r2);
    }
    return 0;
}