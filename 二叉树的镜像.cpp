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
//    void Mirror(TreeNode *pRoot) //可以在先序遍历或者后序遍历的基础上
//    {
//        if(pRoot == nullptr)
//            return;
//        if(pRoot->left == nullptr && pRoot == nullptr)
//            return;
//        //交换左右结点
//        TreeNode* node = pRoot->left;
//        pRoot->left = pRoot->right;
//        pRoot->right = node;
//        
//        if(pRoot->left)
//            Mirror(pRoot->left);
//        if(pRoot->right)
//            Mirror(pRoot->right);
//    } 
};
