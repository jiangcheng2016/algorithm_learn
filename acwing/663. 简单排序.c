/*
	��ȡ��������������������ǽ�������

	�����ʽ
	��һ�У���������������

	�����ʽ
	���ȣ�����������������˳�������ÿ�����һ��������

	Ȼ�����һ�����С�

	�����ţ�������������ԭ����˳�������ÿ�����һ��������

	���ݷ�Χ
	?100������������100
	����������
	7 21 -14
	���������
	-14
	7
	21

	7
	21
	-14

*/

#include <iostream>
using namespace std;

int main()
{
    int a[3], b[3], temp;
    for (int i = 0; i < 3; i ++)
    {   cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i ++)
        for (int j = i + 1; j < 3; j ++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    for (int i = 0; i < 3; i ++)
        cout << a[i] << endl;
    cout << endl;
    for (int j = 0; j < 3; j ++)
        cout << b[j] << endl;
    
    return 0;
}