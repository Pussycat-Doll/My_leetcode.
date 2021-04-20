/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    {
        if(pListHead == nullptr)
            return nullptr;
        ListNode* fast = pListHead;
        ListNode* slow = pListHead;
        while(k--)
        {
            if(fast != nullptr)
                fast = fast->next;
            else
                return nullptr;//k>Á´±í³¤¶È
        }
        while(fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
