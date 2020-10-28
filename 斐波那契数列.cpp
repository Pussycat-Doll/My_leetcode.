class Solution {
public:
    int Fibonacci(int n) 
    {
        //f(n) = f(n-1)+f(n-2);
        int f1 = 1;
        int f2 = 1;
        if(n == 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
        int fi = 0;
        for(int i = 3; i <= n; ++i)
        {
            fi = f1 + f2;
            f1 = f2;
            f2 = fi;
        }
        return fi;
    }
};
