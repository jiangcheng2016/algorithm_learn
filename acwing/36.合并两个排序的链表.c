/*
	����������������������ϲ�����������ʹ�������еĽ����Ȼ�ǰ��յ�������ġ�

	����
	���룺1->3->5 , 2->4->5

	�����1->2->3->4->5->5

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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        auto res = new ListNode(-1);
        auto cur = res;
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                cur->next = l1;
                cur = l1;
                l1 = l1->next;
            }
            else{
                cur->next = l2;
                cur = l2;
                l2 = l2->next;
            }
        }
        if(l1) cur->next = l1;
        else cur->next = l2;
        return res->next;
        
    }  
};