class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> vv;
        vv.resize(numRows);//开辟列
        //初始化
        for(int i = 0; i < vv.size(); ++i)
        {

            vv[i].resize(i+1);//开辟并初始化每一行
            vv[i][0] = 1;
            vv[i][vv[i].size()-1] = 1;

        }
        //计算并填充其他非1的值
        for(int i = 0; i < vv.size(); ++i)
        {
            for(int j = 0; j < vv[i].size(); ++j)
            {
                if(vv[i][j] != 1)
                    vv[i][j] = vv[i-1][j]+vv[i-1][j-1];
            }
        }
        return vv;
    }
};
