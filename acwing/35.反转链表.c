/*

  定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的头结点。

	样例
	输入:1->2->3->4->5->NULL

	输出:5->4->3->2->1->NULL
	
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
    ListNode* reverseList(ListNode* head) {
        struct ListNode * new_head = NULL;
        while(head)
        {
            struct ListNode * next = head -> next;  //备份head -> next
            head -> next = new_head;                //更新head -> next
            new_head = head;
            head = next;
        }
        return new_head;
        
    }
};