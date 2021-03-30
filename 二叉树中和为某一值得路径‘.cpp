class Solution {
public:
    vector<vector<int>> res;
    void findpath(vector<int>& ant,TreeNode* root, int target)
    {
        ant.push_back(root->val);
        target -= root->val;
        if(root->left == nullptr && root->right == nullptr && 0 == target)
        //到达叶子节点而且与目标值相等
        {
            res.push_back(ant);
        }
        if(root->left != nullptr)
            findpath(ant,root->left,target);
        if(root->right != nullptr)
            findpath(ant,root->right,target);
        ant.pop_back();//删除当前路径
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) 
    {
        vector<int> ant;
        if(root == nullptr)
            return res;
        findpath(ant,root,target);
        return res;
    }
};
