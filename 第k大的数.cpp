    int findKthLargest(vector<int>& nums, int k) 
    {
        //建k个数的小堆
        priority_queue<int,vector<int>,greater<int>> minheap;
        int i = 0;      
        for(; i < k; ++i)
            minheap.push(nums[i]);
        for(;i < nums.size(); ++i)
        {
            if(minheap.top() < nums[i])
            {
                minheap.pop();
                minheap.push(nums[i]);
            }
        }
        return minheap.top();
    }
