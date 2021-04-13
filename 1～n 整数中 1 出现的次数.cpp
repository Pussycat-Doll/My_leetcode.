class Solution {
public:
    int countDigitOne(int n) 
    {
        long digit = 1;
        // digit ��Ϊ long �ͣ���Ϊ���� n �� INT_MAX��digit �������һ��ѭ��Խ��
        int num = 0;
        int high = n/10,cur = n%10,low = 0;
        while(high != 0 || cur != 0)
        {
            if(cur == 0)
                num += high*digit;
            else if(cur == 1)
                num += high*digit+low+1;
            else
                num += (high+1)*digit;
            low = low+cur*digit;
            cur = high%10;
            high = high/10;
            digit *= 10;
        }
        return num;
    }
};
