    int numWays(int n) 
    {
        if(n == 0 || n == 1)
            return 1;
        else
        {
           long long first = 1,second = 1,third;
           for(int i = 2; i <= n; ++i)
           {
               third = (first + second)%(1000000007);
               first = second;
               second = third;
           }
           return third;
        }
    }
