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
	//�ǵݹ�汾 
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
    void dfs(TreeNode* pRoot)//�������
    {
        if(pRoot == nullptr || m < 1)//�ݹ�ĳ��ڣ��ߵ��ս����߲�����������
            return;
        dfs(pRoot->left);
        if(m == 1)//����߽�㣬��m������1��ʱ�򣬵�ǰ�����ǵ�mС
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
