vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        stack<TreeNode*> st[2];
        int cur = 0;//
        int next = 1;
        st[cur].push(root);
        vector<int> ant;
        while(!st[0].empty() || !st[1].empty())
        {
            TreeNode* node = st[cur].top();
            ant.push_back(node->val);
            st[cur].pop();
            if(cur == 0)
            //��һ��Ҫ��ջ����ż���㣬ż������������ջ������������ջ
            {
                if(node->left)
                    st[next].push(node->left);
                if(node->right)
                    st[next].push(node->right);
            }
            else//��һջҪ��ջ�������㣬������������ҳ�ջ������������ջ
            {
                if(node->right)
                    st[next].push(node->right);
                if(node->left)
                    st[next].push(node->left);
            }
            if(st[cur].size() == 0)//��ǰջ�ѿգ�˵���ò����ݳ�ջ���
            {
                res.push_back(ant);
                ant.clear();
                cur = 1-cur;//1 = 1-0; 0 = 1-1
                next = 1-next;//1 = 1-0; 0 = 1-1
            }
        }
        return res;
    }

