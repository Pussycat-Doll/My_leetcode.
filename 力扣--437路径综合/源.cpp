/*����һ��������������ÿ����㶼�����һ������ֵ��

�ҳ�·���͵��ڸ�����ֵ��·��������

·������Ҫ�Ӹ��ڵ㿪ʼ��Ҳ����Ҫ��Ҷ�ӽڵ����������·��������������µģ�ֻ�ܴӸ��ڵ㵽�ӽڵ㣩��

������������1000���ڵ㣬�ҽڵ���ֵ��Χ�� [-1000000,1000000] ��������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/path-sum-iii
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    
};


int times = 0;
void dfs(TreeNode* root, int sum)
{
    if (root->val == sum)
        times++;
    if (root->left == nullptr && root->right == nullptr)
        return;
    if (root->left != nullptr)
        dfs(root->left, sum - root->val);
    if (root->right != nullptr)
        dfs(root->right, sum - root->val);
}

int pathSum(TreeNode* root, int sum)
{
    if (root == nullptr)
        return 0;
    dfs(root, sum);
    pathSum(root->left, sum);
    pathSum(root->right, sum);
    return times;
}