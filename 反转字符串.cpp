class Solution {
public:
    string reverseLeftWords(string s, int n) {
        //reverse����������ҿ�
        reverse(s.begin(),s.begin()+n);//��ת[0, n)���ַ�����תǰn���ַ�
        reverse(s.begin()+n,s.end());//��ת[n,s.size())���ַ�����ת��s.size()-n���ַ�
        reverse(s.begin(),s.end());//��ת[0,s.size())���ַ�����ת�����ַ���
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
