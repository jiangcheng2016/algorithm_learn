/*
	��ʵ��һ�����������ַ����е�ÿ���ո��滻��"%20"��

	����Լٶ������ַ����ĳ��������1000��
	ע������ַ����ĳ��ȿ��ܴ���1000��

	����
	���룺"We are happy."

	�����"We%20are%20happy."
*/
/*
	���������C++�ȽϺã���Ϊ����û���ᵽ�ַ����ĳ��ȣ���C���ԵĻ���Ҫ
	�����ַ����ĳ���
*/
class Solution {
public:
    string replaceSpaces(string &str) {
        string res;
        for(auto x : str)
        {
            if(x == ' ')
                res += "%20";
            else
                res += x;
        }
        return res;
    }
};