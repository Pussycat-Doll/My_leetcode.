class Solution {
public:
    int depth(TreeNode* pRoot)
    {
        if(pRoot == nullptr)
            return 0;
        int left = depth(pRoot->left);
        int right = depth(pRoot->right);
        if(left == -1 || right == -1)
            return -1;
        if(left - right < -1 || left - right > 1)
            return -1;
        else
            return 1+(left > right ? left : right);
    }
    bool IsBalanced_Solution(TreeNode* pRoot) 
    {
        return depth(pRoot) != -1;
    }
};
