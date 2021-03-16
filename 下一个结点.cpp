    TreeLinkNode* GetNext(TreeLinkNode* pNode) 
    {
        if(pNode == nullptr)
            return nullptr;
        if(pNode->right != nullptr)//ÓĞÓÒº¢×Ó
        {
            TreeLinkNode* cur = pNode->right;
            while(cur->left != nullptr)
                cur = cur->left;
            return cur;
        }
        else if(pNode->next != nullptr)
        {
            TreeLinkNode* parent = pNode->next;
            TreeLinkNode* cur = pNode;
            while(parent && parent->right == cur)
            {
                cur  = parent;
                parent = parent->next;
            }   
            return parent;
        }
        else
            return nullptr;
    }
