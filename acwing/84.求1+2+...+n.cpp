/*
    求1+2+…+n,要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

    样例
    输入：10

    输出：55

*/

class Solution {
public:
    int getSum(int n) {
        int res = n;
        n > 0 && (res += getSum(n - 1));
        return res;
    }
};
