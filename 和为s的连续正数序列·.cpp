class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int left = 1,right = 1;
        int sum = 0;
        vector<vector<int>> res;
        while(left <= target/2)
        {
            if(sum < target)
            {
                sum+=right;
                ++right;
            }
            else if(sum > target)
            {
                sum -= left;
                ++left;
            }
            else
            {
                vector<int> ant;
                for(int i = left; i < right; ++i)
                    ant.push_back(i);
                res.push_back(ant);
                sum -= left;
                ++left;
            }        
        }
        return res;
    }
};
