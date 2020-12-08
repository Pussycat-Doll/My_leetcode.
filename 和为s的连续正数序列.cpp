class Solution {
public:
	//ʱ�临�Ӷȣ�O(N^3) 
	//�ռ临�Ӷ�:O(1) 
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
        vector<vector<int>> ant;
        for(int i = 1; i <= sum/2; ++i)//��߽�
        {
            for(int j = i+1; j < sum; ++j)//�ұ߽�
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
	//ʱ�临�Ӷ�:O(N^2) 
	//�ռ临�Ӷ�:O(1) 
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
                else if(temp > sum)//��֦
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
	//ʱ�临�Ӷȣ�O(1) 
    vector<vector<int> > FindContinuousSequence(int sum) {
        
        vector<vector<int>> ant;
        int left = 1,right = 1;
        int temp = 0;
        while(left <= sum/2)
        {
            if(temp < sum)//���󴰿�
            {
                temp += right;
                ++right;
            }
            else if(temp > sum)//��С����
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
                temp -= left;//�ٴ���С����Ѱ���������
                ++left;
            }
        }
        return ant;
    }
};
