class Solution {
public:
    int r;
    int c;
    int movingCount(int m, int n, int k) {
        r = m;
        c = n;
        vector<vector<int> > visit(m, vector<int>(n, 0));
        int count = dfs(0,0,k,visit);
        return count;
    }
    int sum(int num)
    {
        int res = 0;
        while(num)
        {
            res += (num%10);
            num/=10;
        }
        return res;
    }
    int dfs(int i, int j, int k, vector<vector<int>>& visit)
    {
        int count = 0;
        if(i<0 || i >=r || j<0 || j>=c || sum(i)+sum(j)>k || visit[i][j] == 1)
            return 0;
        visit[i][j] = 1;
        count = 1 + dfs(i+1,j,k,visit) + dfs(i-1,j,k,visit) + dfs(i,j+1,k,visit) + dfs(i,j-1,k,visit);
        return count;
    }
};
