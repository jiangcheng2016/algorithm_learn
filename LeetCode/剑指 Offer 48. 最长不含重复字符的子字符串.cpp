/*
请从字符串中找出一个最长的不包含重复字符的子字符串，计算该最长子字符串的长度。

示例 1:

输入: "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。

 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_map<char,int> a;
        for (int i = 0, j = 0; i < s.size(); i ++)
        {
            a[s[i]] ++; 
            while(a[s[i]] > 1)
            {
                a[s[j]] --;
                j ++;
            }
            res = max(res, i - j + 1);
        }
        return res;
    }
};

//java 版本

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int res = 0;
        Map<Character,Integer> heap = new HashMap<>();
        int count = 0;

        for (int i = 0, j = 0; i < s.length(); i ++)
        {
            if(heap.get(s.charAt(i)) == null)
                heap.put(s.charAt(i),1);
            else
                heap.put(s.charAt(i),heap.get(s.charAt(i)) + 1);
            while(heap.get(s.charAt(i)) > 1)
            {
                heap.put(s.charAt(j),heap.get(s.charAt(j)) - 1);
                j ++;
            }
            res = Math.max(res, i - j + 1);
        }
        return res;
    }
}