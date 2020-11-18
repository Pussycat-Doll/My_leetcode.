class Solution 
{
public:
    //ʱ�临�Ӷ�---O��N��
    //�ռ临�Ӷ�---O��1��
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
        vector<int> res;
        int begin = 0;
        int end = array.size() - 1;
        while(begin < end)
        {
            if(array[begin] + array[end] > sum)
                --end;
            else if(array[begin] + array[end] < sum)
                ++begin;
            else
            {
                res.push_back(array[begin]);
                res.push_back(array[end]);
                break;
            }
        }
        return res;
    }
};
