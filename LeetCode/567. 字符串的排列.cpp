/*
567. 字符串的排列

给你两个字符串 s1 和 s2 ，写一个函数来判断 s2 是否包含 s1 的排列。

换句话说，s1 的排列之一是 s2 的 子串 。

 

示例 1：

输入：s1 = "ab" s2 = "eidbaooo"
输出：true
解释：s2 包含 s1 的排列之一 ("ba").
示例 2：

输入：s1= "ab" s2 = "eidboaoo"
输出：false
 

提示：

1 <= s1.length, s2.length <= 104
s1 和 s2 仅包含小写字母


 */

/**
 * C++
 */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> need, window;
        for(char c:s1) need[c] ++;

        int l = 0, r = 0;

        int valid = 0;
        while(r < s2.size())
        {
            char c = s2[r];
            r ++;
            if(need.count(c))
            {
                window[c] ++;
                if(window[c] == need[c])
                    valid ++;
            }

            //...

            //debug

            while(r - l >= s1.size())
            {
                //
                if(valid == need.size())
                    return true;

                char d = s2[l];
                l ++;
                if(need.count(d))
                {
                    if(window[d] == need[d])
                        valid --;
                    window[d] --;
                }
            }
        }

        return false;
    }
};