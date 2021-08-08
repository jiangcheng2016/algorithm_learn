/**
 * 剑指 Offer 35. 复杂链表的复制
 *
 * 请实现 copyRandomList 函数，复制一个复杂链表。在复杂链表中，每个节点除了有一个 next 指针指向下一个节点，还有一个 random 指针指向链表中的任意节点或者 null。

 

示例 1：



输入：head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
输出：[[7,null],[13,0],[11,4],[10,2],[1,0]]
示例 2：



输入：head = [[1,1],[2,1]]
输出：[[1,1],[2,1]]
示例 3：



输入：head = [[3,null],[3,0],[3,null]]
输出：[[3,null],[3,0],[3,null]]
示例 4：

输入：head = []
输出：[]
解释：给定的链表为空（空指针），因此返回 null。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        for(auto p = head; p; )
        {
            auto np = new Node(p->val);
            auto next = p->next;
            p->next = np;
            p = p->next;
            np->next = next;
            p = next;
        }

        for(auto p = head; p; p = p->next->next)
        {
            if(p->random)
                p->next->random = p->random->next;
        }

        auto dummy = new Node(-1);
        auto cur = dummy;
        for(auto p = head; p; p = p->next)
        {
            cur->next = p->next;
            cur = cur->next;
            p->next = p->next->next;
        }

        return dummy->next;
    }
};