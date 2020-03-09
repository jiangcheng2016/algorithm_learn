/*

  ����һ������������һ�������ͷ��㣬��ת�����������ת�������ͷ��㡣

	����
	����:1->2->3->4->5->NULL

	���:5->4->3->2->1->NULL
	
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
            struct ListNode * next = head -> next;  //����head -> next
            head -> next = new_head;                //����head -> next
            new_head = head;
            head = next;
        }
        return new_head;
        
    }
};