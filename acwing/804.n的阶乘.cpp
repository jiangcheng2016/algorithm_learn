/*����һ������n�������дһ��������int fact(int n)�����㲢���n�Ľ׳ˡ�

�����ʽ
��һ�У�����һ������n��

�����ʽ
��һ�У�����һ��������ʾn�Ľ׳˵�ֵ��

���ݷ�Χ
1��n��10
����������
3
���������
6
*/

#include <iostream>
using namespace std;

int fact(int n)
{
    while (n > 1)
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}