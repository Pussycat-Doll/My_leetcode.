/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode pHead = ListNode(-1);
        ListNode* p = &pHead;
        ListNode* cur = head;
        ListNode* next = nullptr;
        int val;
        while(cur)
        {
            while(cur && cur->next && cur->val == cur->next->val)
            {
                next = cur->next;
                val = cur->val;
                delete cur;
                cur = next;
            }
            next = cur->next;
            if(cur->val == val)
                delete cur;
            else
            {
                p->next = cur;
                p = cur;
                p->next = nullptr;
            }
            cur = next;
        }
        return pHead.next;
    }
};

