class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * 
     * @param numbers int����vector 
     * @return int����
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
                else//����
                {
                    swap(nums[i],nums[nums[i]]);
                }
            }
        }
        return -1;
    }
