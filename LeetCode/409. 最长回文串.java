/*
409. 最长回文串
给定一个包含大写字母和小写字母的字符串，找到通过这些字母构造成的最长的回文串。

在构造过程中，请注意区分大小写。比如 "Aa" 不能当做一个回文字符串。

注意:
假设字符串的长度不会超过 1010。

示例 1:

输入:
"abccccdd"

输出:
7

解释:
我们可以构造的最长的回文串是"dccaccd", 它的长度是 7。


 */
class Solution {
    public int longestPalindrome(String s) {
        char[] str = s.toCharArray();
        Map<Character,Integer> map = new HashMap<>();
        for(int i = 0; i < s.length(); i ++)
        {
            char c = s.charAt(i);
            map.put(c, map.getOrDefault(c,0) + 1);
        }

        int ans = 0;
        for(Map.Entry<Character,Integer> entry:map.entrySet())
        {
            int temp = entry.getValue();
            ans += temp / 2 * 2;
            if(temp % 2 == 1 && ans % 2 == 0)
                ans += 1;
        }

        return ans;
    }
}