/*

	����дһ������StrToInt��ʵ�ְ��ַ���ת��������������ܡ�

	��Ȼ������ʹ��atoi�����������ƵĿ⺯����

	����
	���룺"123"

	�����123
	ע��:

	��ĺ���Ӧ��������������

	�����������׿ո��ҵ���һ���ǿո��ַ��������� ��+/?�� ��ʾ���������߸�������������ҵ����һ���������֣����������һ��������
	���������������������ַ����뽫����ԣ�
	�����������Ϊ0���򷵻�0��
	�����������INT_MAX(2^31 ? 1)���뷵��INT_MAX���������С��INT_MIN(?2^31) ���뷵��INT_MIN��

*/

class Solution {
public:
    int strToInt(string str) {
        long long num = 0;
        bool is_nums = false;
        int k = 0;
        
        while(k < str.size() && str[k] == ' ') k ++;
        
        if(str[k] == '+') k ++;
        else if(str[k] == '-') k ++ ,is_nums = true;
        while(k < str.size() && str[k] >= '0' && str[k] <= '9' )
        {
            num = num * 10 + str[k] - '0';
            k ++;
        }
        
        if(is_nums) num *= -1;
        if(num > INT_MAX) return INT_MAX;
        if(num < INT_MIN) return INT_MIN;
        
        return num;
    }
};