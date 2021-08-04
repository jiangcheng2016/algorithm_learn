/*
	����һ�������ͷ��㣬���� ��β��ͷ ��˳�򷵻ؽڵ��ֵ��

	���صĽ��������洢��

	����
	���룺[2, 3, 5]
	���أ�[5, 3, 2]
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