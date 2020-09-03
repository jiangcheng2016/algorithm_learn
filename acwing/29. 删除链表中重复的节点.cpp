/*
    在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留。

    样例1
    输入：1->2->3->3->4->4->5

    输出：1->2->5
    样例2
    输入：1->1->1->2->3

    输出：2->3

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
    ListNode* deleteDuplication(ListNode* head) {
        auto res = new ListNode(-1);
        res -> next = head;
        auto p = res;

        while(p -> next)
        {
            auto q = p -> next;
            while(q && p -> next -> val == q -> val) q = q -> next;

            if(p -> next -> next == q) p = p -> next;
            else p -> next = q;
        }

        return res -> next;
    }
};
