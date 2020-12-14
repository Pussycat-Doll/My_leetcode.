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
class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) //≤„–Ú±È¿˙
        {
            if(pRoot == nullptr)
                return {};
            vector<vector<int>> res;
            queue<TreeNode*> q;
            q.push(pRoot);
            while(!q.empty())
            {
                int sz = q.size();
                vector<int> ant;
                while(sz--)
                {
                    TreeNode* node = q.front();
                    q.pop();
                    ant.push_back(node->val);
                    
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                }
                res.push_back(ant);
            }
            return res;
        }
};
