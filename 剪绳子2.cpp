 int cuttingRope(int n) {
    if(n == 1)//1*0
        return 0;
    else if(n == 2)//1*1
        return 1;
    else if(n == 3)//1*2
        return 2;
    else
    {
        long long res = 1;
        while(n > 4)
        {
            res *= 3;
            res = res % 1000000007;
            n -= 3;
        }
        return (int)(res*n%1000000007);
    }
}

