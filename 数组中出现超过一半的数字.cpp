int majorityElement(vector<int>& nums) 
    {
        int key = 0,votes = 0;
        for(auto e:nums)
        {
            if(votes == 0)
                key = e;
            votes += e == key?1:-1;
        }
        return key;
    }
    
    

int _quickSort(vector<int>& nums, int start, int end)
{
    int key = nums[start];
    int keyindex = start;
    while (start < end)
    {
        while (start < end && nums[end] >= key)
            --end;
        while (start < end && nums[start] <= key)
            ++start;
        swap(nums[start], nums[end]);
    }
    swap(nums[start], nums[keyindex]);
    return end;
}
int majorityElement(vector<int>& nums) {
    if (nums.size() == 0)
        return -1;
    int mid = nums.size() >> 1;
    int start = 0;
    int end = nums.size() - 1;
    int sub = _quickSort(nums, start, end);
    while (sub != mid)
    {
        if (sub > mid)
        {
            end = sub - 1;
            sub = _quickSort(nums, start, end);
        }
        else
        {
            start = sub + 1;
            sub = _quickSort(nums, start, end);
        }
    }
    return nums[sub];
}
