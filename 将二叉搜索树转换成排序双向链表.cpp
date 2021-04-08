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
    void Convert_(TreeNode* t, TreeNode**pre)
    {
        if(t == nullptr)
            return;
        Convert_(t->left,pre);
        t->left = *pre;
        if((*pre) != nullptr)
            (*pre)->right = t;
        *pre = t;
        Convert_(t->right,pre);
    }
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == nullptr)
            return nullptr;
        TreeNode* pre = nullptr;
        Convert_(pRootOfTree,&pre);
        TreeNode* pHead = pre;
        while(pHead->left != nullptr)
            pHead = pHead->left;
        return pHead;
    }
};

