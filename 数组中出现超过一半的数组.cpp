class Solution {
public:
	//��ϣ����
	//ʱ�临�Ӷȣ�O(n)
    //�ռ临�Ӷȣ�O(n)
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
	//���� 
	//�����򣬼���֤(��֤�м�����ֳ��ֵĴ����Ƿ������鳤�ȵ�һ��) 
	//ʱ�临�Ӷȣ�O(nlongn)
	//�ռ临�Ӷ�: O(1)
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
    /*��ѡ����
    ��ʼ������ѡ��cond = -1�� ��ѡ�˵�ͶƱ����cnt = 0
    �������飬���cnt=0�� ��ʾû�к�ѡ�ˣ���ѡȡ��ǰ��Ϊ��ѡ�ˣ�++cnt
    �������cnt > 0, ��ʾ�к�ѡ�ˣ������ǰ��=cond����++cnt������--cnt
    ֱ�����������ϣ������cond�Ƿ�Ϊ����
    ʱ�临�Ӷȣ�O(n)
    �ռ临�Ӷȣ�O(1)*/
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
        for(const auto e:numbers)//��֤�Ƿ������һ��
        {
            if(e == cond)
                ++cnt;
        }
        if(cnt > numbers.size()/2)
            return cond;
        return 0;
    }
};
