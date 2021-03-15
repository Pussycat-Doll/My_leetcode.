class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param numbers int整型vector 
     * @return int整型
     */
    int duplicate(vector<int>& numbers) 
    {
        if(numbers.size()== 0)
            return -1;
        unordered_map<int,int> mp;
        for(auto e: numbers)
        {
            mp[e]++;
            if(mp[e] > 1)
                return e;
        }
        return -1;
    }
};
    int findRepeatNumber(vector<int>& nums) 
    {
        if(nums.size() == 0 || nums.size() == 1)
            return -1;
        for(int i = 0; i < nums.size(); ++i)
        {
            while(nums[i] != i)
            {
                if(nums[i] == nums[nums[i]])
                {
                    return nums[i];
                }
                else//交换
                {
                    swap(nums[i],nums[nums[i]]);
                }
            }
        }
        return -1;
    }
