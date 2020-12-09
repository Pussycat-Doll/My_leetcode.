class Solution {
public:
	void replaceSpace(char *str,int length) 
    {
        string s;
        for(int i = 0; i < length; ++i)
        {
            if(str[i] != ' ')
                s += str[i];
            else
                s += "%20";
        }
        strcpy(str,s.c_str());
	}
};

class Solution {
public:
	//时间复杂度：O(length) 只遍历了一遍字符串
	//空间复杂度：O(1) 没有开辟空间
	void replaceSpace(char *str,int length) 
    {
        if(str == nullptr || length <= 0)
            return;
        int cnt = 0;
        for(int i = 0; i < length; ++i)
        {
            if(str[i] == ' ')
                ++cnt;
        }
        if(cnt == 0)
            return;
        int newlength = length + 2*cnt -1;
        for(int i = length-1; i >= 0; --i)
        {
            if(str[i] == ' ')
            {
                str[newlength--] = '0';
                str[newlength--] = '2';
                str[newlength--] = '%';
            }
            else
                str[newlength--] = str[i];
        }
	}
};
