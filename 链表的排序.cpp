/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param head ListNode类 the head node
     * @return ListNode类
     */
    ListNode* sortInList(ListNode* head) 
    {
        // write code here
        if(head == nullptr)
            return nullptr;
        else if(head->next == nullptr)
            return head;
        else
        {
            ListNode* p = head;
            ListNode* q = head->next;
            ListNode* tmp = head;
            ListNode* prev = nullptr;
            while(q != nullptr)
            {
                p = q;
                q = q->next;
                //寻找插入的位置
                while(tmp != nullptr && p->val > tmp->val)
                {
                    prev = tmp;
                    tmp = tmp->next;
                }
                if(prev != nullptr)//中间插，或者尾插
                {
                    p->next = tmp;
                    prev->next = p;
                }
                else//头插
                {
                    p->next = head;
                    head = p;
                }
                prev = nullptr;
                tmp = head;
            }
            return head;
        }
    }
};
