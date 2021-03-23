    vector<int> exchange(vector<int>& nums) 
    {
        int left = 0;
        int right = nums.size()-1;
        while(left < right)
        {
            while(left< right && (nums[left]&1) != 0)//��ż��
                ++left;
            while(left< right && (nums[right]&1) == 0)//������
                --right;
            swap(nums[left],nums[right]);
            ++left;
            --right;
        }
        return nums;
    }
