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
    bool isPalindrome(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* firsthead = head;
        ListNode* secondhead = nullptr;
        while(fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast == nullptr)
            secondhead = slow;
        else
            secondhead = slow->next;
        
        ListNode* cur = secondhead;
        ListNode* p = secondhead->next;
        cur->next = nullptr;

        while(p != nullptr)
        {
            cur = p;
            p = p->next;
            cur->next = secondhead;
            secondhead = cur;
        }
        while(firsthead != nullptr && secondhead != nullptr)
        {
            if(firsthead->val == secondhead->val)
            {
                firsthead = firsthead->next;
                secondhead = secondhead->next;
            }
            else
                return false;
        }
        return true;
    }
};
