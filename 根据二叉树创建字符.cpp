class Solution {
public:
    void tree2s(TreeNode* t,string& str)
    {
        if(t == nullptr)
            return;
        str += to_string(t->val);
        if(t->left != nullptr || t->right != nullptr)
        {
            str += '(';
            tree2s(t->left, str);
            str += ')';
        }
        if(t->right != nullptr)
        {
            str += '(';
            tree2s(t->right, str);
            str += ')';
        }

    }
    string tree2str(TreeNode* t) 
    {
        string str;
        tree2s(t,str);
        return str;
    }
};

