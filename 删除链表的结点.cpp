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
        if(prev == nullptr)//Ҫɾ����Ȼ����ڵ�һ�����
        {
            return head->next;
        }
        if(cur != nullptr)//û���ҵ�Ҫɾ���Ľ��
        {
            prev->next = cur->next;
        }
        return head;
    }
};
