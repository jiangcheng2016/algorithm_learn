/*
    输入一个整数 n ，求斐波那契数列的第 n 项。

    假定从0开始，第0项为0。(n<=39)

    样例
    输入整数 n=5

    返回 5
*/

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0) n = 0;
        else if (n == 1 || n == 2) n = 1;
        else
            n = Fibonacci(n - 1) + Fibonacci(n - 2);
        return n;
    }
};

//非递归方法
class Solution {
public:
    int Fibonacci(int n) {
        int a = 0, b = 1;
        while(n -- )
        {
            int c = a + b;
            a = b, b = c;
        }
        return a;

    }
};
