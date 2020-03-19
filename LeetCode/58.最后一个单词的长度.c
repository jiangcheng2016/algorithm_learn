/*
	给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。

	如果不存在最后一个单词，请返回 0 。

	说明：一个单词是指仅由字母组成、不包含任何空格字符的 最大子字符串。

 

	示例:

	输入: "Hello World"
	输出: 5

*/

/*解题思路
	首先找到最后一个空格，然后开始记录位置，在从该位置向前遍历，直到再次出现空格，记录两空格之间的长度

	代码
*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.size() - 1;
        while(s[n] == ' ')
            n --;
        for (int i = n; i >= 0;i --)
        {
            if(s[i] == ' ')
                return len;
            len ++ ;
        }
        return len;
    }
};