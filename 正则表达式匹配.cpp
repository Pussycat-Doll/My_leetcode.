class Solution {
public:
    bool isMatch(string s, string p) {
        return match(s, p, 0, 0);
    }
private:
    bool match(string &s, string &p, int i, int j)
    {
        if(i == s.size() && j == p.size())//递归结束，匹配结束
            return true;
        if(j + 1 < p.size() && p[j + 1] == '*')
            return match(s, p, i, j + 2) ||//*前面的字符出现0次(忽略*)
(i != s.size() && (s[i] == p[j] || p[j] == '.') && match(s, p, i + 1, j));
//*前面的字符匹配上
        else
            return i != s.size() 
            && j != p.size() 
            && (s[i] == p[j] || p[j] == '.') //.匹配或者相等匹配
            && match(s, p, i + 1, j + 1);
    }
};   
