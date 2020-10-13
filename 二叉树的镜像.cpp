/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
/*

*/
class Solution {
public:
    void Mirror(TreeNode *pRoot) //在层序遍历的基础加了每个结点的左右子树交换
    {
        if(pRoot == nullptr)
            return;
        queue<TreeNode *> que;
        que.push(pRoot);
        while(!que.empty())
        {
            TreeNode* node = que.front();
            que.pop();
            
            if(node->left)
                que.push(node->left);
            if(node->right)
                que.push(node->right);
            
            TreeNode* cur = node->left;
            node->left = node->right;
            node->right = cur;
        }
    }
};
