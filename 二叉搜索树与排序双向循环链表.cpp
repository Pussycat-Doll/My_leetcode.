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
            head = cur;//����ߵĽ�㣬������ѭ��˫�������ͷ���
        cur->left = pre;
        pre = cur;
        Convert(cur->right);
    }
    Node* treeToDoublyList(Node* root) 
    {
        if(root == nullptr)
            return nullptr;
        Convert(root);
        head->left = pre;//��ʱpreָ�����һ�����
        pre->right = head;
        return head;
    }
};
