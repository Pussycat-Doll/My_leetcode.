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
    ListNode* deleteNode(ListNode* head, int val) 
    {
        if(head == nullptr)
            return nullptr;
        ListNode* prev = nullptr;
        ListNode* cur = head;
        while(cur != NULL && cur->val != val)
        {
            prev = cur;
            cur = cur->next;
        }
        if(prev == nullptr)//要删除当然结点在第一个结点
        {
            return head->next;
        }
        if(cur != nullptr)//没有找到要删除的结点
        {
            prev->next = cur->next;
        }
        return head;
    }
};
