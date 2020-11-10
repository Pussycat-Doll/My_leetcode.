class Solution {
public:
     int  NumberOf1(int n) 
     {
         int sum = 0;
         for(size_t i = 0; i < 32; ++i)
         {
             if(n&(1<<i))
                 ++sum;
         }
         return sum;
     }
};
