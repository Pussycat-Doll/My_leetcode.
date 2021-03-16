/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(head == nullptr)
            return nullptr;
        Node* cur = head;
        Node* next = cur;
        while(cur != nullptr)//��һ��������ÿ����㣬�����뵽ԭ�ȵ�������
        {
            Node* Newnode = new Node(cur->val);
            next = cur->next;
            cur->next = Newnode;
            Newnode->next = next;
            cur = next;
        }
        cur = head;
        while(cur != nullptr)//�ڶ������������ָ��
        {
            if(cur->random == nullptr)
                cur->next->random = nullptr;
            else
                cur->next->random = cur->random->next;
            cur = cur->next->next;
        }
        cur = head;
        Node* newcur = head->next;
        Node* newhead = newcur;
        while(cur != nullptr)//�����������¾�����ֿ�
        {
            if(newcur->next == nullptr)
            {
                cur->next = nullptr;
                newcur = nullptr;
                break;
            }
            cur->next = cur->next->next;
            newcur->next = newcur->next->next;
            cur = cur->next;
            newcur = newcur->next;
        }
        return newhead;
    }
};

