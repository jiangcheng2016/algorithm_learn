/*
    请你写一个函数StrToInt，实现把字符串转换成整数这个功能。

    当然，不能使用atoi或者其他类似的库函数。

    样例
    输入："123"

    输出：123
    注意:

    你的函数应满足下列条件：

    忽略所有行首空格，找到第一个非空格字符，可以是 ‘+/−’ 表示是正数或者负数，紧随其后找到最长的一串连续数字，将其解析成一个整数；
    整数后可能有任意非数字字符，请将其忽略；
    如果整数长度为0，则返回0；
    如果整数大于INT_MAX(2^31 − 1)，请返回INT_MAX；如果整数小于INT_MIN(−2^31) ，请返回INT_MIN；


*/

/*

 str = "    - 1334%(*(#2939"


*/

class Solution {
public:
    int strToInt(string str) {
        int k = 0;
        while(k < str.size() && str[k] == ' ') k ++;

        bool is_minus = false;
        if (str[k] == '-') k++, is_minus = true;
        else if (str[k] == '+') k ++;
        long long number = 0;
        while(k < str.size() && str[k] >= '0' && str[k] <= '9')
        {
            number = number * 10 + str[k] - '0';
            k ++;

        }

        if (is_minus) number *= -1;
        if (number > INT_MAX) number = INT_MAX;
        if (number < INT_MIN) number = INT_MIN;
        return (int)number;
    }
};
