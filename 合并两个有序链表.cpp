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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* cur = l1;
        ListNode* prev = nullptr;
        while(q != nullptr)
        {
            p = q;
            q = q->next;
            while(cur != nullptr && cur->val < p->val)
            {
                prev = cur;
                cur = cur->next;
            }
            if(prev == nullptr)//Í·²å
            {
                p->next = l1;
                l1 = p;
            }
            else
            {
                prev->next = p;
                p->next = cur;
            }
            prev = nullptr;
            cur = l1;
        }
        return l1;
    }
};

