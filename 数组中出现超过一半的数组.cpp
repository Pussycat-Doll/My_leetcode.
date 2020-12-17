class Solution {
public:
	//哈希法：
	//时间复杂度：O(n)
    //空间复杂度：O(n)
    int MoreThanHalfNum_Solution(vector<int> numbers) 
    {
        int arr[10] = {0};
        for(auto e:numbers)
            arr[e]++;
        for(int i = 0; i < 10; ++i)
        {
            if(arr[i] > numbers.size()/2)
                return i;
        }
        return 0;
    }
};

class Solution {
public:
	//排序法 
	//先排序，加验证(验证中间的数字出现的次数是否是数组长度的一半) 
	//时间复杂度：O(nlongn)
	//空间复杂度: O(1)
    int MoreThanHalfNum_Solution(vector<int> numbers) 
    {
        sort(numbers.begin(),numbers.end());
        int x = numbers[numbers.size()/2];
        int val = 0;
        for(auto e:numbers)
            if(e == x)
                ++val;
        if(val > numbers.size()/2)
            return x;
        return 0;
    }
};


class Solution {
public:
    /*候选法：
    初始化：候选人cond = -1， 候选人的投票次数cnt = 0
    遍历数组，如果cnt=0， 表示没有候选人，则选取当前数为候选人，++cnt
    否则，如果cnt > 0, 表示有候选人，如果当前数=cond，则++cnt，否则--cnt
    直到数组遍历完毕，最后检查cond是否为众数
    时间复杂度：O(n)
    空间复杂度：O(1)*/
    int MoreThanHalfNum_Solution(vector<int> numbers) 
    {
        int cond = -1, cnt = 0;
        for(int i = 0; i < numbers.size(); ++i)
        {
            if(cnt == 0)
            {
                cond = numbers[i];
                ++cnt;
            }
            else
            {
                if(cond == numbers[i])
                    ++cnt;
                else
                    --cnt;
            }
        }
        cnt = 0;
        for(const auto e:numbers)//验证是否出现了一半
        {
            if(e == cond)
                ++cnt;
        }
        if(cnt > numbers.size()/2)
            return cond;
        return 0;
    }
};
