  string replaceSpace(string s) 
    {
        int count = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ')
                ++count;
        }
        int p1 = s.size()-1;//����֮ǰ�����һ��λ�õ��±�
        s.resize(s.size() + 2*count);
        int p2 = s.size()-1;//����֮������һ��λ�õ��±�
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
