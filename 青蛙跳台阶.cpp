class Solution {
public:
    int jumpFloor(int number) 
    {
        //f(n) = f(n-1)+f(n-2)
        if(number == 0)
            return 1;
        if(number == 1)
            return 1;
        int fn_1 = 1;
        int fn_2 = 1;
        int fn = 0;
        for(int i = 2; i <= number; ++i)
        {
            fn = fn_1+fn_2;
            fn_1 = fn_2;
            fn_2 = fn;
        }
        return fn;
    }
};
