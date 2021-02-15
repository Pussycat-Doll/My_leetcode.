class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        if(s.size() == 0 || s.size() % 2 == 1)
            return false;
        if(s[0] == ')' || s[0] == ']' ||s[0] == '}')
            return false;
        int i = 0;
        while(!st.empty() && i < s.size())
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                switch(s[i])
                {
                    case ')':
                        if(st.top() == '(')
                            st.pop();
                        else
                            return false;
                        break;
                    case ']':
                        if(st.top() == '[')
                            st.pop();
                        else
                            return false;
                        break;
                    case '}':
                        if(st.top() == '{')
                            st.pop();
                        else
                            return false;
                        break;
                    default:
                        break;
                }
            }
            ++i; 
        }
        if(st.empty() && i = s.size() - 1)
        	return true;
        else
        	return false;
    }
};

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        if(s.size() == 0 || s.size() % 2 == 1)
            return false;
        if(s[0] == ')' || s[0] == ']' ||s[0] == '}')
            return false;

        unordered_map<char,char> mp = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        for(auto e:s)
        {
            if(mp.count(e))
            {
                if(st.empty() || st.top() != mp[e])
                    return false;
                else
                    st.pop();
            }
            else
                st.push(e);
        }
        return st.empty();
    }
};
