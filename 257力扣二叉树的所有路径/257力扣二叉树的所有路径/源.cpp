/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
class Solution {
public:
    vector<string> ve;
    string path;
    vector<string> binaryTreePaths(TreeNode* root)
    {
        if (root == NULL)
            return ve;
        if (root->left == NULL && root->right == NULL)//������Ҷ�ӽ��
        {
            path += to_string(root->val);
            ve.push_back(path);
            return ve;
        }
        //��Ҷ�ӽ�㣬������ֵ����·���л���Ҫ��->
        path += to_string(root->val);
        path += "->";
        string path2 = path;//���path��ֵ,�������ݹ��ı䵱ǰ����·��
        binaryTreePaths(root->left);
        path = path2;
        binaryTreePaths(root->right);
        path = path2;
        return ve;
    }
};*/