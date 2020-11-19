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
    /*时间复杂度：O(n), 遍历一次链表
      空间复杂度：O(1)
      1->2->3
      1<-2<-3*/
    ListNode* ReverseList(ListNode* pHead) 
    {
        ListNode* pre = nullptr;
        ListNode* cur = pHead;
        ListNode* next = nullptr;
        while(cur != nullptr)
        {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};
