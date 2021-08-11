/**
 * 剑指 Offer 50. 第一个只出现一次的字符
 * 在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。
 * 
 * 示例:
 * 
 * s = "abaccdeff"
 * 返回 "b"
 * 
 * s = "" 
 * 返回 " "
 *  
 * 
 * 限制：
 * 
 * 0 <= s 的长度 <= 50000
 * 
 */

class Solution {
    public char firstUniqChar(String s) {
        if(s.length() == 0) return ' ';

        Map<Character,Integer> hash = new HashMap<>();
        for(int i = 0; i < s.length(); i ++)
        {
            char c = s.charAt(i);
            hash.put(c,hash.getOrDefault(c,0) + 1);
        }
        for(int i = 0;i < s.length(); i ++)
        {
            char c = s.charAt(i);
            if(hash.get(c) == 1)
                return c;
        }


        return ' ';
    }
}