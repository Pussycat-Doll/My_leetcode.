    int hammingWeight(uint32_t n) 
    {
        int count = 0;
        while(n)
        {
                ++count;
                n = n&(n-1);
        }  
        return count;  
    }
    int hammingWeight2(uint32_t n) 
{
    size_t flag = 1;
    int count = 0;
    while(flag)  
    {
        if(n&flag)
            ++count;
        flag = flag << 1;
    }
    return count;
}
