class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(root == nullptr)
          return {};
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* pre = nullptr;
        do
        {
            while(root != nullptr)
            {
                st.push(root);
                root = root->left;
            }
            TreeNode* cur = st.top();
            if(cur->right == nullptr || cur->right == pre)
            {
                res.push_back(cur->val);
                st.pop();
                pre = cur;
            }
            else
                root = cur->right;
        }while(!st.empty());
        return res;
    }
};
///////////////////////
class Solution {
public:
    void postorder(TreeNode* root,vector<int>& res)
    {
        if(root == nullptr)
            return;
        postorder(root->left,res);
        postorder(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(root == nullptr)
            return {};
        vector<int> res;
        postorder(root,res);
        return res;
    }
};

