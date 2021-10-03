/*
5. 最长回文子串
给你一个字符串 s，找到 s 中最长的回文子串。

 

示例 1：

输入：s = "babad"
输出："bab"
解释："aba" 同样是符合题意的答案。
示例 2：

输入：s = "cbbd"
输出："bb"
示例 3：

输入：s = "a"
输出："a"
示例 4：

输入：s = "ac"
输出："a"
 

提示：

1 <= s.length <= 1000
s 仅由数字和英文字母（大写和/或小写）组成


 */
class Solution {
    public String longestPalindrome(String s) {

        String res = "";
        for(int i = 0; i < s.length(); i ++)
        {   
            String res1 = palindrome(s,i,i);

            String res2 = palindrome(s, i, i +1);
            res = res1.length() > res.length() ? res1:res;
            res = res2.length() > res.length() ? res2 : res;
        }

        return res;
    }

    public String palindrome(String s, int l, int r)
    {
        while(l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r))
        {
            l --;
            r ++;
        }

        return s.substring(l+1,r);
    }

}