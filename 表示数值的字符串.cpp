class Solution {
public:
    bool isNumber(string s) 
    {
        if(s.size() == 0)
            return false;
        int index = 0;
        IsBlank(s,index);//跳过开始的空格
        int flag = IsSymbol(s,index);
        if(s[index] == '.')
        {
            ++index;
            flag = IsInteger(s,index) || flag;
            //用||的原因：
            //小数可以没有整数部分——.99
            //小数点后面可以没有数字——888.
            //小数点前面和后面都可以有数字——3.14
        }
        if(s[index]=='e' || s[index]=='E')
        {
            ++index;
            flag = flag && IsSymbol(s,index);
            //用&&的原因
            //e|E若出现，它的的前面或者后面都必须有数字
            //flag代表前面有数字,IsSymbol(s,index)代表后面有数字
        }
        IsBlank(s,index);//跳过结尾的空格
        return flag && index == s.size();
    }
    bool IsSymbol(string s,int& index)判断符号
    {
        if(s[index] == '+' || s[index] == '-')
            ++index;
        return IsInteger(s, index);
    }
    bool IsInteger(string s, int& index)//判断是否存在数字串
    {
        int i = index;
        while(index < s.size() && s[index] >= '0' && s[index] <= '9')
            ++index;
        return index > i;//存在数字串
    }
    void IsBlank(string s, int& index)//跳过开始和结尾的空格
    {
        int i = index;
        while(index < s.size() && s[index] == ' ')
            ++index;
    }
};

