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
        while(cur != nullptr)//第一步：复制每个结点，并插入到原先的链表中
        {
            Node* Newnode = new Node(cur->val);
            next = cur->next;
            cur->next = Newnode;
            Newnode->next = next;
            cur = next;
        }
        cur = head;
        while(cur != nullptr)//第二步：复制随机指针
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
        while(cur != nullptr)//第三步：将新旧链表分开
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

