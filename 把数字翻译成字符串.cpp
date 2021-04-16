class Solution {
public:
    int translateNum(int num) {
        string s = to_string(num);
        vector<int> dp(s.size());
        dp[0] = 1;
        for(int i = 1; i < s.size(); ++i)
        {
            dp[i] = dp[i-1];
            string sub = s.substr(i-1,2);
            if(stoi(sub) >= 10 && stoi(sub) <= 25)
                dp[i] += i-2>=0? dp[i-2]:1;
        }
        return dp[s.size()-1];
    }
};
