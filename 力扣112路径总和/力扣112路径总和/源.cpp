/*class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum)
    {
        //�Ӹ��ڵ㿪ʼ��ÿ������һ���ڵ��ʱ�򣬴�Ŀ��ֵ��۳��ڵ�ֵ��
        һֱ��Ҷ�ӽڵ��ж�Ŀ��ֵ�ǲ��Ǳ����ꡣ
        if (root == NULL)
            return false;
        sum -= root->val;
        if (root->left == NULL && root->right == NULL && sum == 0)
            return true;
        else
            return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};*/