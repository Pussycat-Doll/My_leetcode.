class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode* newhead = new ListNode(-1);//ÐéÄâÍ·½áµã
        newhead->next = head;
        ListNode* pre = newhead;
        for(int i = 0;i < left-1;++i)
        {
            pre = pre->next;
        }
        ListNode* cur = pre->next;
        ListNode* next = nullptr;
        for(int i = 0; i < right-left;++i)
        {
            next = cur->next;
            cur->next= next->next;
            next->next = pre->next;
            pre->next = next;
            
        }
        return newhead->next;
    }
};
