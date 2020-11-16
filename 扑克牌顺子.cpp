class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
    	//ʱ�临�Ӷȣ�O��N��
		//�ռ临�Ӷȣ�O��N�� 
        if(numbers.empty())
            return false;
        set<int> tmp;//����ȥ�� 
        int Max = 0;
        int Min = 14;
        for(auto e:numbers)
        {
            if(e > 0)
            {
                if(tmp.count(e) > 0)//�鿴�Ƿ����ظ��ķ���Ԫ��
                    return false;
                else
                {
                    tmp.insert(e);
                    Max = max(Max,e);
                    Min = min(Min,e);
                }
            }
        }
        return Max-Min < 5;//���ֵ����Сֵ�Ĳ�ֵӦ��С��5
    }
};


class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
        //����+����
        //ʱ�临�Ӷȣ�O��NlogN��
        //�ռ临�Ӷȣ�O��1��
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
                continue;//����ʣ�µ���䣬������һ��ѭ��
            }
            if(i+1 < numbers.size() && numbers[i] == numbers[i+1])
                return false;//���ظ��ķ���ֵ
        }
        return numbers.back()-numbers[sub] < 5;
    }
};
