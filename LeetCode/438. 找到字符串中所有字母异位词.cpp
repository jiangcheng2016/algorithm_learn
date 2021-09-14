/**
 * 438. 找到字符串中所有字母异位词
 *
 * 给定两个字符串 s 和 p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。

异位词 指字母相同，但排列不同的字符串。

 

示例 1:

输入: s = "cbaebabacd", p = "abc"
输出: [0,6]
解释:
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
 示例 2:

输入: s = "abab", p = "ab"
输出: [0,1,2]
解释:
起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。
 

提示:

1 <= s.length, p.length <= 3 * 104
s 和 p 仅包含小写字母


 */

/**
 * C++
 */

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> need, window;
        for(char c:p) need[c] ++;

        int l = 0, r = 0;
        int valid = 0;
        vector<int> res;

        while(r < s.size())
        {
            char c = s[r];
            r ++;

            if(need.count(c))
            {
                window[c] ++;
                if(window[c] == need[c])
                    valid ++;
            }

            //debug

            while(r - l >= p.size())
            {
                if(valid == need.size())
                    res.push_back(l);

                char d = s[l];
                l ++;
                if(need.count(d))
                {
                    if(window[d] == need[d])
                        valid --;
                    window[d] --;
                }
            }
        }

        return res;
    }
};