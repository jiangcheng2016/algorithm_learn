/*
	请实现一个函数，把字符串中的每个空格替换成"%20"。

	你可以假定输入字符串的长度最大是1000。
	注意输出字符串的长度可能大于1000。

	样例
	输入："We are happy."

	输出："We%20are%20happy."
*/
/*
	这个问题用C++比较好，因为这里没有提到字符串的长度，用C语言的话还要
	计算字符串的长度
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