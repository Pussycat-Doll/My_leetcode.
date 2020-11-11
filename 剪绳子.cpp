class Solution {
public:
    /*
    当n>=5的时候，对于N都有3*（N-3）>= N && 2*(N-2) >= N,而且
    3*（N-3）>= 2*(N-2)，所以我们应该尽可能多地剪长度为3的绳子;
    当n==4的时候，2*2 > 1*3,所以应该选择剪长度为2的绳子
    */
    int cutRope(int number) 
    {
        if(number < 2)
            return 0;
        if(number == 2)
            return 1;
        if(number == 3)
            return 2;
        int timesOf3 = number/3;
        if(number%timesOf3 == 1 )
            --timesOf3;
        int timesOf2 = (number - 3*timesOf3)/2;
        return pow(3,timesOf3)*pow(2,timesOf2);
    }
};
