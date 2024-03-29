/*

 32. 调整数组顺序使奇数位于偶数前面

输入一个整数数组，实现一个函数来调整该数组中数字的顺序。

使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分。

样例
输入：[1,2,3,4,5]

输出: [1,3,5,2,4]
 */

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int i = 0, j = array.size() - 1;
        while(i <= j)
        {
            while(i <= j && array[i] % 2 == 1) i ++;
            while(i <= j && array[j] % 2 == 0) j --;
            if(i < j) swap(array[i],array[j]);
        }
    }
};

