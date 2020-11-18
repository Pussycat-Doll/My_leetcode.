class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
        if(n > str.size())
            return str;
        return str.substr(n)+str.substr(0,n);
        //substr()的第二个参数默认缺省等于npos的话，就截取从__pos到末尾的全部字符串
    }
    //时间复杂度为O(N)
    //空间复杂度也为O(N)
    //空间度复杂度为O(N)取决于substr的底层实现额外构造了N个大小的空间(N为str的长度)
};
