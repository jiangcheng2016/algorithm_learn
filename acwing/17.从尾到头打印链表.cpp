/*
	输入一个链表的头结点，按照 从尾到头 的顺序返回节点的值。

	返回的结果用数组存储。

	样例
	输入：[2, 3, 5]
	返回：[5, 3, 2]
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> printListReversingly(ListNode* head) {
        vector<int> res;
        while(head)
        {
            res.push_back(head -> val);
            head = head -> next;
        }
        return vector<int>(res.rbegin(),res.rend());
    }
};