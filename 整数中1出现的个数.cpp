class Solution {
public:
    int numOfone(int num)
    {
        int n = 0;
        while(num)
        {
            if(num % 10 == 1)
                ++n;
            num/=10;
        }
        return n;
    }
    int NumberOf1Between1AndN_Solution(int n)
    {
        int num = 0;
        for(int i = 1; i <= n; ++i)
        {
            num += numOfone(i);
        }
        return num;
    }
};
