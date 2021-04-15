class Solution {
public:
    int findNthDigit(int n) {
        int digit = 1;
        long start = 1;
        long index_count = 9;
        while(n > index_count) 
        {
            n -= index_count;
            ++digit;
            start*=10;
            index_count=start*digit*9;
        }
        long num = start + (n-1)/digit;
        long index = (n-1)%digit;

        string s = to_string(num);
        return (s[index]-'0');
    }
};
