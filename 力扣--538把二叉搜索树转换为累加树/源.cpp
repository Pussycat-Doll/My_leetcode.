/*����һ��������������Binary Search Tree��������ת����Ϊ�ۼ�����Greater Tree)��
ʹ��ÿ���ڵ��ֵ��ԭ���Ľڵ�ֵ�������д������Ľڵ�ֵ֮�͡�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/convert-bst-to-greater-tree
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/

//ʹ��ԭ�����������������ұ任Ϊ���������Ϊ�Ƕ������������ұߵ���һ���ȸ�����ߵ�����
//����Ҫ���ұߵ��ۼӵ����ϣ����ۼӵ���ߵ����ϣ�

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };
 
class Solution {
public:

    void travel(TreeNode* root, int& sum)
    {
        if (root == nullptr)
            return;
        travel(root->right, sum);
        sum += root->val;
        root->val = sum;
        travel(root->left, sum);
    }

    TreeNode* convertBST(TreeNode* root)
    {
        int sum = 0;
        travel(root, sum);
        return root;
    }
};
