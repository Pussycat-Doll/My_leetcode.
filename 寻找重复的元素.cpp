class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        if(nums.size() <= 1)
            return -1;
        //数字在1 - nums.size()-1之间
        int start = 1;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + ((end - start)>>1);
            int count = 0;
            for(auto e:nums)
            {
                if(e <= mid && e >= start)
                    ++count;
            }
            if(start == end)
            {
                if(count > 1)
                    return start;
                else
                    break;
            }
            if(count > mid - start+1)
                end = mid;
            else
                start = mid + 1;
        }
        return -1;
    }
};
