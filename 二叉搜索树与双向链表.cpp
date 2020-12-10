class Solution {
public:
    void _Convert(TreeNode* cur,TreeNode*& pre)
    {
        if(cur == nullptr)
            return;
        _Convert(cur->left, pre);
         
        cur->left = pre;
        if(pre)
            pre->right = cur;
        pre = cur;
         
        _Convert(cur->right, pre);
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr)
            return nullptr;
        TreeNode* pre = nullptr;
         
        _Convert(pRootOfTree, pre);
         
        TreeNode* res = pRootOfTree;
        while(res->left)
            res = res->left;
        return res;
    }
};

