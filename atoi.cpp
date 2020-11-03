class Solution {
public:
    bool isNum(char ch)
    {
        if(ch >= '0' && ch <= '9')
            return true;
        else
            return false;
    }
    int myAtoi(string s) 
    {
        size_t begin = 0;
        while(s[begin] == ' ')
            ++begin;//找到有效字符串开头

        int flag = 1;
        if(s[begin] == '-')//控制正负号
            flag = -1;
        if(s[begin] == '-'|| s[begin] == '+') 
            ++begin; 

        else if(!isNum(s[begin]))//
            return 0;

        int res = 0;
        while(begin < s.size() && isNum(s[begin]))
        {
            
            int r = s[begin]-'0';
            if(res > INT_MAX/10 || (res == INT_MAX/10 && r > 7))//判断溢出
                return flag == -1 ? INT_MIN : INT_MAX;
            res = res*10 + r;
            ++begin;
        }
        return flag*res;
  
    }
};
