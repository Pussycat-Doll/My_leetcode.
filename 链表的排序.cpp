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
     * @param head ListNode�� the head node
     * @return ListNode��
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
                //Ѱ�Ҳ����λ��
                while(tmp != nullptr && p->val > tmp->val)
                {
                    prev = tmp;
                    tmp = tmp->next;
                }
                if(prev != nullptr)//�м�壬����β��
                {
                    p->next = tmp;
                    prev->next = p;
                }
                else//ͷ��
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
