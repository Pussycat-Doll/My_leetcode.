/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) 
    {
        ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
        p1->next = nullptr;
        ListNode* psmall = p1;
        ListNode* p2 = (ListNode*)malloc(sizeof(ListNode));
        p2->next = nullptr;
        ListNode* pbig = p2;
        ListNode* cur = pHead;
        while(cur != nullptr)
        {
            if(cur->val < x)
            {
                psmall->next = cur;
                psmall = psmall->next;
            }
            else
            {
                pbig->next = cur;
                pbig = pbig->next;
            }
            cur = cur->next;
        }
        pbig->next = nullptr;
        psmall->next = p2->next;
        ListNode* res = p1->next;
        delete p1;
        delete p2;
        return res;
    }
};

