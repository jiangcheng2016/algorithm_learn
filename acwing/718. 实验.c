/*
	ҽѧ��һ��������N������ʵ�顣

	��������С���������ʵ�飬�ֱ������ܡ���������ӡ�

	ÿ��ʵ�鶼��ѡȡ����һ�ֶ���������ʵ�飬ѡȡ�������ɡ�

	��������ͳ��һ��ҽѧ��һ�����˶���С���ÿ�ֱַ����˶��٣�ÿ�ֶ���ʹ������ռ�����İٷֱȷֱ��Ƕ��١�

	�����ʽ
	��һ�а�������N����ʾʵ�������

	������N�У�ÿ�а���һ������A����ʾһ��ʵ��ʹ�õ�С�������������һ���ַ�T����ʾһ��ʵ��ʹ�õ�С��������ͣ���C����ʾ����(coney)����R����ʾ����(rat)����F����ʾ����(frog)����

	�����ʽ
	����������������������ö���������ÿ�ֶ�����������Լ�ÿ�ֶ�����ռ�ٷֱȡ�

	ע������ٷֱ�ʱ��������λС����

	���ݷ�Χ
	1��N��100,
	1��A��15
	����������
	10
	10 C
	6 R
	15 F
	5 C
	14 R
	9 C
	6 R
	8 F
	5 C
	14 R
	���������
	Total: 92 animals
	Total coneys: 29
	Total rats: 40
	Total frogs: 23
	Percentage of coneys: 31.52 %
	Percentage of rats: 43.48 %
	Percentage of frogs: 25.00 %

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    char k[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i] >> k[i];
    int total = 0, coney = 0, rat = 0, frog = 0;
    for (int j = 0; j < n; j ++)
    {
        total += a[j];
        if(k[j] == 'C')
            coney += a[j];
        else if(k[j] == 'R')
            rat += a[j];
        else
            frog += a[j];
    }
    printf("Total: %d animals\n",total);
    printf("Total coneys: %d\n",coney);
    printf("Total rats: %d\n",rat);
    printf("Total frogs: %d\n",frog);
    printf("Percentage of coneys: %.2f \%\n",coney * 100.0 / total);
    printf("Percentage of rats: %.2f \%\n",rat * 100.0 / total);
    printf("Percentage of frogs: %.2f \%\n",frog * 100.0 / total);
    return 0;
}