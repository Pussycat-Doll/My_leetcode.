class Solution {
public:
    string reverseLeftWords(string s, int n) {
        //reverse函数是左闭右开
        reverse(s.begin(),s.begin()+n);//反转[0, n)的字符，反转前n个字符
        reverse(s.begin()+n,s.end());//反转[n,s.size())的字符，反转后s.size()-n个字符
        reverse(s.begin(),s.end());//反转[0,s.size())的字符，反转整个字符串
        return s;
    }
};

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string str;
        n %= s.size();
        for(int i = n; i < s.size(); ++i)
            str += s[i];
        for(int i = 0; i < n; ++i)
            str += s[i];
        return str;
    }
};

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int len = s.size();
        s += s;
        return s.substr(n,len);
    }
};
