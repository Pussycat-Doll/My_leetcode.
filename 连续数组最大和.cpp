class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) 
    {
        //×´Ì¬×ªÒÆ·½³Ì=dp[i] = max(array[i],dp[i-1]+array[i])
        vector<int> dp(array.size()+1,1);
        dp[0] = 0;
        int cur = array[0];
        for(int i = 1; i <= array.size(); ++i)
        {
            dp[i] = max(array[i-1],dp[i-1]+array[i-1]);
            cur = max(cur,dp[i]);
        }
        return cur;
    }
};
