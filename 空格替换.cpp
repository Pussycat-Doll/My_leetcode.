  string replaceSpace(string s) 
    {
        int count = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ')
                ++count;
        }
        int p1 = s.size()-1;//扩容之前的最后一个位置的下标
        s.resize(s.size() + 2*count);
        int p2 = s.size()-1;//扩容之后的最后一个位置的下标
        while(p1 < p2)
        {
            if(s[p1] == ' ')
            {
                s[p2--] = '0';
                s[p2--] = '2';
                s[p2--] = '%';
                --p1;
            }
            else
                s[p2--] = s[p1--];
        }
        return s;
    }
