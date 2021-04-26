class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int arr[32] = {0};
        for(auto e:nums)
        {
            for(int i = 0; i < 32; ++i)
            {
                arr[i]+= e&1;
                e>>=1;
            }
        }
        int res = 0;
        for(int i = 31; i >= 0; --i)
        {
            res <<= 1;
            res += arr[i] %= 3;
        }
        return res;
    }
};

