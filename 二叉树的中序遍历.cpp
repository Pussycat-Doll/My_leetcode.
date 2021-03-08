class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root == nullptr)
            return {};
        vector<int> res;
        stack<TreeNode*> st;
        do
        {
            while(root != nullptr)
            {
                st.push(root);
                root = root->left;
            }
            TreeNode* cur = st.top();
            res.push_back(cur->val);
            st.pop();
            if(cur->right != nullptr)
                root = cur->right;
        }while(!st.empty() || root != nullptr);
        return res;
    }
};
////////////////////////////////////////////
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& res)
    {
        if(root == nullptr)
            return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root == nullptr)
            return {};
        inorder(root,res);
        return res;
    }
};

