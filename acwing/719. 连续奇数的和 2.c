/*
	����N��������X,Y������ÿ��X,Y�������������֮�䣨������X��Y�������������ĺ͡�

	�����ʽ
	��һ����������N����ʾ����N�Բ������ݡ�

	������N�У�ÿ������һ������X��Y��

	�����ʽ
	ÿ��X,Y���һ��ռһ�е������͡�

	���ݷ�Χ
	1��N��100,
	?1000��X,Y��1000
	����������
	7
	4 5
	13 10
	6 4
	3 3
	3 5
	3 4
	3 8
	���������
	0
	11
	5
	0
	0
	0
	12
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x, y, temp;
    cin >> n;
    while(n --)
    {
        cin >> x >> y;
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        int  count = 0;
        for (int i = x + 1; i < y; i ++)
        {
            if(i % 2 == 1 || i % 2 == -1)
                count += i;
        }
        cout << count << endl;
    }
    return 0;
}