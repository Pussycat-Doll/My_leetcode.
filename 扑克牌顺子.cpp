class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
    	//时间复杂度：O（N）
		//空间复杂度：O（N） 
        if(numbers.empty())
            return false;
        set<int> tmp;//方便去重 
        int Max = 0;
        int Min = 14;
        for(auto e:numbers)
        {
            if(e > 0)
            {
                if(tmp.count(e) > 0)//查看是否有重复的非零元素
                    return false;
                else
                {
                    tmp.insert(e);
                    Max = max(Max,e);
                    Min = min(Min,e);
                }
            }
        }
        return Max-Min < 5;//最大值与最小值的差值应该小于5
    }
};


class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
        //排序+遍历
        //时间复杂度：O（NlogN）
        //空间复杂度：O（1）
        if(numbers.empty())
            return false;
        sort(numbers.begin(),numbers.end());
        int sub = 0;
        int i = 0;
        for(; i < numbers.size();++i)
        {
            if(numbers[i] == 0)
            {
                ++sub;
                continue;//跳过剩下的语句，继续下一次循环
            }
            if(i+1 < numbers.size() && numbers[i] == numbers[i+1])
                return false;//有重复的非零值
        }
        return numbers.back()-numbers[sub] < 5;
    }
};
