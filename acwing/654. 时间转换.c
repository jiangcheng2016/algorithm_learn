/*
	��ȡһ������ֵ�����ǹ�����ĳ���¼��ĳ���ʱ�䣨����Ϊ��λ�������㽫��ת��ΪСʱ�����ӣ�������ʾ��

	�����ʽ
	����һ������N��

	�����ʽ
	���ת�����ʱ���ʾ����ʽΪ��hours:minutes:seconds����

	���ݷ�Χ
	1��N��1000000
	����������
	556
	���������
	0:9:16

*/
#include <iostream>
using namespace std;
int main()
{
    int time;
    cin >> time;
    int hour, minutes, seconds;
    hour = time / 3600;
    minutes = (time - 3600 * hour) / 60;
    seconds = time - 3600 * hour - 60 * minutes;
    cout << hour << ":" << minutes << ":" << seconds;
    return 0;
}