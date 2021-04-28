class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr)
            return nullptr;
        TreeNode* ancestor = root;
        while(1)
        {
            if(p->val > ancestor->val && q->val > ancestor->val)
                ancestor = ancestor->right;
            else if(p->val < ancestor->val && q->val < ancestor->val)
                ancestor = ancestor->left;
            else
                break;
        }
        return ancestor;
    }
};
