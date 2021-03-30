class Solution {
public:
    vector<vector<int>> res;
    void findpath(vector<int>& ant,TreeNode* root, int target)
    {
        ant.push_back(root->val);
        target -= root->val;
        if(root->left == nullptr && root->right == nullptr && 0 == target)
        //����Ҷ�ӽڵ������Ŀ��ֵ���
        {
            res.push_back(ant);
        }
        if(root->left != nullptr)
            findpath(ant,root->left,target);
        if(root->right != nullptr)
            findpath(ant,root->right,target);
        ant.pop_back();//ɾ����ǰ·��
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
