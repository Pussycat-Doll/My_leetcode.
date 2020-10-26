class Sum
{
public:
    Sum()
    {
        _sum += _a;
        ++_a;
    }
    static int print()
    {
        return _sum;
    }
    static void Init()
    {
        _a = 1;
        _sum = 0;
    }
private:
    static int _a;
    static int _sum;
};
int Sum::_a = 1;
int Sum::_sum = 0;

class Solution {
public:
    int Sum_Solution(int n) {
//         if(n == 1)
//             return 1;
//         return n +  Sum_Solution(n-1);
        
//        return n*(n+1)/2;
        Sum::Init();
       Sum a[n];
       return Sum::print();
    }
};
