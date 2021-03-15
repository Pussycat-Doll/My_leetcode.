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
//    void _reversePrint(ListNode* head, vector<int>& ant)
//    {
//        if(head == nullptr)
//            return;
//        if(head->next != nullptr)
//            _reversePrint(head->next,ant);
//        ant.push_back(head->val);
//    }
//    vector<int> reversePrint(ListNode* head) 
//    {
//        vector<int> ant;
//        _reversePrint(head,ant);
//        return ant;
//    }

 vector<int> reversePrint(ListNode* head) 
{
    stack<int> st;
    vector<int> ant;
    ListNode* cur = head;
    while(cur != nullptr)
    {
        st.push(cur->val);
        cur = cur->next;
    }
    while(!st.empty())
    {
        ant.push_back(st.top());
        st.pop();
    }
    return ant;
}
