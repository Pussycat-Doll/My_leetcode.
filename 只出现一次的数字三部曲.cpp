/*136. ֻ����һ�ε�����
����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ�
�ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
˵����\
����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����*/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        for(auto e:nums)
        {
            res^=e;
        }
        return res;
    }
};
/*137. ֻ����һ�ε����� II
����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ����������Ρ�
�ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
˵����
����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����*/
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int bitarr[32] = {0};
        for(auto e:nums)
        {
            for(int i = 0; i < 32; ++i)
            {
                if(e & (1<<i))
                    bitarr[i]++;//ͳ�Ƴ�ÿһλ1�ĸ���
            }
        }
        //32λÿһλ1�ĸ���Ҫô��3N,Ҫô��3N+1
        int res = 0;
        for(int i = 0; i < 32; ++i)
        {
            if(bitarr[i] % 3 == 1)
                res |=(1 << i);
        }
        return res;
    }
};
/*260. ֻ����һ�ε����� III
����һ���������� nums������ǡ��������Ԫ��ֻ����һ�Σ���������Ԫ�ؾ��������Ρ� 
�ҳ�ֻ����һ�ε�������Ԫ�ء�
ʾ�� :
����: [1,2,1,3,2,5]
���: [3,5]
ע�⣺
��������˳�򲢲���Ҫ��������������ӣ� [5, 3] Ҳ����ȷ�𰸡�
����㷨Ӧ�þ�������ʱ�临�Ӷȡ����ܷ��ʹ�ó����ռ临�Ӷ���ʵ��*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int flag = 0;
        for(auto e:nums)
        {
            flag^=e;
        }
        int i = 0;
        for(; i < 32; ++i)
        {
            //�ҳ����ֵĵ�һ��Ϊ1�ı�־λ����λΪ1��˵���еĸ�λΪ1.�еĸ�λΪ0
            if(flag & (1<<i))
                break;
        }
        int num1 = 0;
        int num2 = 0;
        //���ݱ�ǵ�λ�ã������Ϊ���飬�ٷֱ����
        for(auto e:nums)
        {
            if(e&(1<<i))
                num1^=e;
            else
                num2^=e;
        }
        vector<int> v;
        v.push_back(num1);
        v.push_back(num2);
        return v;
    }
};

