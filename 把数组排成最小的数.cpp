class Solution {
public:
    int _quicksort(vector<string>& res,int left, int right)
    {
        string key = res[left];
        int keyindex = left;
        while(left < right)
        {
            while(left < right && res[right]+key>= key+res[right])
                --right;
            while(left < right && res[left]+key <= key+res[left])
                ++left;
                swap(res[left],res[right]);
        }
        swap(res[left],res[keyindex]);
        return left;
    }
    void quicksort(vector<string>& res,int left,int right)
    {
        if(left >= right)
            return;
        int mid = _quicksort(res,left,right);
        quicksort(res,left,mid-1);
        quicksort(res,mid+1,right);
    }
    string minNumber(vector<int>& nums) {
        vector<string> res;
        for(auto e:nums)
        {
            res.push_back(to_string(e));
        }
        quicksort(res,0,res.size()-1);
        string str;
        for(auto e:res)
            str+=e;
        return str;
    }
};
