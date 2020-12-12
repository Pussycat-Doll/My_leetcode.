/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution 
{
public:
	//非递归版本 
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot == nullptr)
            return nullptr;
        stack<TreeNode*> res;
        TreeNode* p = pRoot;
        while(!res.empty() || p)
        {
            while(p)
            {
                res.push(p);
                p = p->left;
            }
            TreeNode* node = res.top();
            res.pop();
            if(--k == 0)
                return node;
            p = node->right;
        }
        return nullptr;
    }
} 


class Solution {
public:
    int m;
    TreeNode* ans;
    void dfs(TreeNode* pRoot)//中序遍历
    {
        if(pRoot == nullptr || m < 1)//递归的出口，走到空结点或者不满足条件了
            return;
        dfs(pRoot->left);
        if(m == 1)//最左边结点，当m减到到1的时候，当前结点就是第m小
            ans = pRoot;
        if(--m > 0)
            dfs(pRoot->right);
    }
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        ans = nullptr;
        m = k;
        dfs(pRoot);
        return ans;
    }
};
