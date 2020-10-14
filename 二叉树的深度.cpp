/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {//µÝ¹é 
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot == nullptr)
            return 0;
        if(pRoot->left == nullptr && pRoot == nullptr)
            return 1;
        return 1 + max(TreeDepth(pRoot->left),TreeDepth(pRoot->right));
    }
};
//class Solution {//²ã´Î±éÀú 
//public:
//    int TreeDepth(TreeNode* pRoot)
//    {
//        if(pRoot == nullptr)
//            return 0;
//        queue<TreeNode*> que;
//        que.push(pRoot);
//        int depth = 0;
//        while(!que.empty())
//        {
//            int size = que.size();
//            while(size--)
//            {
//                TreeNode* cur = que.front();
//                que.pop();
//                if(cur->left)
//                    que.push(cur->left);
//                if(cur->right)
//                    que.push(cur->right);
//            }
//            ++depth;
//        }
//        return depth;
//    }
//};
