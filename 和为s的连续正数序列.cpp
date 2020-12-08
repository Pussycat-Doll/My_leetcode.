class Solution {
public:
	//时间复杂度：O(N^3) 
	//空间复杂度:O(1) 
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
        vector<vector<int>> ant;
        for(int i = 1; i <= sum/2; ++i)//左边界
        {
            for(int j = i+1; j < sum; ++j)//右边界
            {
                int temp = 0;
                for(int k = i; k <=j; ++k)
                {
                    temp += k;
                }
                if(temp == sum)
                {
                    vector<int> res;
                    for(int k = i; k <= j; ++k)
                    {
                        res.push_back(k);
                    }
                    ant.push_back(res);
                }
                else if(temp > sum)
                    break;
            }
        }
        return ant;
    }
};



class Solution {
public:
	//时间复杂度:O(N^2) 
	//空间复杂度:O(1) 
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
        int temp = 0;
        vector<vector<int>> ant;
        for(int i = 1; i <= sum/2; ++i)
        {
            for(int j = i; j < sum; ++j)
            {
                temp+=j;
                if(temp == sum)
                {
                    vector<int> res;
                    for(int k = i; k <= j; ++k)
                    {
                        res.push_back(k);
                    }
                    ant.push_back(res);
                }
                else if(temp > sum)//剪枝
                {
                    temp = 0;
                    break;
                }
            }
        }
        return ant;
    }
};


class Solution {
public:
	//时间复杂度：O(1) 
    vector<vector<int> > FindContinuousSequence(int sum) {
        
        vector<vector<int>> ant;
        int left = 1,right = 1;
        int temp = 0;
        while(left <= sum/2)
        {
            if(temp < sum)//扩大窗口
            {
                temp += right;
                ++right;
            }
            else if(temp > sum)//缩小窗口
            {
                temp -= left;
                ++left;
            }
            else
            {
                vector<int> res;
                for(int k = left; k < right; ++k)
                {
                    res.push_back(k);
                }
                ant.push_back(res);
                temp -= left;//再次缩小窗口寻找其他结果
                ++left;
            }
        }
        return ant;
    }
};
