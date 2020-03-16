/*
	
	������������n��m�����һ��n��m�еľ��󣬽����� 1 �� n*m ���ջ�����������������С�

	���������ʽ�ɲο�������

	�����ʽ
	���빲һ�У�������������n��m��

	�����ʽ
	�������Ҫ��ľ���

	����ռn�У�ÿ�а���m���ո������������

	���ݷ�Χ
	1��n,m��100
	����������
	3 3
	���������
	1 2 3
	8 9 4
	7 6 5
*/

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 110;

int n, m;
int res[N][N];

int main()
{
    cin >> n >> m;
    
    int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
    
    for (int x = 0, y = 0, d = 0, k = 1; k <= n * m; k ++)
    {
        res[x][y] = k;
        int a = x + dx[d], b = y + dy[d];
        if(a < 0 || a >= n || b < 0 || b >= m || res[a][b] )
        {
            d = (d + 1) % 4;
            a = x + dx[d], b = y + dy[d];
        }
        x = a, y = b;
        
    }
    
    for (int i = 0;i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
            cout << res[i][j] << ' ';
        cout << endl;
    }
    
    return 0;
    
}