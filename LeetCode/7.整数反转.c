/*
	给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

	示例?1:

	输入: 123
	输出: 321
	?示例 2:

	输入: -123
	输出: -321
	示例 3:

	输入: 120
	输出: 21
	注意:

	假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为?[?231,? 231?? 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。

*/


class Solution {
public:
    int reverse(int x) {
        long re_x = 0;
        int temp;
        while(x != 0)
        {
            temp = x % 10;
            re_x = re_x * 10 + temp; 
            if(re_x > INT_MAX || re_x < INT_MIN)
                return 0;
            //if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            //if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            x = x / 10;
        }
        return re_x;
    }
};