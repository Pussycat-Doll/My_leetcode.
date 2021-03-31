class Solution {
public:
    Node* pre,*head;
    void Convert(Node* cur)
    {
        if(cur == nullptr)
            return;
        Convert(cur->left);
        cur->left = pre;
        if(pre != nullptr)
            pre->right = cur;
        else
            head = cur;//最左边的结点，是排序循环双向链表的头结点
        cur->left = pre;
        pre = cur;
        Convert(cur->right);
    }
    Node* treeToDoublyList(Node* root) 
    {
        if(root == nullptr)
            return nullptr;
        Convert(root);
        head->left = pre;//此时pre指向最后一个结点
        pre->right = head;
        return head;
    }
};
