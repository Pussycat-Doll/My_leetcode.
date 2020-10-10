
/*��������֮��ĺ�������ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ��

������������ x �� y����������֮��ĺ������롣

ע�⣺
0 �� x, y < 2^31.

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/hamming-distance
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/

int hammingDistance(int x, int y)
{
    /*int sum = 0;
    int n = 32;
    while(n--)
    {
        int a = (x>>n)&1;
        int b = (y>>n)&1;
        if(a^b == 1)
            sum++;
    }
    return sum;*/
    int a = x ^ y;
    int sum = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (a & 1 == 1)
            ++sum;
        a >>= 1;
    }
    return sum;
}