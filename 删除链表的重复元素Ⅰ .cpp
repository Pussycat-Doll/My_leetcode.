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
        ListNode* p = head;
        ListNode* q = head->next;
        p->next = nullptr;
        ListNode* cur = q;
        int val = head->val;
        while(q != nullptr)
        {
            cur = q;
            q = q->next;
            if(cur->val == val)
                delete cur;
            else
            {
                p->next = cur;
                p = cur;
                p->next = nullptr;//防止最后一个元素是重复元素被删除
                val = cur->val;
            }
        }
        return head;
    }
};

