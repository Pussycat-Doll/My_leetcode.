    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
    {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int j = matrix[0].size()-1;//列
        int i = 0;//行
       while(j >= 0 && i < matrix.size())
        {
            if(target > matrix[i][j])//向下找大
                ++i;
            else if(target < matrix[i][j])//向左找小
                --j;
            else
                return true;
        }
        return false;
    }
