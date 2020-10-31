class Solution {
public:
    bool isstr(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            return true;
        else
            return false;
    }
    string reverseOnlyLetters(string S) 
    {
        int begin = 0;
        int end = S.size()-1;
        while(begin < end)
        {
            while(begin < end && !isstr(S[begin]))   
                ++begin;
            while(begin < end && !isstr(S[end]))
                --end;
            swap(S[begin],S[end]);      
            ++begin;
            --end;   
        }
        return S;
    }
};
