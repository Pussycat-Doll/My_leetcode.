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
/*ʱ�临�Ӷȣ�O��m����mΪA���Ľڵ�����nΪB���Ľڵ���������A���е�ÿ���ڵ�������һ�Σ�Ȼ��
A���������(m/n)����B���ĸ��ڵ���ȣ�Ȼ��(m/n)n=m,����ʱ�临�Ӷ�ΪO��m��*/
