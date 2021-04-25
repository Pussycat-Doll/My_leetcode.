class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(1,1);
        int i = 0, j = 0, k=0;
        while(--n)
        {
            int cur = min(res[i]*2,min(res[j]*3,res[k]*5));
            res.push_back(cur);
            if(cur == res[i]*2)
                ++i;
            if(cur == res[j]*3)
                ++j;
            if(cur == res[k]*5)
                ++k;
        }
        return res.back();
    }
};
