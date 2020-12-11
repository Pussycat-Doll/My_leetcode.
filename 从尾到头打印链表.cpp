class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) 
    {
    	//先反转链表，后插入数组 
        if(head == nullptr)
            return {};
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* next = nullptr;
        while(cur)
        {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        vector<int> res;
        while(pre)
        {
            res.push_back(pre->val);
            pre = pre->next;
        }
        return res;
    }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) 
    {
    	//先插入数组，反转数组
        vector<int> res;
        while(head)
        {
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
