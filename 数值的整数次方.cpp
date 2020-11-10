/*暴力破解： 
时间复杂度：O(n)
空间复杂度：O(1)
class Solution {
public:
    double Power(double base, int exponent) 
    {
        if(exponent < 0)
        {
            exponent = -exponent;
            base = 1/base;
        }
        double ret = 1.0;
        for(size_t i = 0; i < exponent; ++i)
        {
            ret*=base;
        }
        return ret;
    }
};*/
/*快速幂 
时间复杂度：O(logn)，每次规模减少一半
空间复杂度：O(logn)，递归栈，因为要记住logn个变量
class Solution {
public:
    double p_power(double b,int e)
    {
        if(e == 0)
            return 1.0;
        double ret = p_power(b,e/2);
        if(e & 1 == 0)//偶数幂 
            return ret*ret;
        else
            return ret*ret*b;//奇数幂 
    }
    double Power(double base, int exponent) 
    {
        if(exponent < 0)
        {
            exponent = -exponent;
            base = 1/base;
        }
        return p_power(base,exponent);
    }
};
*/
