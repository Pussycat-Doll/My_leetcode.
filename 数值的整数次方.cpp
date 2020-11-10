/*�����ƽ⣺ 
ʱ�临�Ӷȣ�O(n)
�ռ临�Ӷȣ�O(1)
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
/*������ 
ʱ�临�Ӷȣ�O(logn)��ÿ�ι�ģ����һ��
�ռ临�Ӷȣ�O(logn)���ݹ�ջ����ΪҪ��סlogn������
class Solution {
public:
    double p_power(double b,int e)
    {
        if(e == 0)
            return 1.0;
        double ret = p_power(b,e/2);
        if(e & 1 == 0)//ż���� 
            return ret*ret;
        else
            return ret*ret*b;//������ 
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
