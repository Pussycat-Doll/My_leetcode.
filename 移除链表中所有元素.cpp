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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head == nullptr)
            return nullptr;
        ListNode* cur = head;
        ListNode* next = nullptr;

        while(head != nullptr && head->val == val)
        {
            next = head->next;
            delete head;
            head = next;
        }
        cur = head;
        ListNode* prev = head;
        while(cur != nullptr)
        {
            if(cur->val == val)
            {
                next = cur->next;
                prev->next = next;
                delete cur;
                cur = next;
            }
            else
            {
                prev = cur;
                cur = cur->next;

            }
        }
        return head;
    }
};
