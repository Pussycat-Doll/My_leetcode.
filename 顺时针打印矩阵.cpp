vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0 || matrix[0].size() == 0)
            return {};
        int left = 0,top = 0;
        int right = matrix[0].size()-1;
        int buttom = matrix.size()-1;
        vector<int> res;
        while(left <= right && top <= buttom)
        {
            for(int i = left; i <= right; ++i)
            {
                res.push_back(matrix[top][i]);
            }
            for(int j = top+1; j <= buttom; ++j)
            {
                res.push_back(matrix[j][right]);
            }
            if(left < right && top < buttom)
            //��Ϊ�˷�ֹ����ֻʣ��һ�л�һ�е�ʱ���ظ�������ӡ�
            {
                for(int k = right-1; k >= left+1; --k)
                {
                    res.push_back(matrix[buttom][k]);
                }
                for(int l = buttom; l>= top+1; --l)
                {
                    res.push_back(matrix[l][left]);
                }
            }
            ++left;
            ++top;
            --buttom;
            --right;
        }
        return res;
    }

