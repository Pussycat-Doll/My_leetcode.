class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int map[128] = {0},res = 0;
        for(int start = 0,end = 0;end < s.size(); ++end)
        {
            ++map[s[end]];
            while(map[s[end]] == 2)
                --map[s[start++]];
            res = max(res,end-start+1);
        }
        return res;
    }
};
