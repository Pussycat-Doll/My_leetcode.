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
            //下一层要入栈的是偶数层，偶数层从右向左出栈，从左向右入栈
            {
                if(node->left)
                    st[next].push(node->left);
                if(node->right)
                    st[next].push(node->right);
            }
            else//下一栈要入栈的奇数层，奇数层从左向右出栈，从右向左入栈
            {
                if(node->right)
                    st[next].push(node->right);
                if(node->left)
                    st[next].push(node->left);
            }
            if(st[cur].size() == 0)//当前栈已空，说明该层数据出栈完毕
            {
                res.push_back(ant);
                ant.clear();
                cur = 1-cur;//1 = 1-0; 0 = 1-1
                next = 1-next;//1 = 1-0; 0 = 1-1
            }
        }
        return res;
    }

