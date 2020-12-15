/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool IsSametree(TreeNode* pRoot1,TreeNode* pRoot2)
    {
        if(pRoot2 == nullptr)
            return true;
        if(pRoot1 == nullptr)
            return false;
        if(pRoot1->val == pRoot2->val)
            return IsSametree(pRoot1->left,pRoot2->left) && IsSametree(pRoot1->right,pRoot2->right);
        else
            return false;
        
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1 == nullptr || pRoot2 == nullptr)
            return false;
        return IsSametree(pRoot1,pRoot2) || IsSametree(pRoot1->left, pRoot2) || IsSametree(pRoot1->right, pRoot2);
        
    }
};
/*时间复杂度：O（m），m为A树的节点数，n为B树的节点数。首先A树中的每个节点必须遍历一次，然后
A树中最多有(m/n)个与B树的根节点相等，然后(m/n)n=m,所以时间复杂度为O（m）*/
