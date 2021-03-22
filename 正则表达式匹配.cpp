class Solution {
public:
    bool isMatch(string s, string p) {
        return match(s, p, 0, 0);
    }
private:
    bool match(string &s, string &p, int i, int j)
    {
        if(i == s.size() && j == p.size())//�ݹ������ƥ�����
            return true;
        if(j + 1 < p.size() && p[j + 1] == '*')
            return match(s, p, i, j + 2) ||//*ǰ����ַ�����0��(����*)
(i != s.size() && (s[i] == p[j] || p[j] == '.') && match(s, p, i + 1, j));
//*ǰ����ַ�ƥ����
        else
            return i != s.size() 
            && j != p.size() 
            && (s[i] == p[j] || p[j] == '.') //.ƥ��������ƥ��
            && match(s, p, i + 1, j + 1);
    }
};   
